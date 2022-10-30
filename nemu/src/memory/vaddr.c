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
#include <memory/paddr.h>
#include <cpu/decode.h>
extern bool mtrace_enable(vaddr_t vaddr, paddr_t paddr); 
extern void log_inst(Decode *s);
extern void log_mem(Decode *s, vaddr_t vaddr, paddr_t paddr, word_t data, bool read);

word_t vaddr_ifetch(vaddr_t addr, int len) {
  return paddr_read(addr, len);
}

word_t vaddr_read(Decode *s, vaddr_t addr, int len) 
{
    paddr_t paddr = addr;
    word_t data = paddr_read(paddr, len);

#ifdef CONFIG_MTRACE
    bool status = mtrace_enable(addr, paddr);
    if(status)
    {
        log_inst(s);
        /*mlog_write("%s", s->logbuf);*/
        /*mlog_write("\t");*/
        log_mem(s, addr, paddr, data, true);
        /*mlog_write("%s\n", s->mlogbuf);*/
    }
#endif
    return data;
}

void vaddr_write(Decode *s, vaddr_t addr, int len, word_t data) 
{
    paddr_t paddr = addr;
    paddr_write(paddr, len, data);
#ifdef CONFIG_MTRACE
    bool status = mtrace_enable(addr, paddr);
    if(status)
    {
        log_inst(s);
        /*mlog_write("%s", s->logbuf);*/
        /*mlog_write("\t");*/
        log_mem(s, addr, paddr, data, false);
        /*mlog_write("%s\n", s->mlogbuf);*/
    }
#endif
}
