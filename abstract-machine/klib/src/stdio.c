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

static inline int MyPrint(bool is_printf, char *out, size_t n, bool N, const char *fmt, va_list ap) 
{
    int res = 0;
    char *dst = out;
    int d = 0;
    char c;
    char *s;
    while(*fmt && !((N == true) && (n == 0)))
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
                        if(!is_printf)
                        {
                            *dst = *s;
                            dst++;
                        }
                        else
                        {
                            putch(*s);
                        }
                        s++;
                    }
                    fmt++;
                } break;
                case 'c':
                {
                    c = va_arg(ap, int);
                    if(!is_printf)
                    {
                        *dst = c;
                        dst++;
                    }
                    else
                    {
                        putch(c);
                    }
                    fmt++;
                } break;
                case 'd':
                {
                    d = va_arg(ap, int); 
                    if(!is_printf)
                    {
                        dst = s2num(d, dst, 10, false, false);
                    }
                    else
                    {
                        uint8_t i;
                        char buf[32] = {0,};
                        s2num(d, buf, 10, false, false);
                        for(i = 0; (i < 20) && (buf[i] != '\0'); i++)
                        {
                            putch(buf[i]);
                        }
                    }
                    fmt++;
                } break;
                case 'u':
                {
                    d = va_arg(ap, int); 
                    if(!is_printf)
                    {
                        dst = s2num(d, dst, 10, true, false);
                    }
                    else
                    {
                        uint8_t i;
                        char buf[32] = {0,};
                        s2num(d, buf, 10, true, false);
                        for(i = 0; (i < 20) && (buf[i] != '\0'); i++)
                        {
                            putch(buf[i]);
                        }
                    }
                    fmt++;
                } break;
                case 'o':
                {
                    d = va_arg(ap, int); 
                    if(!is_printf)
                    {
                        dst = s2num(d, dst, 8, true, false);
                    }
                    else
                    {
                        uint8_t i;
                        char buf[32] = {0,};
                        s2num(d, buf, 8, true, false);
                        for(i = 0; (i < 20) && (buf[i] != '\0'); i++)
                        {
                            putch(buf[i]);
                        }
                    }
                    fmt++;
                } break;
                case 'x':
                {
                    d = va_arg(ap, int); 
                    if(!is_printf)
                    {
                        dst = s2num(d, dst, 16, true, false);
                    }
                    else
                    {
                        uint8_t i;
                        char buf[32] = {0,};
                        s2num(d, dst, 16, true, false);
                        for(i = 0; (i < 20) && (buf[i] != '\0'); i++)
                        {
                            putch(buf[i]);
                        }
                    }
                    fmt++;
                } break;
                case 'X':
                {
                    d = va_arg(ap, int); 
                    if(!is_printf)
                    {
                        dst = s2num(d, dst, 16, true, true);
                    }
                    else
                    {
                        uint8_t i;
                        char buf[32] = {0,};
                        s2num(d, buf, 16, true, true);
                        for(i = 0; (i < 20) && (buf[i] != '\0'); i++)
                        {
                            putch(buf[i]);
                        }
                    }
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
            if(!is_printf)
            {
                *dst = *fmt;
                dst++;
            }
            else
            {
                putch(*fmt);
            }
            fmt++;
        }
    }
    if(!is_printf)
    {
        *dst= '\0';
        res = strlen(out);
    }
    return res;
}

int printf(const char *fmt, ...) 
{
    char *buf = NULL;
    int res;
    va_list ap;
    va_start(ap, fmt);
    res = MyPrint(true, buf, 0, false, fmt, ap);
    va_end(ap);
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
    res = MyPrint(false, out, 0, false, fmt, ap);
    va_end(ap);
    return res;
}

int snprintf(char *out, size_t n, const char *fmt, ...) 
{
    int res;
    va_list ap;
    va_start(ap, fmt);
    res = MyPrint(false, out, n, true, fmt, ap);
    va_end(ap);
    return res;
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) 
{
    panic("Not implemented");
}

#endif
