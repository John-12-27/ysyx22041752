/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <difftest-def.h>
#include <cpu/decode.h>
#include <memory/host.h>
#include "../../isa/riscv64/include/isa-def.h"

extern uint8_t* guest_to_host(paddr_t paddr);
void difftest_memcpy(paddr_t addr, void *buf, size_t n, bool direction) 
{
    uint8_t *m = (uint8_t*)buf;
    if(direction == DIFFTEST_TO_REF) 
    {
        for(size_t i = 0; i < n; i++)
        {
            host_write(guest_to_host(addr+i), 1, *(m+i));
        }
    } 
    else 
    {
        assert(0);
    }
}

void difftest_pc_cpy(vaddr_t *pc, bool direction) 
{
    if(direction == DIFFTEST_TO_REF) 
    {
        cpu.pc = *pc;
    } 
    else 
    {
        *pc = cpu.pc;
    }
}

void difftest_gpr_cpy(word_t *gpr, bool direction) 
{
    if(direction == DIFFTEST_TO_REF) 
    {
        for(int i = 0; i < 32; i++)
        {
            cpu.gpr[i] = gpr[i];
        }
    } 
    else 
    {
        for(int i = 0; i < 32; i++)
        {
            gpr[i] = cpu.gpr[i];
        }
    }
}

void difftest_csr_cpy(word_t *CSR, bool direction) 
{
    if(direction == DIFFTEST_TO_REF) 
    {
        for(int i = 0; i < NUM_CSR; i++)
        {
            cpu.csr[i].val = CSR[i];
        }
    } 
    else 
    {
        for(int i = 0; i < NUM_CSR; i++)
        {
            CSR[i] = cpu.csr[i].val;
        }
    }
}

extern void cpu_exec(uint64_t n);
void difftest_exec(uint64_t n) 
{
    cpu_exec(n);
}

extern Decode s;
void difftest_raise_intr(word_t NO, bool MRET, paddr_t pc) 
{
    if(MRET)
        cpu.pc = isa_mret_intr();
    else
        cpu.pc = isa_raise_intr(&s, NO, pc);
}

void difftest_init(int port) 
{
    /* Perform ISA dependent initialization. */
    init_isa();
}
