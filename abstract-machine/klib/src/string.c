#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

/*不包括\0*/
size_t strlen(const char *s) 
{
    size_t res = 0;
    char const *p = s;
    while(*p != '\0')
    {
        res++;
        p++;
    }
    return res;
}

/*包括\0*/
char *strcpy(char *dst, const char *src) 
{
    char *res = dst;
    while(*src != '\0')
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
    return res;
}

char *strncpy(char *dst, const char *src, size_t n) 
{
    size_t i;
    for(i = 0; i < n && src[i] != '\0'; i++)
    {
        dst[i] = src[i];
    }
    for(; i < n; i++)
    {
        dst[i] = '\0';
    }
    return dst;
}

char *strcat(char *dst, const char *src) 
{
    char *res = dst;
    while(*dst != '\0')
    {
        dst++;
    }
    while(*src != '\0')
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst='\0';
    return res;
}

int strcmp(const char *s1, const char *s2) 
{
    int res = 0;
    while(*s1 != '\0' && *s2 != '\0')
    {
        if(*s1 < *s2)
        {
            res = -1;
            break;
        }
        else if(*s1 > *s2)
        {
            res = 1;
            break;
        }
        s1++;
        s2++;
    }
    return res;
}

int strncmp(const char *s1, const char *s2, size_t n) 
{
  panic("Not implemented");
}

void *memset(void *s, int c, size_t n) 
{
    unsigned char *p = s;
    for(; n > 0; n--)
    {
        *p = (unsigned char)c;
        p++;
    }
    return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  panic("Not implemented");
}

int memcmp(const void *s1, const void *s2, size_t n) 
{
    int res = 0;
    unsigned char const *p = s1;
    unsigned char const *q = s2;
    for(; n > 0; n--)
    {
        if(p==q)
        {
            break;
        }
        else
        {
            if(*p < *q)
            {
                res = -1;
                break;
            }
            else if(*p > *q)
            {
                res = 1;
                break;
            }
        }
        p++;
        q++;
    }
    return res;
}

#endif
