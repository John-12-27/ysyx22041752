// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : csrc/display_regs.h
// Author        : Cw
// Created On    : 2022-11-12 16:07
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#ifndef _NPC_STATE_H_
#define _NPC_STATE_H_
#include "typedef.h"

typedef struct Decode {
    vaddr_t pc; 
    vaddr_t snpc; // static next pc
    vaddr_t dnpc; // dynamic next pc
    word_t inst;
    char logbuf[256];
    char mlogbuf[256];
    char dlogbuf[256];
} Decode;

#define NUM_CSR 4

//typedef struct {
    //word_t  val;
    //vaddr_t addr;
//} riscv_CSR;

typedef struct CPU_state {
    vaddr_t pc; 
    word_t gpr[32];
    word_t csr[NUM_CSR];
    //riscv_CSR csr[NUM_CSR];
} CPU_state;

enum 
{ 
    NPC_RUNNING, 
    NPC_STOP   , 
    NPC_END    , 
    NPC_ABORT  , 
    NPC_QUIT 
};

typedef struct 
{
    int state;
    vaddr_t halt_pc;
    uint32_t halt_ret;
} NPCState;


extern Decode S;
extern Decode M;
extern Decode D;
extern CPU_state cpu;
extern NPCState npc_state;
extern const char *regs[];
extern uint64_t *cpu_gpr;
extern uint64_t *cpu_csr;
extern void reg_display();
extern int is_exit_status_bad();

#endif
