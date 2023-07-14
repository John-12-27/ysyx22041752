// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : diff_dut.c
// Author        : Cw
// Created On    : 2022-11-25 17:22
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#include <assert.h>
#include <stdbool.h>
#include <dlfcn.h>
#include "diff_dut.h"
#include "color.h"
#include "npc_state.h"
#include "memory.h"
#include "monitor.h"

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_pc_cpy)(vaddr_t *pc, bool direction) = NULL;
void (*ref_difftest_gpr_cpy)(word_t *gpr, bool direction) = NULL;
void (*ref_difftest_csr_cpy)(word_t *csr, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO, bool MRET, paddr_t pc) = NULL;

static bool is_skip_ref = false;
static int  skip_dut_nr_inst = 0;

// this is used to let ref skip instructions which
// can not produce consistent behavior with NEMU
void difftest_skip_ref() 
{
    is_skip_ref = true;
    // If such an instruction is one of the instruction packing in QEMU
    // (see below), we end the process of catching up with QEMU's pc to
    // keep the consistent behavior in our best.
    // Note that this is still not perfect: if the packed instructions
    // already write some memory, and the incoming instruction in NEMU
    // will load that memory, we will encounter false negative. But such
    // situation is infrequent.
    skip_dut_nr_inst = 0;
}

void difftest_skip_dut(int nr_ref, int nr_dut) 
{
    skip_dut_nr_inst += nr_dut;

    while (nr_ref -- > 0) 
    {
        ref_difftest_exec(1);
    }
}

static bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc)
{
    if((ref_r->pc != pc) && cpu.pc != pc)
    {
        printf(ANSI_BG_RED "=========================================\n");
        printf("ERROR_PC\t0x%lx\n",cpu.pc);
        printf("REF_NEXTPC\t0x%lx\n",ref_r->pc);
        printf("NPC_NEXTPC\t0x%lx\n",pc);
        printf("=========================================" ANSI_NONE "\n");
        return false;
    }
    for(int i = 0; i < 32; i++)
    {
        if(ref_r->gpr[i] != cpu.gpr[i])
        {
            printf(ANSI_BG_RED "=========================================\n");
            printf("ERROR_PC\t0x%lx\n",cpu.pc);
            printf("REF_GPR[%d]\t0x%lx\n",i,ref_r->gpr[i]);
            printf("NPC_GPR[%d]\t0x%lx\n",i,cpu.gpr[i]);
            printf("=========================================" ANSI_NONE "\n");
            return false;
        }
    }

    /*for (int i = 1; i < NUM_CSR; i++) */
    /*{*/
        /*if(ref_r->csr[i] != cpu.csr[i])*/
        /*{*/
            /*printf(ANSI_BG_RED "=========================================\n");*/
            /*printf("ERROR_PC\t0x%lx\n",cpu.pc);*/
            /*switch(i)*/
            /*{*/
                /*case 1: printf("ref mtvec \t\tnpc mtvec \n"); break;*/
                /*case 2: printf("ref mepc  \t\tnpc mepc  \n"); break;*/
                /*case 3: printf("ref mcause\t\tnpc mcause\n"); break;*/
                /*default: assert(0);*/
            /*}*/
            /*printf("0x%lx\t\t0x%lx\n",ref_r->csr[i], cpu.csr[i]);*/
            /*printf("=========================================" ANSI_NONE "\n");*/
            /*return false;*/
        /*}*/
    /*}*/

    return true;
}

static bool checkregs(CPU_state *ref, vaddr_t pc) 
{
	bool res = false;
    if (!isa_difftest_checkregs(ref, pc)) 
    {
		res = true;
        npc_state.state = NPC_ABORT;
        npc_state.halt_pc = pc;
        reg_display();
    }
	return res;
}

void init_difftest(char *ref_so_file, long img_size, int port) 
{
    if(!inputD)
    {
        return;
    }
    assert(ref_so_file != NULL);

    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = (void (*)(paddr_t, void *, size_t , bool))dlsym(handle, "difftest_memcpy");
	
    assert(ref_difftest_memcpy);

    ref_difftest_pc_cpy = (void (*)(vaddr_t *, bool))dlsym(handle, "difftest_pc_cpy");

    assert(ref_difftest_pc_cpy);

    ref_difftest_gpr_cpy = (void (*)(word_t *, bool))dlsym(handle, "difftest_gpr_cpy");
    assert(ref_difftest_gpr_cpy);

    ref_difftest_csr_cpy = (void (*)(word_t *, bool))dlsym(handle, "difftest_csr_cpy");
    assert(ref_difftest_csr_cpy);

    ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);
    
    ref_difftest_raise_intr = (void (*)(uint64_t, bool, paddr_t))dlsym(handle, "difftest_raise_intr");
    assert(ref_difftest_raise_intr);
    
    void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
    assert(ref_difftest_init);
    
    Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
    Log("The result of every instruction will be compared with %s", ref_so_file);
    ref_difftest_init(port);
    ref_difftest_memcpy(0x80000000, mem, img_size, DIFFTEST_TO_REF);
    ref_difftest_pc_cpy(&cpu.pc, DIFFTEST_TO_REF);
    ref_difftest_gpr_cpy(cpu.gpr, DIFFTEST_TO_REF);
    /*ref_difftest_csr_cpy(cpu.csr,DIFFTEST_TO_REF);*/
}

bool difftest_step(vaddr_t pc, vaddr_t npc) 
{
    CPU_state ref_r;

    if (skip_dut_nr_inst > 0) 
    {
        ref_difftest_pc_cpy(&ref_r.pc, DIFFTEST_TO_DUT);
        ref_difftest_gpr_cpy(ref_r.gpr, DIFFTEST_TO_DUT);
        ref_difftest_csr_cpy(ref_r.csr,DIFFTEST_TO_DUT);
        if (ref_r.pc == npc) 
        {
            skip_dut_nr_inst = 0;
            return checkregs(&ref_r, npc);
        }
        skip_dut_nr_inst --;
        if (skip_dut_nr_inst == 0)
        {
            printf("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
            assert(0);
        }
        return false;
    }

    if (is_skip_ref)
    {
        // to skip the checking of an instruction, just copy the reg state to reference design
        vaddr_t next_pc = pc+4;
        ref_difftest_pc_cpy(&next_pc, DIFFTEST_TO_REF);
        ref_difftest_gpr_cpy(cpu.gpr, DIFFTEST_TO_REF);
        /*ref_difftest_csr_cpy(cpu.csr,DIFFTEST_TO_REF);*/
        is_skip_ref = false;
        return false;
    }

    ref_difftest_exec(1);
    ref_difftest_pc_cpy(&ref_r.pc, DIFFTEST_TO_DUT);
    ref_difftest_gpr_cpy(ref_r.gpr,DIFFTEST_TO_DUT);
    ref_difftest_csr_cpy(ref_r.csr,DIFFTEST_TO_DUT);

    return checkregs(&ref_r, npc);
}
