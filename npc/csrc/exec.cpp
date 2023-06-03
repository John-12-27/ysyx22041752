// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : exec.cpp
// Author        : Cw
// Created On    : 2022-11-12 11:38
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <Vtop.h>
#include <stdio.h>
/*#include "svdpi.h"*/
/*#include "Vtop__Dpi.h"*/
#include "exec.h"
#include "memory.h"
#include "color.h"
//#include "verilated_dpi.h"
#include "Vtop__Dpi.h"
#include "npc_state.h"
#include "tracer.h"
#include "wp.h"
#include "diff_dut.h"
#include "device.h"
#include <sys/time.h>

VerilatedContext* contextp;
VerilatedVcdC*    tfp     ;
Vtop* top;

uint8_t halt_flag  = 0;
uint8_t valid_flag = 0;
uint8_t exp_flag   = 0;
uint8_t mret_flag  = 0;

#ifdef DUMP_WAVE
static void step_and_dump_wave()
{
    //top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
};
#endif

static void single_cycle()
{
    top->clk = 0; top->eval();
    //top->clk = 1; top->eval();	
#ifdef DUMP_WAVE
    step_and_dump_wave();
#endif
    //top->clk = 0; top->eval();
    top->clk = 1; top->eval();	
#ifdef DUMP_WAVE
    step_and_dump_wave();
#endif
}

void sim_exit()
{
#ifdef DUMP_WAVE
    step_and_dump_wave();
#endif
    tfp->close();
}

extern void (*ref_difftest_raise_intr)(uint64_t NO, bool MRET);
static bool trace_diff_watch()
{
    bool res = false;
#ifdef CONFIG_DIFFTEST
    if(exp_flag)
    {
        ref_difftest_raise_intr(11, false);
    }
    else if(mret_flag)
    {
        ref_difftest_raise_intr(0, true);
    }
#endif
    if(valid_flag)
    {
        for(int i = 0; i < 32; i++)
        {
            cpu.gpr[i] = cpu_gpr[i];
        }
        for(int i = 0; i < NUM_CSR; i++)
        {
            cpu.csr[i] = cpu_csr[i];
        }
        cpu.pc = S.pc;
#ifdef CONFIG_ITRACE
        if(log_enable(S.pc))
        {
            log_inst(&S);
#ifdef CONFIG_ITRACE_DIRECT
            itrace_write("%s\n", S.logbuf);
#else
            RingBufLoad(S.logbuf, 0);
#endif
        }
#endif

#ifdef CONFIG_DIFFTEST
        res = difftest_step(S.pc, S.dnpc);
#endif
#ifdef CONFIG_WATCHPOINT
        if(!res)
        {
            res = checkChange();
        }
#endif
    }
    return res;
}

static bool halt()
{
    bool res = false;
    if(halt_flag)
    {
        npc_state.state = NPC_END;
        npc_state.halt_pc = S.pc;
        npc_state.halt_ret = cpu_gpr[10];
        res = true;
    }
    return res;
}

bool inst_ract = false;
bool mem_ract  = false;
paddr_t fetch_addr;
paddr_t mem_addr;
word_t  mem_wdata;
uint8_t mem_wen;
paddr_t fspc;
paddr_t espc;
static void exec_once()
{
    top->clk = 0; 

    if(inst_ract)
    {
        if(fetch_addr == 0)
        {
            printf("%lx\n", S.pc);
            printf("%lx\n", fspc);
            printf("%lx\n", espc);

            assert(0);
        }
        inst_ract = false;
        top->inst_sram_rdata = vaddr_ifetch(fetch_addr, 4);
    }

    if(top->inst_sram_en)
    {
        fetch_addr = top->inst_sram_addr;
        inst_ract = true;
    }

    if(mem_ract)
    {
        mem_ract = false;
        if(!mem_wen)
        {
            top->data_sram_rdata = vaddr_read(mem_addr);
        }
        else
        {
            vaddr_write(mem_addr, mem_wdata, mem_wen);
        }
    }

    if(top->data_sram_en)
    {
        mem_ract = true;
        mem_wdata  = top->data_sram_wdata;
        mem_addr   = top->data_sram_addr;
        mem_wen    = top->data_sram_wen;
        mem_inst((long long int*)&(M.pc), (int*)&(M.inst));   //结构体M记录访问存储器的pc和指令
        D.pc = M.pc;
        D.inst = M.inst;
    }

    top->eval();
#ifdef DUMP_WAVE
    step_and_dump_wave();
#endif
}

