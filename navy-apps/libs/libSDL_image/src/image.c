#define SDL_malloc  malloc
#define SDL_free    free
#define SDL_realloc realloc

#define SDL_STBIMAGE_IMPLEMENTATION
#include "SDL_stbimage.h"

SDL_Surface* IMG_Load_RW(SDL_RWops *src, int freesrc) {
  assert(src->type == RW_TYPE_MEM);
  assert(freesrc == 0);
  return NULL;
}

/*extern int open (const char *file, int flags, ...);*/
/*extern ssize_t read (int fd, void *buf, size_t cnt);*/
/*extern __off_t lseek(int fd, __off_t pos, int whence);*/
/*extern int close (int fd);*/
static SDL_Surface *p = NULL;

extern size_t fread (void *__restrict  buf, size_t size, size_t count, FILE *__restrict fp);
extern FILE * fopen (const char *file, const char *mode);
extern int    fseek (register FILE *fp, long offset, int whence);
extern long   ftell (register FILE * fp);
extern int    fclose (register FILE * fp);

SDL_Surface* IMG_Load(const char *filename) 
{
    FILE *fd = fopen(filename, "r");
    fseek(fd, 0, SEEK_END);
    int sz = ftell(fd);
    fseek(fd, 0, SEEK_SET);
    unsigned char *buf = (unsigned char *)SDL_malloc(sz);
    fread(buf, 1, sz, fd);
    p = STBIMG_LoadFromMemory(buf, sz);
    fclose(fd);
    SDL_free(buf);
    return p;
}

/*SDL_Surface* IMG_Load(const char *filename) */
/*{*/
    /*int fd = open(filename, 0, 0);*/
    /*int sz = lseek(fd, 0, SEEK_END);*/
    /*unsigned char *buf = (char *)SDL_malloc(sz);*/
    /*read(fd, buf, sz);*/
    /*p = STBIMG_LoadFromMemory(buf, sz);*/
    /*close(fd);*/
    /*SDL_free(buf);*/
    /*return p;*/
/*}*/

int IMG_isPNG(SDL_RWops *src) 
{
  return 0;
}

SDL_Surface* IMG_LoadJPG_RW(SDL_RWops *src) {
  return IMG_Load_RW(src, 0);
}

char *IMG_GetError() 
{
    return "Navy does not support IMG_GetError()";
}
