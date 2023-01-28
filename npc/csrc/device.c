// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : device.c
// Author        : Cw
// Created On    : 2023-01-27 21:59
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#include <sys/time.h>
#include <stdio.h>
#include "device.h"
#include <assert.h>

static uint64_t boot_time = 0;

static inline word_t get_time_internal()
{
    struct timeval now;
    gettimeofday(&now, NULL);
    return (now.tv_sec * 1000000 + now.tv_usec);
}

word_t getRTC_val()
{
    if(boot_time == 0)
    {
        boot_time = get_time_internal();
    }
    return (get_time_internal() - boot_time);
}

void device_init()
{
    getRTC_val();
}

void serial(word_t data, uint8_t wen)
{
    if(wen != 0)
    {
        putc((uint8_t)data, stderr);
    }
    else
    {
        printf("write addr error!\n");
        printf("can't read!\n");
        assert(0);
    }
}
