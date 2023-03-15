// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : expr.h
// Author        : Cw
// Created On    : 2022-11-11 15:19
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#ifndef _EXPR_H_
#define _EXPR_H_
#include <stdbool.h>
#include "typedef.h"

#define NR_REGEX   13
#define STR_LEN    32
#define NUM_TOKENS 32

enum 
{
    TK_NOTYPE = 256, 
    TK_EQ, 
    TK_NEQ, 
    TK_NUM, 
    TK_HEX, 
    TK_AND, 
    TK_REG,
    TK_POINTER,
};

typedef struct token 
{
    int    type;
    word_t val;
} Token;

extern void init_regex();
extern word_t expr(char *e, bool *success);

#endif
