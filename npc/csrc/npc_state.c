// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : npc_state.c
// Author        : Cw
// Created On    : 2022-11-12 16:58
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#include <stdio.h>
#include "npc_state.h"
#include "verilated_dpi.h"

Decode S; //record for every inst
Decode M; //record for the inst which is accessing memory
Decode D; //record for the inst which is accessing devices
CPU_state cpu;
uint64_t *cpu_gpr = NULL;
uint64_t *cpu_csr = NULL;

NPCState npc_state = { .state = NPC_STOP, .halt_pc = 0, .halt_ret = 0};

extern "C" void set_gpr_ptr(const svOpenArrayHandle r)
{
    cpu_gpr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

extern "C" void set_csr_ptr(const svOpenArrayHandle r)
{
    cpu_csr = (uint64_t *)(((VerilatedDpiOpenVar*)r)->datap());
}

const char *regs[] = 
{
  "$0", "$ra",  "$sp", "$gp", "$tp", "$t0", "$t1", "$t2",
  "$s0", "$s1", "$a0", "$a1", "$a2", "$a3", "$a4", "$a5",
  "$a6", "$a7", "$s2", "$s3", "$s4", "$s5", "$s6", "$s7",
  "$s8", "$s9", "$s10","$s11","$t3", "$t4", "$t5", "$t6"
};

const char *csrs[] = 
{
  "mstatus", "mtvec",  "mepc", "mcause" 
};

void reg_display()
{
    printf("======================================\n");
    printf("identifier\taddr\tdata\n");
    for(int i = 0; i < 32; i++)
    {
        printf("%s\t\t%d\t0x%lx\n",regs[i],i,cpu_gpr[i]);
    }
    printf("======================================\n");
    for(int i = 0; i < NUM_CSR; i++)
    {
        printf("%s\t\t%d\t0x%lx\n",csrs[i],i,cpu_csr[i]);
    }
    printf("======================================\n");
    printf("PC\t0x%lx\n",S.pc);
}

int is_exit_status_bad() 
{
    int good = (npc_state.state == NPC_END && npc_state.halt_ret == 0) || (npc_state.state == NPC_QUIT);
    return !good;
}
