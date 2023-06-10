#include <am.h>
#include <klib-macros.h>
#include "../riscv.h"
#include "npc.h"

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) 
{
    kbd->keycode = (int)(inw(KBD_ADDR));
    kbd->keydown = kbd->keycode > KEYDOWN_MASK;
    if(kbd->keydown)
    {
        kbd->keycode -= KEYDOWN_MASK;
    }
}

