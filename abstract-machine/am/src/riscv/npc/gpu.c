#include <am.h>
#include <klib-macros.h>
#include "../riscv.h"
#include "npc.h"

#define SYNC_ADDR (VGACTL_ADDR + 4)

int SCREEN_WIDTH;

void __am_gpu_init() 
{
    io_read(AM_GPU_CONFIG);
}

void __am_gpu_config(AM_GPU_CONFIG_T *cfg) 
{
    *cfg = (AM_GPU_CONFIG_T) 
    {
        .present   = true , 
        .has_accel = false,
        .width     = inl(VGACTL_ADDR) >> 16        , 
        .height    = inl(VGACTL_ADDR) &  0x0000ffff,
        .vmemsz    = cfg->width * cfg->height
    };
    SCREEN_WIDTH = cfg->width;
}

void __am_gpu_fbdraw(AM_GPU_FBDRAW_T *ctl) 
{
    uint32_t *now_vmem_base = (uint32_t *)FB_ADDR + ctl->y * SCREEN_WIDTH + ctl->x;
    uint32_t *now_pixel_base = (uint32_t *)ctl->pixels;
    for(int i = 0; i < ctl->h; i++) 
    {
        for(int j = 0; j< ctl->w; j++) 
        {
            now_vmem_base[j] = now_pixel_base[j];
        }
        now_vmem_base += SCREEN_WIDTH;
        now_pixel_base += ctl->w;
    }
    if(ctl->sync) 
    {
        outl(SYNC_ADDR, 1);
    }
}

void __am_gpu_status(AM_GPU_STATUS_T *status) 
{
    status->ready = true;
}
