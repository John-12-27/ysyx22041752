#include <common.h>
#include "syscall.h"

/*FILE *strace_fp = NULL;*/
/*void sys_trace_init(const char *file)*/
/*{*/
/*#if CONFIG_STRACE*/
    /*strace_fp = stdout;*/
    /*if(file != NULL)*/
    /*{*/
        /*FILE *fp = fopen(file, "w");*/
        /*assert(fp);*/
        /*strace_fp = fp;*/
    /*}*/
    /*if(file)*/
        /*printf("Strace is written to %s", file);*/
    /*else*/
        /*printf("Strace is written to stdout");*/
/*#endif*/
/*}*/

extern int fs_open(const char *pathname, int flags, int mode, size_t *offset);
static uintptr_t sys_open(uintptr_t a[])
{
    assert(a[0] == SYS_open);
    size_t disk_offset;
    return fs_open((const char *)a[1], (int)a[2], (int)a[3], &disk_offset);
}

extern size_t fs_write(int fd, const void *buf, size_t len);
static uintptr_t sys_write(uintptr_t a[])
{
    assert(a[0] == SYS_write);
    char *buf = (char *)a[2];
    if((a[1] == 1) || (a[1] == 2))  //fd is stdout or stderr
    {
        uintptr_t i=0;
        for(; i < a[3]; i++)
        {
            putch(buf[i]);
        }
        return i;
    }
    else if(a[1] > 0)
    {
        return fs_write((int)a[1], (const void *)a[2], (size_t)a[3]);
    }
    return -1;
}

extern size_t fs_read(int fd, void *buf, size_t len);
static uintptr_t sys_read(uintptr_t a[])
{
    assert(a[0] == SYS_read);
    if(a[1] > 2)
    {
        return fs_read((int)a[1], (void *)a[2], (size_t)a[3]);
    }
    return -1;
}

extern int fs_close(int fd);
static uintptr_t sys_close(uintptr_t a[])
{
    assert(a[0] == SYS_close);
    if(a[1] > 2)
    {
        return fs_close((int)a[1]);
    }
    return -1;
}

extern size_t fs_lseek(int fd, size_t offset, int whence);
static uintptr_t sys_lseek(uintptr_t a[])
{
    assert(a[0] == SYS_lseek);
    if(a[1] > 2)
    {
        return fs_lseek((int)a[1], (size_t)a[2], (int)a[3]);
    }
    return -1;
}

static uintptr_t sys_brk(uintptr_t a[])
{
    assert(a[0] == SYS_brk);
    /*uintptr_t new_pgmbrk = a[1];*/  
    return 0;
}

uintptr_t do_syscall(Context *c) 
{
    uintptr_t a[4];
    a[0] = c->GPR1;
    a[1] = c->GPR2;
    a[2] = c->GPR3;
    a[3] = c->GPR4;

    switch (a[0]) 
    {
        case SYS_exit : halt(0); break;
        case SYS_open : c->GPRx = sys_open(a);  break;
        case SYS_read : c->GPRx = sys_read(a);  break;
        case SYS_write: c->GPRx = sys_write(a); break;
        case SYS_close: c->GPRx = sys_close(a); break;
        case SYS_lseek: c->GPRx = sys_lseek(a); break;
        case SYS_brk  : c->GPRx = sys_brk(a);   break;
        default: panic("Unhandled syscall ID = %d", a[0]);
    }

#if CONFIG_STRACE
    static bool table = false;
    if(!table)
    {
        table = true;
        /*strace_write("Type :\t\t Args1 :\t\t Args2 :\t\t Args3 :\t\t Return val :\t\t\n");*/
        printf("Type :\t\t Args1 :\t Args2 :\t\t Args3 :\t\t Return val :\t\t\n");
    }
    printf("%u \t\t %x \t\t %x \t\t %x \t\t %x\n", a[0], a[1], a[2], a[3], c->GPRx);
#endif

    return c->GPRx;
}
