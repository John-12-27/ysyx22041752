// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : keyboard.h
// Author        : Cw
// Created On    : 2023-06-09 11:21
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#ifndef _KEYBOARD_H_
#define _KEYBOARD_H_
#include "typedef.h"

#define MAP(c, f) c(f)

// macro concatenation
#define concat_temp(x, y) x ## y
#define concat(x, y) concat_temp(x, y)
#define concat3(x, y, z) concat(concat(x, y), z)
#define concat4(x, y, z, w) concat3(concat(x, y), z, w)
#define concat5(x, y, z, v, w) concat4(concat(x, y), z, v, w)

extern uint32_t *i8042_data_port_base;
extern void i8042_data_io_handler();
extern void init_i8042();
extern void send_key(uint8_t scancode, bool is_keydown);

#endif
