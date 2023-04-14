#include <NDL.h>
#include <SDL.h>
#include <assert.h>
#include <string.h>

#define keyname(k) #k,

static const char *keyname[] = {
  "NONE",
  _KEYS(keyname)
};

int SDL_PushEvent(SDL_Event *ev) {
  return 0;
}

int SDL_PollEvent(SDL_Event *ev) {
  return 0;
}

extern int NDL_PollEvent(char *buf, int len); 
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

        /*printf("keyname[%d] is %s\n", i, keyname[i]);*/
        /*printf("strlen keyname[%d] is %d\n", i, strlen(keyname[i]));*/
        /*printf("buf[3] is %s\n", &buf[3]);*/
        /*printf("strlen buf[3] is %d\n", strlen(&buf[3]));*/

        bool equal = !strncmp((const char*)keyname[i], (const char*)&buf[3], strlen(&buf[3])-1);
        /*printf("strcmp is %d\n", equal);*/

        if(equal)
        {
            event->key.keysym.sym = i;
            /*printf("sym = %d\n", i);*/
        }
    }
    return 1;
}

int SDL_PeepEvents(SDL_Event *ev, int numevents, int action, uint32_t mask) {
  return 0;
}

uint8_t* SDL_GetKeyState(int *numkeys) {
  return NULL;
}
