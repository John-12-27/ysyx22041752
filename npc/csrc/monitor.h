// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : monitor.h
// Author        : Cw
// Created On    : 2022-11-11 11:36
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#ifndef __MONITOR_H_
#define __MONITOR_H_
#include <stdio.h>
#include <stdbool.h>

extern char *img_file;
extern bool inputL;
extern bool inputM;
extern bool inputF;
extern bool NVBOARD_MODE;
extern bool BATCH_MODE;
extern void init_monitor(int argc, char *argv[]);
#endif
