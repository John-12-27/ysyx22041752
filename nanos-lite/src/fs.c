#include <fs.h>

typedef size_t (*ReadFn) (void *buf, size_t offset, size_t len);
typedef size_t (*WriteFn) (const void *buf, size_t offset, size_t len);

typedef struct {
  char *name;
  size_t size;
  size_t disk_offset;
  size_t open_offset;
  ReadFn read;
  WriteFn write;
} Finfo;

enum {FD_STDIN, FD_STDOUT, FD_STDERR, FD_FB};

size_t invalid_read(void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

size_t invalid_write(const void *buf, size_t offset, size_t len) {
  panic("should not reach here");
  return 0;
}

/* This is the information about all files in disk. */
static Finfo file_table[] __attribute__((used)) = {
  [FD_STDIN]  = {"stdin",  0, 0, 0, invalid_read, invalid_write},
  [FD_STDOUT] = {"stdout", 0, 0, 0, invalid_read, invalid_write},
  [FD_STDERR] = {"stderr", 0, 0, 0, invalid_read, invalid_write},
#include "files.h"
};

int fs_open(const char *pathname, int flags, int mode, size_t *offset)
{
    for(int i = 3; i < (sizeof(file_table) / sizeof(file_table[0])); i++)
    {
        if(!strcmp(pathname, file_table[i].name))
        {
            *offset = file_table[i].disk_offset;
            return i;
        }
    }
    panic("File name err : %s", pathname);
    return -1;
}

extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
size_t fs_read(int fd, void *buf, size_t len)
{
    assert(buf);
    if(len && (file_table[fd].open_offset < file_table[fd].size))
    {
        size_t readlen = 0;
        if((file_table[fd].open_offset+len) <= file_table[fd].size)
        {
            readlen = len;
        }
        else
        {
            readlen = file_table[fd].size - file_table[fd].open_offset;
        }
        size_t ret = ramdisk_read(buf, file_table[fd].disk_offset+file_table[fd].open_offset, readlen);
        file_table[fd].open_offset += readlen;
        return ret;
    }
    return -1;
}

extern size_t ramdisk_write(const void *buf, size_t offset, size_t len); 
size_t fs_write(int fd, const void *buf, size_t len)
{
    assert(buf);
    if(len && (file_table[fd].open_offset < file_table[fd].size))
    {
        size_t writelen = 0;
        if((file_table[fd].open_offset+len) <= file_table[fd].size)
        {
            writelen = len;
        }
        else
        {
            writelen = file_table[fd].size - file_table[fd].open_offset;
        }
        size_t ret = ramdisk_write(buf, file_table[fd].disk_offset+file_table[fd].open_offset, writelen);
        file_table[fd].open_offset += writelen;
        return ret;
    }
    return -1;
}

size_t fs_lseek(int fd, size_t offset, int whence)
{
    switch(whence)
    {
        case SEEK_SET: if(offset <= file_table[fd].size) {file_table[fd].open_offset = offset; return file_table[fd].open_offset;} break;
        case SEEK_CUR: if(file_table[fd].open_offset + offset <= file_table[fd].size) {file_table[fd].open_offset += offset; return file_table[fd].open_offset;} break;
        case SEEK_END: if(offset == 0) {file_table[fd].open_offset = file_table[fd].size; return file_table[fd].open_offset;} break;
        default : panic("whence err : %d", whence);  break;
    }
    return -1;
}

int fs_close(int fd)
{
    return 0;
}

void init_fs() 
{
    //TODO :
}
