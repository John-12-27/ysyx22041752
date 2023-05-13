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
#include <stdbool.h>
#include "device.h"
#include "npc_state.h"
#include <assert.h>
#include <SDL2/SDL.h>

#define TIMER_HZ 60
uint8_t *vmem = NULL;
uint32_t *vgactl_port_base = NULL;

static SDL_Renderer *renderer = NULL;
static SDL_Texture *texture = NULL;

static void init_screen() {
  SDL_Window *window = NULL;
  char title[128];
  sprintf(title, "RISCV-NPC");
  SDL_Init(SDL_INIT_VIDEO);
  SDL_CreateWindowAndRenderer(
      SCREEN_W * 2,
      SCREEN_H * 2,
      0, &window, &renderer);
  SDL_SetWindowTitle(window, title);
  texture = SDL_CreateTexture(renderer, SDL_PIXELFORMAT_ARGB8888,
      SDL_TEXTUREACCESS_STATIC, SCREEN_W, SCREEN_H);
}

static inline void update_screen() {
  SDL_UpdateTexture(texture, NULL, vmem, SCREEN_W * sizeof(uint32_t));
  SDL_RenderClear(renderer);
  SDL_RenderCopy(renderer, texture, NULL, NULL);
  SDL_RenderPresent(renderer);
}

void vga_update_screen() 
{
    if(vgactl_port_base[1])
    {
        update_screen();
    }
}

static void init_vga() 
{
    vgactl_port_base = (uint32_t *)malloc(8);
    vmem = (uint8_t *)malloc(screen_size());
    init_screen();
    vgactl_port_base[0] = (screen_width() << 16) | screen_height();
    vgactl_port_base[1] = 0;
    memset(vmem, 0, screen_size());
}

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
    init_vga();
}

void serial(word_t data, uint8_t wen)
{
    if(wen != 0)
    {
        putc((uint8_t)data, stderr);
    }
    else
    {
        printf("can't read from serial!\n");
        assert(0);
    }
}


/*extern void send_key(uint8_t, bool);*/
void device_update() 
{
    static uint64_t last = 0;
    uint64_t now = getRTC_val();
    if (now - last < 1000000 / TIMER_HZ) 
    {
      return;
    }
    last = now;

    vga_update_screen();

    /*SDL_Event event;*/
    /*while (SDL_PollEvent(&event)) */
    /*{*/
        /*switch (event.type) */
        /*{*/
            /*case SDL_QUIT:*/
                /*npc_state.state = NPC_QUIT;*/
                /*break;*/
      /*// If a key was pressed*/
            /*case SDL_KEYDOWN:*/
            /*case SDL_KEYUP: */
                /*{*/
                    /*uint8_t k = event.key.keysym.scancode;*/
                    /*bool is_keydown = (event.key.type == SDL_KEYDOWN);*/
                    /*send_key(k, is_keydown);*/
                    /*break;*/
                /*}*/
        /*default: break;*/
        /*}*/
    /*}*/

}

