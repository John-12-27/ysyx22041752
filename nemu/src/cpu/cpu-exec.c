/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <cpu/cpu.h>
#include <cpu/decode.h>
#include <cpu/difftest.h>
#include <locale.h>
#include <sdb.h>
/* The assembly code of instructions executed is only output to the screen
 * when the number of instructions executed is less than this value.
 * This is useful when you use the `si' command.
 * You can modify this value as you want.
 */
#define MAX_INST_TO_PRINT 10

extern symFunc *pFirstFunc;
extern void freeAllStrTab();
extern void freeAllFunc(symFunc *p);
extern bool log_enable(vaddr_t pc);
extern void findStr(vaddr_t pc);
extern void log_inst(Decode *s);
extern void output_iRingBuf();
extern void output_mRingBuf();
extern void output_dRingBuf();
CPU_state cpu = {};
uint64_t g_nr_guest_inst = 0;
static uint64_t g_timer = 0; // unit: us
static bool g_print_step = false;

void device_update();


static void difftest_and_watchpoint(Decode *_this, vaddr_t dnpc) 
{
    IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));
#ifdef CONFIG_WATCHPOINTS
    if(checkChange())
    {
        nemu_state.state = NEMU_STOP;
        findStr(_this->dnpc);
    }
#endif
}

void call_return(vaddr_t pc, vaddr_t dnpc);
static void exec_once(Decode *s, vaddr_t pc) 
{
    s->pc = pc;
    s->snpc = pc;
    isa_exec_once(s);
    cpu.pc = s->dnpc;
#ifdef CONFIG_FTRACE
    if(s->jalTag || s->jalrTag)
    {
        call_return(s->snpc, s->dnpc);
    }
#endif
#ifdef CONFIG_ITRACE
    if(log_enable(pc))
    {
        log_inst(s);
    }
#endif
}

static void execute(uint64_t n) 
{
    Decode s;
    for (;n > 0; n --) 
    {
        exec_once(&s, cpu.pc);
        g_nr_guest_inst ++;
        if (g_print_step) 
        { 
            IFDEF(CONFIG_ITRACE, puts(s.logbuf)); 
        }
        difftest_and_watchpoint(&s, cpu.pc);
        if (nemu_state.state != NEMU_RUNNING) 
        {
            break;
        }
        IFDEF(CONFIG_DEVICE, device_update());
    }
}

static void statistic() 
{
#ifdef CONFIG_FTRACE
    freeAllStrTab();
    freeAllFunc(pFirstFunc);
#endif
    IFNDEF(CONFIG_TARGET_AM, setlocale(LC_NUMERIC, ""));
#define NUMBERIC_FMT MUXDEF(CONFIG_TARGET_AM, "%ld", "%'ld")
    Log("host time spent = " NUMBERIC_FMT " us", g_timer);
    Log("total guest instructions = " NUMBERIC_FMT, g_nr_guest_inst);
    if (g_timer > 0) 
        Log("simulation frequency = " NUMBERIC_FMT " inst/s", g_nr_guest_inst * 1000000 / g_timer);
    else 
        Log("Finish running in less than 1 us and can not calculate the simulation frequency");
}

void assert_fail_msg() 
{
  isa_reg_display();
  statistic();
}

/* Simulate how the CPU works. */
void cpu_exec(uint64_t n) 
{
    g_print_step = (n < MAX_INST_TO_PRINT);
    switch (nemu_state.state) 
    {
        case NEMU_END: 
        case NEMU_ABORT:
        printf("Program execution has ended. To restart the program, exit NEMU and run again.\n");
        return;
        default: nemu_state.state = NEMU_RUNNING;
    }

    uint64_t timer_start = get_time();

    execute(n);

    uint64_t timer_end = get_time();
    g_timer += timer_end - timer_start;

    switch (nemu_state.state) 
    {
        case NEMU_RUNNING: 
            nemu_state.state = NEMU_STOP; break;
        case NEMU_END: 
        case NEMU_ABORT:
            Log("nemu: %s at pc = " FMT_WORD, (nemu_state.state == NEMU_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) : (nemu_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))), nemu_state.halt_pc);

      // fall through
        case NEMU_QUIT: 
#ifdef CONFIG_ITRACE
            output_iRingBuf(); 
#endif
#ifdef CONFIG_MTRACE
            output_mRingBuf();
#endif
#ifdef CONFIG_DTRACE
            output_dRingBuf();
#endif
            statistic();
    }
}
