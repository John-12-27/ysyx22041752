// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : csrc/exec.cpp
// Author        : Cw
// Created On    : 2022-11-14 20:58
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
// For std::unique_ptr
#include <memory>
#include <stdio.h>
// Include common routines
#include </home/john/verilator/include/verilated.h>
#include "/home/john/verilator/include/verilated_dpi.h"

// Include model header, generated from Verilating "top.v"
#include "Vtop.h"
#include "exec.h"
#include "memory.h"
#include "npc_state.h"
#include "color.h"
#include "tracer.h"

// Legacy function required only so linking works on Cygwin and MSVC++
double sc_time_stamp() { return 0; }

VerilatedContext* contextp;
VerilatedVcdC*    tfp     ;
Vtop* top;

bool *halt_flag = NULL;
extern "C" void halt(const svOpenArrayHandle r)
{
    halt_flag = (bool *)(((VerilatedDpiOpenVar*)r)->datap());
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

static void step_and_dump_wave()
{
    top->eval();
    contextp->timeInc(1);
    tfp->dump(contextp->time());
};

static void single_cycle()
{
    top->clk = 0; top->eval();	
    step_and_dump_wave();
    top->clk = 1; top->eval();
    step_and_dump_wave();
}
