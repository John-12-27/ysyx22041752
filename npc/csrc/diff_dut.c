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
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

/*static bool is_skip_ref      = false;*/
static int  skip_dut_nr_inst = 0;

/*void difftest_skip_ref() */
/*{*/
    /*is_skip_ref = true;*/
    /*skip_dut_nr_inst = 0;*/
/*}*/

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
        printf("REF_PC\t0x%lx\n",ref_r->pc);
        printf("NPC_PC\t0x%lx\n",pc);
        printf("=========================================" ANSI_NONE "\n");
        /*assert(0);*/
        return false;
    }
    for(int i = 0; i < 32; i++)
    {
        if(ref_r->gpr[i] != cpu.gpr[i])
        {
            printf(ANSI_BG_RED "=========================================\n");
            printf("ERROR_PC\t0x%lx\n",cpu.pc);
            /*printf("REF_PC\t0x%lx\n",ref_r->pc);*/
            printf("REF_GPR[%d]\t0x%lx\n",i,ref_r->gpr[i]);
            /*printf("NPC_PC\t0x%lx\n",pc);*/
            printf("NPC_GPR[%d]\t0x%lx\n",i,cpu.gpr[i]);
            printf("=========================================" ANSI_NONE "\n");
            /*assert(0);*/
			return false;
        }
    }
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

    ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");

    assert(ref_difftest_regcpy);

    ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);
    
    ref_difftest_raise_intr = (void (*)(uint64_t))dlsym(handle, "difftest_raise_intr");
    assert(ref_difftest_raise_intr);
    
    void (*ref_difftest_init)(int) = (void (*)(int))dlsym(handle, "difftest_init");
    assert(ref_difftest_init);
    
    Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
    Log("The result of every instruction will be compared with %s. "
        "This will help you a lot for debugging, but also significantly reduce the performance. "
        "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);
    ref_difftest_init(port);
    ref_difftest_memcpy(0x80000000, mem, img_size, DIFFTEST_TO_REF);
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

bool difftest_step(vaddr_t pc, vaddr_t npc) 
{
    CPU_state ref_r;

    if (skip_dut_nr_inst > 0) 
    {
        ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
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

    if (M.dnpc == S.pc) 
    {
        // to skip the checking of an instruction, just copy the reg state to reference design
        ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
        /*is_skip_ref = false;*/
        return false;
    }

    ref_difftest_exec(1);
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

    return checkregs(&ref_r, npc);
}
