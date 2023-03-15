// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : device.h
// Author        : Cw
// Created On    : 2023-01-27 21:34
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#include "typedef.h"

#define CONFIG_SERIAL_MMIO 0xa00003f8
#define CONFIG_RTC_MMIO    0xa0000048


extern word_t getRTC_val();
extern void device_init();
extern void serial(word_t data, uint8_t wen);
