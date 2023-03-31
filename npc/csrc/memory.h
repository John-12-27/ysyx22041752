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

#define MEMSIZE   0x8000000
#define MBASEADDR 0x80000000
extern uint8_t mem[MEMSIZE];

extern long load_img(char *img);
extern word_t vaddr_read(vaddr_t vaddr);
extern word_t vaddr_ifetch(vaddr_t addr, uint8_t len);
extern void vaddr_write(vaddr_t addr, word_t data, uint8_t wen);
#endif