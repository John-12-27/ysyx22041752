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
#include <cpu/decode.h>
#include "../local-include/reg.h"

#ifdef CONFIG_ETRACE
extern bool etrace_enable(paddr_t epc, word_t mcause);
extern void log_inst(Decode *s);
extern void log_except(Decode *s, paddr_t epc, word_t mcause);
#endif

word_t isa_raise_intr(Decode *s, word_t NO, vaddr_t epc) 
{
    csrw(0x341, epc); //write to mepc
    csrw(0x342, NO);  //write to mcause
#ifdef CONFIG_ETRACE 
    if(etrace_enable(s->pc, NO))
    {
        log_inst(s);
        log_except(s, epc, NO);
    }
#endif
                      
    return csrrd(0x305); //read from mtvec
}

word_t isa_query_intr() {
  return INTR_EMPTY;
}
