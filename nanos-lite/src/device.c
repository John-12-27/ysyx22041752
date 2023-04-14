#include <common.h>

#if defined(MULTIPROGRAM) && !defined(TIME_SHARING)
# define MULTIPROGRAM_YIELD() yield()
#else
# define MULTIPROGRAM_YIELD()
#endif

#define NAME(key) \
  [AM_KEY_##key] = #key,

static const char *keyname[256] __attribute__((used)) = {
  [AM_KEY_NONE] = "NONE",
  AM_KEYS(NAME)
};

size_t serial_write(const void *buf, size_t offset, size_t len) 
{
    size_t i = 0;
    char *tmp = (char *)buf;
    for (; i < len; ++i) 
    {
        putch(tmp[i]);
    }
    return i;
}

size_t events_read(void *buf, size_t offset, size_t len) 
{
    AM_INPUT_KEYBRD_T ev = io_read(AM_INPUT_KEYBRD);
    if(ev.keycode == AM_KEY_NONE)
    {
        return 0;
    }
    else
    {
        char *tmp = (char *)buf;
        tmp[0] = 'k';
        if(ev.keydown)
            tmp[1] = 'd';
        else
            tmp[1] = 'u';
        tmp[2] = ' ';

        /*tmp[3] = (uint8_t)ev.keycode;*/
        /*printf("keycode is %d\n", ev.keycode);*/

        uint8_t i = strlen(keyname[ev.keycode]);
        strncpy(&tmp[3], keyname[ev.keycode], i);
        tmp[i+1+2] = '\n';
        return i+1+2;
    }
}

size_t dispinfo_read(void *buf, size_t offset, size_t len) 
{
    assert(buf);
    assert(len >= 22);
    char *w = "WIDTH: ";
    char *h = "HEIGHT: ";
    char *tmp = (char*)buf;
    strncpy(tmp, w, 7);
    strncpy(tmp+7+3+1, h, 8); //eg. WIDTH: 400\nHEIGHT: 300\n
    if(io_read(AM_GPU_CONFIG).width == 800)
        strncpy(&tmp[7], "800\n", 4);
    else if(io_read(AM_GPU_CONFIG).width == 400)
        strncpy(&tmp[7], "400\n", 4);
    if(io_read(AM_GPU_CONFIG).height == 600)
        strncpy(&tmp[19], "600\n", 4);
    else if(io_read(AM_GPU_CONFIG).height == 300)
        strncpy(&tmp[19], "300\n", 4);
    return len;
}

extern int SCREEN_WIDTH;
size_t fb_write(const void *buf, size_t offset, size_t len) 
{
    /*uintptr_t *p = (uintptr_t*)buf;*/
    /*uintptr_t FB[6];*/
    /*for(int i = 0; i < 6; i++)*/
    /*{*/
        /*FB[i] = p[i];*/
    /*}*/
    /*io_write(AM_GPU_FBDRAW, FB[0], FB[1], (void*)FB[2], FB[3], FB[4], FB[5]);*/

	int y = offset/(4*SCREEN_WIDTH);
	int x = offset/4-y*SCREEN_WIDTH;
    io_write(AM_GPU_FBDRAW, x, y, (void*)buf, len/4, 1, 1);

    return len;
}

void init_device() {
  Log("Initializing devices...");
  ioe_init();
}
