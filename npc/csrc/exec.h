// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : exec.h
// Author        : Cw
// Created On    : 2022-11-12 11:44
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#ifndef _EXEC_H_
#define _EXEC_H_
#include <stdbool.h>
#include "typedef.h"
//#define DUMP_WAVE 1

extern uint8_t halt_flag ;
extern uint8_t valid_flag;
extern void reset(int n);
extern void sim_init(int argc, char** argv);
extern void exec(uint64_t n, bool batch);
extern void sim_exit();
#endif
