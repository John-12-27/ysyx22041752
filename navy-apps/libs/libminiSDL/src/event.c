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

static bool flag = false;
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
            case 'd': ev->type = SDL_KEYDOWN; //break;
                      flag = true; break;
            case 'u': ev->type = SDL_KEYUP;   break;
            default :
                      printf("Err event type\n");
                      assert(0);
        }
    }

    for(int i = 1; i < 83/*(const int)sizeof(keyname)*/; i++)
    {
        bool equal;
        if((strlen(&buf[3])-1) > strlen(keyname[i]))
            equal = !strncmp((const char*)keyname[i], (const char*)&buf[3], strlen(&buf[3])-1);
        else
            equal = !strncmp((const char*)keyname[i], (const char*)&buf[3], strlen(keyname[i]));
        if(equal)
        {
            if(flag)
                key_i = i;

            ev->key.keysym.sym = i;
            break;
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
            case 'd': event->type = SDL_KEYDOWN; break;
            case 'u': event->type = SDL_KEYUP;   break;
            default :
                      printf("Err event type\n");
                      assert(0);
        }
    }

    for(int i = 1; i < 83/*(const int)sizeof(keyname)*/; i++)
    {
        bool equal;
        if((strlen(&buf[3])-1) > strlen(keyname[i]))
            equal = !strncmp((const char*)keyname[i], (const char*)&buf[3], strlen(&buf[3])-1);
        else
            equal = !strncmp((const char*)keyname[i], (const char*)&buf[3], strlen(keyname[i]));
        if(equal)
        {
            event->key.keysym.sym = i;
            break;
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
    for(int i = 1; i < 83/*(const int)sizeof(keyname)*/; i++)
    {
        key_snapshot[i] = 0;
    }

    if(flag)
    {
        flag = false;
        key_snapshot[key_i] = 1;
        /*printf("key pressed %d\n", key_i);*/
    }

    return key_snapshot;
}
