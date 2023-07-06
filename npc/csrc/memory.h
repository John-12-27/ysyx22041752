// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : memory.h
// Author        : Cw
// Created On    : 2022-11-11 11:24
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#ifndef __MEMORY_H_
#define __MEMORY_H_
#include "typedef.h"
#include <stdio.h>
#include <assert.h>
#include "monitor.h"
#include "device.h"
#include "keyboard.h"
#include "npc_state.h"

#define MEMSIZE   0x8000000
#define MBASEADDR 0x80000000
extern uint8_t mem[MEMSIZE];
extern long load_img(char *img);
//extern word_t vaddr_read(vaddr_t vaddr);
//extern void vaddr_write(vaddr_t vaddr, word_t data, uint8_t wen);

inline word_t paddr_read(paddr_t paddr)
{
    if((paddr >= MBASEADDR) && (paddr < (MBASEADDR + MEMSIZE)))
    {
        paddr_t entry = (paddr-MBASEADDR)/8;
        word_t data = *(uint64_t *)(mem + 8*entry);
        return data;
    }
    else if(paddr == CONFIG_RTC_MMIO)
    {
        word_t data = getRTC_val();
        return data;
    }
    else if(paddr == CONFIG_GPU_CONFIG_MMIO)
    {
        word_t data = (word_t)vgactl_port_base[0];
        return data;
    }
    else if(paddr == CONFIG_KBD_ADDR_MMIO)
    {
        i8042_data_io_handler();
        word_t data = (word_t)i8042_data_port_base[0];
        return data;
    }
    else
    {
        printf("read addr error : %lx\n", paddr);
    }
    return 0;
}

inline void paddr_write(paddr_t paddr, word_t data, uint8_t wen)
{
    if((paddr >= MBASEADDR) && (paddr < (MBASEADDR + MEMSIZE)))
    {
        paddr_t entry = (paddr-MBASEADDR)/8;
        switch(wen)
        {
            case 0xff: *(uint64_t *)(mem + 8*entry  ) = (uint64_t)data;     break;
            case 0x0f: *(uint32_t *)(mem + 8*entry  ) = (uint32_t)((word_t)data    ); break;
            case 0xf0: *(uint32_t *)(mem + 8*entry+4) = (uint32_t)((word_t)data>>32); break;
            case 0x03: *(uint16_t *)(mem + 8*entry  ) = (uint16_t)((word_t)data    ); break;
            case 0x06: *(uint16_t *)(mem + 8*entry+1) = (uint16_t)((word_t)data>>8 ); break;
            case 0x0c: *(uint16_t *)(mem + 8*entry+2) = (uint16_t)((word_t)data>>16); break;
            case 0x18: *(uint16_t *)(mem + 8*entry+3) = (uint16_t)((word_t)data>>24); break;
            case 0x30: *(uint16_t *)(mem + 8*entry+4) = (uint16_t)((word_t)data>>32); break;
            case 0x60: *(uint16_t *)(mem + 8*entry+5) = (uint16_t)((word_t)data>>40); break;
            case 0xc0: *(uint16_t *)(mem + 8*entry+6) = (uint16_t)((word_t)data>>48); break;
            case 0x01: *(uint8_t  *)(mem + 8*entry  ) = (uint8_t) ((word_t)data    ); break;
            case 0x02: *(uint8_t  *)(mem + 8*entry+1) = (uint8_t) ((word_t)data>>8 ); break;
            case 0x04: *(uint8_t  *)(mem + 8*entry+2) = (uint8_t) ((word_t)data>>16); break;
            case 0x08: *(uint8_t  *)(mem + 8*entry+3) = (uint8_t) ((word_t)data>>24); break;
            case 0x10: *(uint8_t  *)(mem + 8*entry+4) = (uint8_t) ((word_t)data>>32); break;
            case 0x20: *(uint8_t  *)(mem + 8*entry+5) = (uint8_t) ((word_t)data>>40); break;
            case 0x40: *(uint8_t  *)(mem + 8*entry+6) = (uint8_t) ((word_t)data>>48); break;
            case 0x80: *(uint8_t  *)(mem + 8*entry+7) = (uint8_t) ((word_t)data>>56); break;
            default:   printf("wen err!!!\n");  
                       assert(0); break;
        }
    }
    else if(paddr == CONFIG_SERIAL_MMIO)
    {
        serial(data, wen);
    }
    else if(paddr == CONFIG_GPU_SYNC_MMIO)
    {
        vgactl_port_base[1] = (uint32_t)((word_t)data>>32);
    }
    else if((paddr >= CONFIG_GPU_FBDRAW_MMIO) && (paddr < (CONFIG_GPU_FBDRAW_MMIO + SCREEN_SIZE)))
    {
        paddr_t entry = (paddr-CONFIG_GPU_FBDRAW_MMIO)/8;
        paddr_t offset= (paddr-CONFIG_GPU_FBDRAW_MMIO)%8;
        switch(offset)
        {
            case 0: *(uint32_t *)(vmem+8*entry  ) = (uint32_t)data;               break;
            case 4: *(uint32_t *)(vmem+8*entry+4) = (uint32_t)((word_t)data>>32); break;
            default: printf("paddr=0x%lx, entry=%ld, offset=%ld\n", paddr, entry, offset);  
                     assert(0);
        }
    }
    else
    {
        printf("pc=0x%lx, write addr error=0x%lx\n", cpu.pc, paddr);
        assert(0);
    }
}


#endif
