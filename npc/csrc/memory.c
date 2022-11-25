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

uint8_t mem[MEMSIZE] = {};

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

word_t read_mem(paddr_t addr, uint8_t len)
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