void reset(int n)
{
    top->reset = 1;
    while(n-- > 0)
    {
        single_cycle();
    }
    top->reset = 0;
    top->eval();
}

void sim_init(int argc, char** argv)
{
    contextp = new VerilatedContext;
    tfp      = new VerilatedVcdC;
    top      = new Vtop;
	contextp->debug(0);
	contextp->traceEverOn(true);
	contextp->commandArgs(argc, argv);
	top->trace(tfp, 0);
	tfp->open("logs/dump.vcd");
};

static uint64_t get_time_internal() 
{
  struct timeval now;
  gettimeofday(&now, NULL);
  uint64_t us = now.tv_sec * 1000000 + now.tv_usec;
  return us;
}

void exec(uint64_t n, bool batch)
{
    static uint64_t boot_time = get_time_internal();
    static uint64_t cycle_count = 0;
    svSetScope(svGetScopeFromName("TOP.top.U_YSYX_22041752_0.u_dpi_c"));
    switch (npc_state.state) 
    {
        case NPC_END: 
        case NPC_ABORT:
        printf("Program execution has ended. To restart the program, exit NPC and run again.\n");
        return;
        default: npc_state.state = NPC_RUNNING;
    }
    if(batch)
    {
        while(1)
        {
            exec_once();
            cycle_count++;
            top->clk = 1;

            if(top->inst_sram_en)
            {
                fetch_addr = top->inst_sram_addr;
                inst_ract = true;
            }

            if(top->data_sram_en)
            {
                mem_ract = true;
                mem_wdata  = top->data_sram_wdata;
                mem_addr   = top->data_sram_addr;
                mem_wen    = top->data_sram_wen;
                mem_inst((long long int*)&(M.pc), (int*)&(M.inst));   //结构体M记录访问存储器的pc和指令
                D.pc = M.pc;
                D.inst = M.inst;
            }

            record(&halt_flag, &valid_flag, &exp_flag, &mret_flag, (long long int*)&(S.pc), (long long int*)&(fspc), (long long int*)&(espc), (long long int*)&(S.dnpc), (int*)&(S.inst));
                    if(halt())
                    {
                        break;
                    }
                    if(trace_diff_watch())
                    {
                        break;
                    }
            device_update();
            top->eval();
#ifdef DUMP_WAVE
            step_and_dump_wave();
#endif
        }
    }
    else
    {
        while(n--)
        {
            exec_once();
            if(halt())
            {
                break;
            }
            if(trace_diff_watch())
            {
                break;
            }
        }
    }
    switch (npc_state.state) 
    {
        case NPC_RUNNING: npc_state.state = NPC_STOP; break;
        case NPC_END: 
        case NPC_ABORT:
            Log("npc: %s at pc = " FMT_WORD, (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) : (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))), npc_state.halt_pc);
      // fall through
        case NPC_QUIT: 

            uint64_t spend_time = get_time_internal() - boot_time;
            Log("Spend %ldus, %ldms\n", spend_time, spend_time/1000);
            Log("Cycle_count = %ld, T = %ldus\n", cycle_count, spend_time/cycle_count);
            Log("Frequency = %ldHz\n", 1000000/(spend_time/cycle_count));


#if (defined(CONFIG_ITRACE) && (!defined(CONFIG_ITRACE_DIRECT)))
            output_iRingBuf();
#endif
#if (defined(CONFIG_MTRACE) && (!defined(CONFIG_MTRACE_DIRECT)))
            output_mRingBuf();
#endif
#if (defined(CONFIG_DTRACE) && (!defined(CONFIG_DTRACE_DIRECT)))
            output_dRingBuf();
#endif
#ifdef CONFIG_FTRACE
            freeAllStrTab();
            freeAllFunc(pFirstFunc);
#endif
            break;
    }
}
