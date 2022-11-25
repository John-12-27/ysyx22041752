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

void (*ref_difftest_memcpy)(paddr_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

static bool is_skip_ref      = false;
static int  skip_dut_nr_inst = 0;

void difftest_skip_ref() 
{
    is_skip_ref = true;
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

static void checkregs(npc_state *ref, vaddr_t pc) 
{
    if (!isa_difftest_checkregs(ref, pc)) 
    {
        nemu_state.state = NPC_ABORT;
        nemu_state.halt_pc = pc;
        isa_reg_display();
    }
}

void init_difftest(char *ref_so_file, long img_size, int port) 
{
    assert(ref_so_file != NULL);

    void *handle;
    handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = dlsym(handle, "difftest_memcpy");
    assert(ref_difftest_memcpy);

    ref_difftest_regcpy = dlsym(handle, "difftest_regcpy");
    assert(ref_difftest_regcpy);

    ref_difftest_exec = dlsym(handle, "difftest_exec");
    assert(ref_difftest_exec);
    
    ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
    assert(ref_difftest_raise_intr);
    
    void (*ref_difftest_init)(int) = dlsym(handle, "difftest_init");
    assert(ref_difftest_init);
    
    Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
    Log("The result of every instruction will be compared with %s. "
        "This will help you a lot for debugging, but also significantly reduce the performance. "
        "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);
    ref_difftest_init(port);
    ref_difftest_memcpy(0x80000000, guest_to_host(0x80000000), img_size, DIFFTEST_TO_REF);
    ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
}

void difftest_step(vaddr_t pc, vaddr_t npc) 
{
    CPU_state ref_r;

    if (skip_dut_nr_inst > 0) 
    {
        ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
        if (ref_r.pc == npc) 
        {
            skip_dut_nr_inst = 0;
            checkregs(&ref_r, npc);
            return;
        }
        skip_dut_nr_inst --;
        if (skip_dut_nr_inst == 0)
        {
            panic("can not catch up with ref.pc = " FMT_WORD " at pc = " FMT_WORD, ref_r.pc, pc);
        }
        return;
    }

    if (is_skip_ref) 
    {
        // to skip the checking of an instruction, just copy the reg state to reference design
        ref_difftest_regcpy(&cpu, DIFFTEST_TO_REF);
        is_skip_ref = false;
        return;
    }

    ref_difftest_exec(1);
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);

    checkregs(&ref_r, npc);
}
