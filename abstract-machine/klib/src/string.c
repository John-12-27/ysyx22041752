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
    int res = *s1 - *s2;
    while((*s1 != '\0') && (*s2 != '\0'))
    {
        if(*s1 < *s2)
        {
            res = *s1 - *s2;
            break;
        }
        else if(*s1 > *s2)
        {
            res = *s1 - *s2;
            break;
        }
        s1++;
        s2++;
    }
    return res;
}

int strncmp(const char *s1, const char *s2, size_t n) 
{
    int res = *s1 - *s2;
    while((*s1 != '\0') && (*s2 != '\0') && (n > 0))
    {
        if(*s1 < *s2)
        {
            res = *s1 - *s2;
            break;
        }
        else if(*s1 > *s2)
        {
            res = *s1 - *s2;
            break;
        }
        s1++;
        s2++;
        n--;
    }
    return res;
}

void *memset(void *s, int c, size_t n) 
{
    char *p = (char *)s;
    for(; n > 0; n--)
    {
        *p = (char)c;
        p++;
    }
    return s;
}

void *memmove(void *dst, const void *src, size_t n) 
{
    char tmp_array[n];
    char *csrc= (char *)src;
    char *p   = (char *)dst;
    for(int i = 0; i < n; i++)
    {
        tmp_array[i] = csrc[i];
    }
    for(int i = 0; i < n; i++)
    {
        p[i] = tmp_array[i];
    }
    return dst;
}

void *memcpy(void *out, const void *in, size_t n) 
{
    char *p = (char *)out;
    char const *s = (char const *)in;
    for(size_t i = 0; n > 0; n--)
    {
        p[i] = s[i];
        i++;
    }
    return out;
}

int memcmp(const void *s1, const void *s2, size_t n) 
{
    int res = 0;
    char const *p = (char const *)s1;
    char const *q = (char const *)s2;
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
