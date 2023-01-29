// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : memory.c
// Author        : Cw
// Created On    : 2022-11-11 11:19
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#include <stdio.h>
#include <assert.h>
#include "memory.h"
#include "monitor.h"
#include "device.h"
#include "tracer.h"
#include "diff_dut.h"

uint8_t mem[MEMSIZE] = {};

static inline word_t paddr_read(paddr_t paddr)
{
    if((paddr >= MBASEADDR) && (paddr < (MBASEADDR + MEMSIZE)))
    {
        word_t data = *(uint64_t *)(mem + paddr - MBASEADDR);
#ifdef CONFIG_MTRACE
        if(mtrace_enable(paddr))
        {
            log_inst(&M);
            log_mem(&M, paddr, data, true);
        }
#endif
        return data;
    }
    else if((paddr >= CONFIG_RTC_MMIO) && (paddr < CONFIG_RTC_MMIO+8))
    {
        word_t data = getRTC_val();
#ifdef CONFIG_DTRACE
        if(dtrace_enable("rtc"))
        {
            log_inst(&D);
            log_device(&D, "rtc", data, true);
        }
#endif
        return data;
    }
    else
    {
        printf("read addr error : %lx\n", paddr);
        assert(0);
    }
    return 0;
}

static inline void paddr_write(paddr_t paddr, word_t data, uint8_t wen)
{
    if((paddr >= MBASEADDR) && (paddr < (MBASEADDR + MEMSIZE)))
    {
        switch(wen)
        {
            case 0x01: *(uint8_t  *)(mem + paddr - MBASEADDR) = data; break;
            case 0x03: *(uint16_t *)(mem + paddr - MBASEADDR) = data; break;
            case 0x0f: *(uint32_t *)(mem + paddr - MBASEADDR) = data; break;
            case 0xff: *(uint64_t *)(mem + paddr - MBASEADDR) = data; break;
            default:   printf("wen err!!!\n");  
                       assert(0); break;
        }
#ifdef CONFIG_MTRACE
        if(mtrace_enable(paddr))
        {
            log_inst(&M);
            log_mem(&M, paddr, data, false);
        }
#endif
    }
    else if(paddr == CONFIG_SERIAL_MMIO)
    {
#ifdef CONFIG_DIFFTEST
        M.dnpc = M.pc; //M.dnpc记录需要越过difftest的指令pc
#endif
        serial(data, wen);
#ifdef CONFIG_DTRACE
        if(dtrace_enable("serial"))
        {
            log_inst(&D);
            log_device(&D, "serial", data, false);
        }
#endif
    }
    else
    {
        printf("write addr error : 0x%lx\n", paddr);
        assert(0);
    }
}

long load_img(char *img)
{
    if(img == NULL)
    {
        printf("\n");
        printf("====== No image is given. ======\n");
        printf("\n");
        return 0;
    }

    FILE *fp = fopen(img, "rb");
    assert(fp != NULL);

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    assert(size < MEMSIZE);

    printf("\n");
    printf("====== The image is %s, size = %ld. ======\n", img, size);
    printf("\n");

    fseek(fp, 0, SEEK_SET);
    int ret = fread(mem, size, 1, fp);
    assert(ret == 1);
    fclose(fp);
    return size;
}

word_t vaddr_ifetch(paddr_t addr, uint8_t len)
{
    switch(len)
    {
        case 1:  return *(uint8_t  *)(mem + addr - MBASEADDR);
        case 2:  return *(uint16_t *)(mem + addr - MBASEADDR);
        case 4:  return *(uint32_t *)(mem + addr - MBASEADDR);
        case 8:  return *(uint64_t *)(mem + addr - MBASEADDR);
        default: assert(0);
    }
    return 0;
}

word_t vaddr_read(vaddr_t vaddr)
{
    paddr_t paddr = vaddr;
    return paddr_read(paddr);
}

void vaddr_write(vaddr_t vaddr, word_t data, uint8_t wen)
{
    paddr_t paddr = vaddr;
    paddr_write(paddr, data, wen);
}

