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

uint8_t halt_flag   = 0;
uint8_t valid_flag  = 0;
uint8_t exp_flag    = 0;
uint8_t mret_flag   = 0;
uint8_t data_en_flag= 1;
uint8_t pre_err     = 0;
uint8_t bj_inst_flag= 0;

#ifdef DUMP_WAVE
static void step_and_dump_wave()
{
    contextp->timeInc(1);
    tfp->dump(contextp->time());
};
#endif

static void single_cycle()
{
    top->clk = 0; 

        if(top->sram_ren)
        {

            //vaddr_t pc;
            //word_t  inst;
            //mem_inst((long long int*)&(pc), (int*)&(inst), &data_en_flag);   //结构体M记录访问存储器的pc和指令
            //if (data_en_flag) 
            //{
                //M.pc   = pc;
                //M.inst = inst;
                //D.pc   = M.pc;
                //D.inst = M.inst;
            //}

            top->sram_rdata = vaddr_read(top->sram_raddr);
        }
        if(top->sram_wen)
        {
            //mem_inst((long long int*)&(M.pc), (int*)&(M.inst), &data_en_flag);   //结构体M记录访问存储器的pc和指令
            //D.pc   = M.pc;
            //D.inst = M.inst;
            vaddr_write(top->sram_waddr, top->sram_wdata, top->sram_wen);
        }

    top->eval();
#ifdef DUMP_WAVE
    step_and_dump_wave();
#endif
    top->clk = 1; 	

    top->eval();

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

static void exec_once()
{
    single_cycle();
}

void reset(int n)
{
    top->reset = 1;
    while(n-- > 0)
    {
        top->clk = 0; top->eval();
#ifdef DUMP_WAVE
        step_and_dump_wave();
#endif
        top->clk = 1; top->eval();	
#ifdef DUMP_WAVE
        step_and_dump_wave();
#endif
    }
    top->reset = 0;
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
    static uint64_t instr_count = 0;
    static uint64_t prerr_count = 0;
    static uint64_t bjinst_count = 0;
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

            record(&halt_flag, &valid_flag, &exp_flag, &mret_flag, &pre_err, &bj_inst_flag, (long long int*)&(S.pc), (long long int*)&(S.dnpc), (int*)&(S.inst));
            if (valid_flag) 
            {
                instr_count++;
            }
            if (bj_inst_flag) 
            {
                bjinst_count++;
                if (pre_err) 
                {
                    prerr_count++;
                }
            }
            if(halt())
            {
                break;
            }
            if(trace_diff_watch())
            {
                break;
            }
            
            device_update();
            if(npc_state.state == NPC_QUIT)
            {
                break;
            }
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
            Log("inst_count= %ld, IPC = %f\n", instr_count, (float)instr_count / (float)cycle_count);
            Log("branch_jump_count= %ld\n", bjinst_count);
            Log("prediction_err_count= %ld, Accuracy = %f\n", prerr_count, ((float)bjinst_count- (float)prerr_count) / (float)(bjinst_count));


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
