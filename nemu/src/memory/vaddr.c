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

vaddr_t TEST_VADDR;

word_t vaddr_ifetch(vaddr_t addr, int len) 
{
    return paddr_ifetch(addr, len);
}

word_t vaddr_read(Decode *s, vaddr_t addr, int len) 
{
    /*paddr_t paddr = addr;*/
    TEST_VADDR = addr;
    word_t data = paddr_read(s, TEST_VADDR, len);
    /*word_t data = paddr_read(s, paddr, len);*/
    return data;
}

void vaddr_write(Decode *s, vaddr_t addr, int len, word_t data) 
{
    paddr_t paddr = addr;
    paddr_write(s, paddr, len, data);
}
