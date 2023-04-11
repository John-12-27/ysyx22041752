#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <assert.h>
#include <sys/time.h>

static int evtdev = -1;
static int fbdev = -1;
static int screen_w = 0, screen_h = 0;

extern int _open(const char *path, int flags, mode_t mode);
extern int _read(int fd, void *buf, size_t count); 
extern int _write(int fd, void *buf, size_t count);

uint32_t NDL_GetTicks() 
{
    struct timeval tv = {0, 0};
    gettimeofday(&tv, NULL);
    return tv.tv_usec/1000;
}

int NDL_PollEvent(char *buf, int len) 
{
    return _read(_open("/dev/events", 0, 0), buf, len);
}

void NDL_OpenCanvas(int *w, int *h) 
{
    char screen_sizeinfo[22];
    _read(_open("/proc/dispinfo", 0, 0), screen_sizeinfo, sizeof(screen_sizeinfo));
    char *endw = screen_sizeinfo + 9;
    char *endh = screen_sizeinfo + 20;
    screen_w = (int)strtol(&screen_sizeinfo[7], &endw, 10);
    screen_h = (int)strtol(&screen_sizeinfo[18], &endh, 10);

    /*if((*w > max_width) || ((*w==0) && (*h==0)))*/
    /*{*/
        /*screen_w = max_width;*/
    /*}*/
    /*else*/
    /*{*/
        /*screen_w = *w;*/
    /*}*/
    /*if((*h > max_height) || ((*w==0) && (*h==0)))*/
    /*{*/
        /*screen_h = max_height;*/
    /*}*/
    /*else*/
    /*{*/
        /*screen_h = *h;*/
    /*}*/
    /*printf("max    width : %d\n", max_width);*/
    /*printf("max    height: %d\n", max_height);*/
    /*printf("canvas width : %d\n", *w);*/
    /*printf("canvas height: %d\n", *h);*/
    /*printf("screen width : %d\n", screen_w);*/
    /*printf("screen height: %d\n", screen_h);*/

    if(getenv("NWM_APP")) 
    {
        int fbctl = 4;
        fbdev = 5;
        screen_w = *w; screen_h = *h;
        char buf[64];
        int len = sprintf(buf, "%d %d", screen_w, screen_h);
        // let NWM resize the window and create the frame buffer
        write(fbctl, buf, len);
        while (1) 
        {
            // 3 = evtdev
            int nread = read(3, buf, sizeof(buf) - 1);
            if (nread <= 0) continue;
            buf[nread] = '\0';
            if (strcmp(buf, "mmap ok") == 0) break;
        }
        close(fbctl);
    }
}

void NDL_DrawRect(uint32_t *pixels, int x, int y, int w, int h) 
{
    assert(pixels);
    assert(x>=0); assert(y>=0);
    assert(w<=screen_w); assert(h<=screen_h);

    int X = screen_w/2 - w/2; //调整画布位于屏幕中央
    int Y = screen_h/2 - h/2;
    uintptr_t FB[] = {(uintptr_t)X, (uintptr_t)Y, (uintptr_t)pixels, (uintptr_t)w, (uintptr_t)h, 1};
    _write(_open("/dev/fb", 0, 0), FB, sizeof(FB));
}

void NDL_OpenAudio(int freq, int channels, int samples) {
}

void NDL_CloseAudio() {
}

int NDL_PlayAudio(void *buf, int len) {
  return 0;
}

int NDL_QueryAudio() {
  return 0;
}

int NDL_Init(uint32_t flags) 
{
    if (getenv("NWM_APP")) 
    {
        evtdev = 3;
    }
    return 0;
}

void NDL_Quit() 
{
}
