// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : typedef.h
// Author        : Cw
// Created On    : 2022-11-11 16:43
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#ifndef _TYPEDEF_H_
#define _TYPEDEF_H_
#include <stdint.h>
typedef uint64_t  word_t;
typedef int64_t  sword_t;
typedef word_t vaddr_t;
typedef word_t paddr_t;

#define FMT_WORD  "0x%016lx" 
#define FMT_PADDR "0x%016lx"
#endif
