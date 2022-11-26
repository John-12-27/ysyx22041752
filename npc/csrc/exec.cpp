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

VerilatedContext* contextp;
VerilatedVcdC*    tfp     ;
Vtop* top;

uint8_t halt_flag  = 0;
uint8_t valid_flag = 0;

static void step_and_dump_wave()
{
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
};

static void single_cycle()
{
    top->clk = 1; top->eval();	
    step_and_dump_wave();
    top->clk = 0; top->eval();
    step_and_dump_wave();
}

void sim_exit()
{
    step_and_dump_wave();
    tfp->close();
}

static bool trace_diff_watch()
{
    bool res = false;
    if(valid_flag)
    {
        //printf("pc=0x%lx\t\tinst=0x%lx\n", S.pc, S.inst);
        for(int i = 0; i < 32; i++)
        {
            cpu.gpr[i] = cpu_gpr[i];
        }
        cpu.pc = S.pc;
        if(log_enable(S.pc))
        {
            log_inst(&S);
        }
        res = difftest_step(S.pc, S.dnpc);
        res = checkChange();
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
    top->inst_sram_rdata = read_mem(top->inst_sram_addr, 4);
    single_cycle();

    record(&halt_flag, &valid_flag, (long long int*)&(S.pc), (long long int*)&(S.dnpc), (int*)&(S.inst));
}

void reset(int n)
{
    top->reset = 1;
    while(n-- > 0)
    {
        single_cycle();
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

void exec(uint64_t n, bool batch)
{
    svSetScope(svGetScopeFromName("TOP.top.u_dpi_c"));
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
        case NPC_RUNNING: npc_state.state = NPC_STOP; output_iRingBuf(); break;
        case NPC_END: 
        case NPC_ABORT:
            Log("npc: %s at pc = " FMT_WORD, (npc_state.state == NPC_ABORT ? ANSI_FMT("ABORT", ANSI_FG_RED) : (npc_state.halt_ret == 0 ? ANSI_FMT("HIT GOOD TRAP", ANSI_FG_GREEN) : ANSI_FMT("HIT BAD TRAP", ANSI_FG_RED))), npc_state.halt_pc);
      // fall through
        case NPC_QUIT: 
            output_iRingBuf();
    }
}
