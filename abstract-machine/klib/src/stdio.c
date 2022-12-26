#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

int printf(const char *fmt, ...) 
{
	/*int res = 0;*/
	va_list ap;
	int d;
	/*char c;*/
	char *s;
	va_start(ap, fmt);
	while(*fmt)
	{
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
						putch(*s);
						s++;
					}
					fmt++;
				} break;
				case 'd':
				{
					int i = 0;
					char tmp[sizeof(d)] = {'\0',};
					d = va_arg(ap, int);
                    if(d == 0)
                    {
                        putch('0');
                    }
					for(int cnt = d; cnt != 0; cnt = cnt / 10)
					{
						tmp[i] = (char)(cnt % 10) + '0';
						i++;
					}
					for(; i >= 0; i--)
					{
						putch(tmp[i]);
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
			/**dst = *fmt;*/
			/*dst++;*/
			putch(*fmt);
			fmt++;
		}
	}
	va_end(ap);
	/**dst= '\0';*/
	/*res = strlen(out);*/
	return 0;//res;
}

int vsprintf(char *out, const char *fmt, va_list ap) 
{
  panic("Not implemented");
}

int sprintf(char *out, const char *fmt, ...) 
{
    int res = 0;
    char *dst = out;
    va_list ap;
    int d;
    /*char c;*/
    char *s;
    va_start(ap, fmt);
    while(*fmt)
    {
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
                case 'd':
                {
                    int i = 0;
                    char *p = dst;
                    d = va_arg(ap, int);
                    for(int cnt = d; cnt != 0; cnt = cnt / 10)
                    {
                        i++;
                    }
                    dst += i;
                    for(; i > 0; i--)
                    {
                        p[i-1] = (char)(d % 10) + '0';
                        d = d / 10;
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
            *dst = *fmt;
            dst++;
            fmt++;
        }
    }
    va_end(ap);
    *dst= '\0';
    res = strlen(out);
    return res;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}

#endif
