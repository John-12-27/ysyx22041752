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
#include "tracer.h"

uint8_t mem[MEMSIZE] = {};
/*uint8_t dmem[MEMSIZE] = {};*/

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

word_t inst_fetch(paddr_t addr, uint8_t len)
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

word_t read_mem(paddr_t addr)
{
    if((addr < MBASEADDR)|| (addr >= (MEMSIZE+MBASEADDR)))
    {
        return 0;
    }
    word_t data;

    /*switch(len)*/
    /*{*/
        /*case 1: data = *(uint8_t  *)(mem + addr - MBASEADDR); break;*/
        /*case 2: data = *(uint16_t *)(mem + addr - MBASEADDR); break;*/
        /*case 4: data = *(uint32_t *)(mem + addr - MBASEADDR); break;*/
        /*case 8: data = *(uint64_t *)(mem + addr - MBASEADDR); break;*/
        /*default: assert(0); break;*/
    /*}*/

    data = *(uint64_t *)(mem + addr - MBASEADDR);
    /*if(mtrace_enable(addr, addr))*/
    {
        log_inst(&M, false);
        log_mem(&M, addr, addr, data, true);
    }
    return data;
}

word_t write_mem(paddr_t addr, word_t data, uint8_t wen)
{
    if((addr < MBASEADDR)|| (addr >= (MEMSIZE+MBASEADDR)))
    {
        return 0;
    }
    switch(wen)
    {
        case 0x01: *(uint8_t  *)(mem + addr - MBASEADDR) = data; break;
        case 0x03: *(uint16_t *)(mem + addr - MBASEADDR) = data; break;
        case 0x0f: *(uint32_t *)(mem + addr - MBASEADDR) = data; break;
        case 0xff: *(uint64_t *)(mem + addr - MBASEADDR) = data; break;
        default: assert(0); break;
    }
    /*if(mtrace_enable(addr, addr))*/
    {
        log_inst(&M, false);
        log_mem(&M, addr, addr, data, false);
    }
    return 0;
}
