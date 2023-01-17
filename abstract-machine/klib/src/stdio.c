#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

static inline char *s2num(int d, char *dst, int hexadecimal, bool U, bool X) 
{
    int i = 0; 
    char *p = dst; 
    if(d == 0) 
    { 
        *p = '0'; 
        return (p+1); 
    } 
    if(!U) 
    { 
        if(d < 0) 
        { 
            *p = '-'; 
            p++; 
            d = -d; 
        } 
    } 
	for(int cnt = d; cnt != 0; cnt = cnt / hexadecimal)
	{ 
		i++; 
	} 
    p += i; 
    for(int m = -1; i > 0; i--) 
    { 
        int t = d % hexadecimal; 
        if(t >= 10) 
        { 
            if(X) 
            { 
                p[m] = (char)(t - 10) + 'A'; 
            } 
            else 
            { 
                p[m] = (char)(t - 10) + 'a'; 
            } 
        } 
        else 
        { 
            p[m] = (char)(t + '0'); 
        } 
        m--;
        d = d / hexadecimal; 
    } 
    return p;
}

static inline int MyPrint(char *out, size_t n, bool N, const char *fmt, va_list ap) 
{
    int res = 0;
    char *dst = out;
    int d = 0;
    char c;
    char *s;
    while(*fmt && !((N == true) && (n > 0)))
    {
        n--;
        if(*fmt == '%')
        {
            fmt++;
            switch(*fmt)
            {
                case 's':
                {
                    s = va_arg(ap, char *);
                    while(*s != '\0')
                    {
                        *dst = *s;
                        dst++;
                        s++;
                    }
                    fmt++;
                } break;
                case 'c':
                {
                    c = va_arg(ap, int);
                    *dst = c;
                    dst++;
                    fmt++;
                } break;
                case 'd':
                {
                    d = va_arg(ap, int); 
                    dst = s2num(d, dst, 10, false, false);
                    fmt++;
                } break;
                case 'u':
                {
                    d = va_arg(ap, int); 
                    dst = s2num(d, dst, 10, true, false);
                    fmt++;
                } break;
                case 'o':
                {
                    d = va_arg(ap, int); 
                    dst = s2num(d, dst, 8, true, false);
                    fmt++;
                } break;
                case 'x':
                {
                    d = va_arg(ap, int); 
                    dst = s2num(d, dst, 16, true, false);
                    fmt++;
                } break;
                case 'X':
                {
                    d = va_arg(ap, int); 
                    dst = s2num(d, dst, 16, true, true);
                    fmt++;
                } break;
                default:
                {
                    fmt++;
                } break;
            }
        }
        else
        {
            *dst = *fmt;
            dst++;
            fmt++;
        }
    }
    *dst= '\0';
    res = strlen(out);
    return res;
}

int printf(const char *fmt, ...) 
{
    char buf[50];
    int res;
    va_list ap;
    va_start(ap, fmt);
    res = MyPrint(buf, 0, false, fmt, ap);
    va_end(ap);
    for(int i = 0; buf[i] != '\0'; i++)
    {
        putch(buf[i]);
    }
    return res;
}

int vsprintf(char *out, const char *fmt, va_list ap) 
{
    panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) 
{
    int res;
    va_list ap;
    va_start(ap, fmt);
    res = MyPrint(out, 0, false, fmt, ap);
    va_end(ap);
    return res;
}

int snprintf(char *out, size_t n, const char *fmt, ...) 
{
    int res;
    va_list ap;
    va_start(ap, fmt);
    res = MyPrint(out, n, true, fmt, ap);
    va_end(ap);
    return res;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) 
{
    panic("Not implemented");
}

#endif
