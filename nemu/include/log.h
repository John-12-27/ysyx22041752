// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : log.h
// Author        : Cw
// Created On    : 2022-10-27 10:16
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#ifndef __LOG_H__
#define __LOG_H__

#define IRINGBUF_DEPTH 10

typedef struct iRingBuf 
{
    char buf[128];
    struct iRingBuf *next;
} iRingBuf;

extern void iRingBufLoad(char logbuf[]);
extern void output_iRingBuf();

#endif
