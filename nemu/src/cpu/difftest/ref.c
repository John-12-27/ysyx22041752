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
#include <memory/host.h>

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

void difftest_regcpy(vaddr_t *pc, word_t *gpr, bool direction) 
{
    if(direction == DIFFTEST_TO_REF) 
    {
        cpu.pc = *pc;
        for(int i = 0; i < 32; i++)
        {
            cpu.gpr[i] = gpr[i];
        }
    } 
    else 
    {
        *pc = cpu.pc;
        for(int i = 0; i < 32; i++)
        {
            gpr[i] = cpu.gpr[i];
        }
    }
}

extern void cpu_exec(uint64_t n);
void difftest_exec(uint64_t n) 
{
    cpu_exec(n);
}

void difftest_raise_intr(word_t NO) 
{
    printf("\n");
    printf("No implement\n");
    printf("\n");
}

void difftest_init(int port) 
{
    /* Perform ISA dependent initialization. */
    init_isa();
}
