// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : exec.h
// Author        : Cw
// Created On    : 2022-11-12 11:44
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#ifndef _EXEC_H_
#define _EXEC_H_
#include <stdbool.h>
#include "typedef.h"
#include "npc_state.h"
#include "tracer.h"
#include "wp.h"

extern uint8_t halt_flag ;
extern uint8_t valid_flag;
static inline bool halt()
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

static inline bool trace_diff_watch()
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
        //difftest_step(S.pc, S.dnpc);
        if(checkChange())
        {
            res = true;
        }
    }
    return res;
}

extern void reset(int n);
extern void sim_init(int argc, char** argv);
extern void exec(uint64_t n, bool batch);
extern void sim_exit();
#endif
