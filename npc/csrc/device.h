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

#define CONFIG_SERIAL_MMIO        0xa00003f8
#define CONFIG_RTC_MMIO           0xa0000048
#define CONFIG_KBD_ADDR_MMIO      0xa0000060

#define SCREEN_W 400
#define SCREEN_H 300
#define SCREEN_SIZE (SCREEN_H * SCREEN_W * sizeof(uint32_t))
#define CONFIG_GPU_CONFIG_MMIO    0xa0000100
#define CONFIG_GPU_SYNC_MMIO      0xa0000104
#define CONFIG_GPU_FBDRAW_MMIO    0xa1000000

extern uint8_t *vmem;
extern uint32_t *vgactl_port_base;

extern void vga_update_screen();
extern word_t getRTC_val();
extern void device_init();
extern void serial(word_t data, uint8_t wen);

extern void device_update();
