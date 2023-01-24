#include <am.h>
#include <nemu.h>
#include <stdio.h>

#define KEYDOWN_MASK 0x8000

void __am_input_keybrd(AM_INPUT_KEYBRD_T *kbd) 
{
    kbd->keycode = (int)(inw(KBD_ADDR));
    kbd->keydown = kbd->keycode > KEYDOWN_MASK;
    if(kbd->keydown)
    {
        kbd->keycode -= KEYDOWN_MASK;
    }

    /*if(kbd->keycode != AM_KEY_NONE)*/
    /*{*/
    /*printf("keycode is %x\n", kbd->keycode);*/
    /*printf("keydown is %x\n", kbd->keydown);*/
    /*}*/

}
