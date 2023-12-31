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

#include <memory/host.h>
#include <memory/paddr.h>
#include <device/mmio.h>
#include <isa.h>

#if   defined(CONFIG_PMEM_MALLOC)
static uint8_t *pmem = NULL;
#else // CONFIG_PMEM_GARRAY
static uint8_t pmem[CONFIG_MSIZE] PG_ALIGN = {};
#endif

uint8_t* guest_to_host(paddr_t paddr) 
{ 
    return pmem + paddr - CONFIG_MBASE; 
}

paddr_t host_to_guest(uint8_t *haddr) 
{
    return haddr - pmem + CONFIG_MBASE; 
}

static word_t pmem_read(paddr_t addr, int len) 
{
    word_t ret = host_read(guest_to_host(addr), len);
    return ret;
}

static void pmem_write(paddr_t addr, int len, word_t data) {
  host_write(guest_to_host(addr), len, data);
}

static void out_of_bound(paddr_t addr, int type) {
  panic("err type is %s address = " FMT_PADDR " out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      type==0?"ifetch":type==1?"mem read":"mem write",addr, (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1, cpu.pc);
}

void init_mem() {
#if   defined(CONFIG_PMEM_MALLOC)
  pmem = malloc(CONFIG_MSIZE);
  assert(pmem);
#endif
#ifdef CONFIG_MEM_RANDOM
  uint32_t *p = (uint32_t *)pmem;
  int i;
  for (i = 0; i < (int) (CONFIG_MSIZE / sizeof(p[0])); i ++) {
    p[i] = rand();
  }
#endif
  Log("physical memory area [" FMT_PADDR ", " FMT_PADDR "]",
      (paddr_t)CONFIG_MBASE, (paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1);
}

#ifdef CONFIG_MTRACE
extern bool mtrace_enable(paddr_t paddr);
extern void log_inst(Decode *s);
extern void log_mem(Decode *s, paddr_t paddr, word_t data, bool read);
#endif


word_t paddr_ifetch(paddr_t addr, int len) 
{
    if (likely(in_pmem(addr))) 
    {
        word_t data = pmem_read(addr, len);
        return data;
    }
    out_of_bound(addr,0);
    return 0;
}

word_t paddr_read(Decode *s, paddr_t addr, int len) 
{
    if (likely(in_pmem(addr))) 
    {
        word_t data = pmem_read(addr, len);
#ifdef CONFIG_MTRACE
        if(mtrace_enable(addr))
        {
            log_inst(s);
            log_mem(s, addr, data, true);
        }
#endif
        return data;
    }
    IFDEF(CONFIG_DEVICE, return mmio_read(s, addr, len));
    out_of_bound(addr,1);
    return 0;
}

void paddr_write(Decode *s, paddr_t addr, int len, word_t data) 
{
    if (likely(in_pmem(addr))) 
    { 
        pmem_write(addr, len, data); 
#ifdef CONFIG_MTRACE
        if(mtrace_enable(addr))
        {
            log_inst(s);
            log_mem(s, addr, data, false);
        }
#endif
        return; 
    }
    IFDEF(CONFIG_DEVICE, mmio_write(s, addr, len, data); return);
    out_of_bound(addr,2);
}
