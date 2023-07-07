#include <NDL.h>
#include <SDL.h>
#include <assert.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

extern int NDL_PollEvent(char *buf, int len); 

int SDL_PushEvent(SDL_Event *ev) {
    assert(0);
  return 0;
}

static uint8_t key_i = 0;
static uint8_t key_snapshot[83] = {0};

int SDL_PollEvent(SDL_Event *ev) 
{
    char buf [64] = {'\0', };
    NDL_PollEvent(buf, sizeof(buf));

    if(buf[0] == '\0')
    {
        return 0;
    }
    else
    {
        assert(buf[0] == 'k');
        switch(buf[1])
        {
            case 'd': ev->type = SDL_KEYDOWN; 
                      ev->key.keysym.sym = buf[3];
                      key_i = buf[3];
                      break;
            case 'u': ev->type = SDL_KEYUP;   
                      ev->key.keysym.sym = buf[3];
                      key_i = 0;
                      break;
            default :
                      printf("Err event type\n");
                      assert(0);
        }
    }
    return 1;
}

int SDL_WaitEvent(SDL_Event *event) 
{
    char buf [64] = {'\0', };
    NDL_PollEvent(buf, sizeof(buf));

    if(buf[0] != '\0' && buf[0] != 'k')
    {
        printf("Err event type\n");
        assert(0);
    }
    if(buf[1])
    {
        switch(buf[1])
        {
            case 'd': event->type = SDL_KEYDOWN; 
                      event->key.keysym.sym = buf[3];
                      printf("wait event keysym = %d\n", event->key.keysym.sym);
                      break;
            case 'u': event->type = SDL_KEYUP;   
                      event->key.keysym.sym = buf[3];
                      printf("wait event keysym = %d\n", event->key.keysym.sym);
                      break;
            default :
                      printf("Err event type\n");
                      assert(0);
        }
    }
    return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
    assert(0);
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) 
{
    memset((void *)key_snapshot, 0, sizeof(key_snapshot));
    if (key_i) 
    {
        key_snapshot[key_i] = 1;
    }
    return key_snapshot;
}
