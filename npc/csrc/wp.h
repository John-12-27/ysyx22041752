// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : wp.h
// Author        : Cw
// Created On    : 2022-11-11 16:32
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#ifndef _WP_H_
#define _WP_H_
#include <stdbool.h>
#include "typedef.h"

#define NR_WP 32
#define EXPR_MAX_LEN 32

typedef struct watchpoints
{
    int NO;
    word_t OldVal;
    word_t NewVal;
    char *expr;
    struct watchpoints *next;
} WP;

extern void init_wp_pool();
extern WP *new_wp(bool *success);
extern void free_wp(WP *wp);
extern void displayWp();
extern WP *num2wp(uint8_t n);//监视点数很大时要修改参数数据类型
extern bool checkChange();

#endif
