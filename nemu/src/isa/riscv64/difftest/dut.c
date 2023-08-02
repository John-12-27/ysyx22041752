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
#include <cpu/difftest.h>
#include "../local-include/reg.h"

extern CPU_state cpu;
bool isa_difftest_checkregs(vaddr_t pc, CPU_state *ref_r, vaddr_t npc)
{
    if((ref_r->pc != npc))
    {  
        printf(ANSI_BG_RED "=========================================\n");
        printf("ERROR_PC\t0x%lx\n",pc);
        printf("REF_NEXT_PC\t0x%lx\n",ref_r->pc);
        printf("NEMU_NEXT_PC\t0x%lx\n",npc);
        printf("=========================================" ANSI_NONE "\n");
        return false;
    }
    for(int i = 0; i < 32; i++)
    {                         
        if(ref_r->gpr[i] != cpu.gpr[i])
        {                             
            printf(ANSI_BG_RED "=========================================\n"); 
            printf("ERROR_PC\t0x%lx\n",pc);                               
            printf("REF_GPR[%d]\t0x%lx\n",i,ref_r->gpr[i]);                  
            printf("NEMU_GPR[%d]\t0x%lx\n",i,cpu.gpr[i]);                   
            printf("=========================================" ANSI_NONE "\n");
            return false;                                                     
        }                                                                    
    }                                                                       
    return true;   
}

void isa_difftest_attach() 
{

}
