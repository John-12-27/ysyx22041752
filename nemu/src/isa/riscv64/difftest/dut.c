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
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc)
{

    if((ref_r->pc != pc))// && cpu.pc != pc)                                                                           
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

    /*bool res = true;*/
    /*for(int i = 0; i < 32; i++)*/
    /*{*/
        /*if(ref_r->gpr[i] != cpu.gpr[i])*/
        /*{*/
            /*res = false;*/
        /*}*/
    /*}*/
    /*if(ref_r->pc != pc)*/
    /*{*/
        /*res = false;*/
    /*}*/
    /*return res;*/

}

void isa_difftest_attach() 
{

}