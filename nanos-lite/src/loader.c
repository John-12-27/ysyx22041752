#include <proc.h>
#include <elf.h>

#ifdef __LP64__
# define Elf_Ehdr Elf64_Ehdr
# define Elf_Phdr Elf64_Phdr
#else
# define Elf_Ehdr Elf32_Ehdr
# define Elf_Phdr Elf32_Phdr
#endif

/*extern size_t ramdisk_read(void *buf, size_t offset, size_t len);*/
/*static uintptr_t loader(PCB *pcb, const char *filename) */
/*{*/
    /*uint8_t zero = 0;*/
    /*Elf64_Ehdr elf64_ehdr;*/
    /*unsigned char magic[EI_NIDENT] = {0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00,*/
                                      /*0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};*/
    /*ramdisk_read(&elf64_ehdr, 0, sizeof(elf64_ehdr));*/
    /*for(int i = 0; i < EI_NIDENT; i++)*/
    /*{*/
        /*assert(elf64_ehdr.e_ident[i] == magic[i]);*/
    /*}*/
    /*assert(elf64_ehdr.e_entry);*/
    /*assert(elf64_ehdr.e_phoff);*/
    /*for(int i = 0; i < elf64_ehdr.e_phnum; i++)*/
    /*{*/
        /*Elf64_Phdr elf64_phdr;*/
        /*ramdisk_read(&elf64_phdr, elf64_ehdr.e_phoff+i*elf64_ehdr.e_phentsize, sizeof(elf64_phdr));*/
        /*if(elf64_phdr.p_type == PT_LOAD)*/
        /*{*/
            /*ramdisk_read((void *)elf64_phdr.p_vaddr, elf64_phdr.p_offset, elf64_phdr.p_memsz);*/
            /*memcpy((void *)elf64_phdr.p_vaddr+elf64_phdr.p_filesz, &zero, elf64_phdr.p_memsz-elf64_phdr.p_filesz);*/
        /*}*/
    /*}*/
    /*uint32_t test_firstinst = 0;*/
    /*memcpy((void *)&test_firstinst, (void *)elf64_ehdr.e_entry, 4);*/
    /*return (uintptr_t)elf64_ehdr.e_entry;*/
/*}*/

extern int fs_open(const char *pathname, int flags, int mode, size_t *offset);
extern size_t ramdisk_read(void *buf, size_t offset, size_t len);
static uintptr_t loader(PCB *pcb, const char *filename) 
{
    uint8_t zero = 0;
    Elf64_Ehdr elf64_ehdr;
    unsigned char magic[EI_NIDENT] = {0x7f, 0x45, 0x4c, 0x46, 0x02, 0x01, 0x01, 0x00,
                                      0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
	size_t file_baseaddr = 0;
	fs_open(filename, 0, 0, &file_baseaddr);
    ramdisk_read(&elf64_ehdr, file_baseaddr, sizeof(elf64_ehdr));
    for(int i = 0; i < EI_NIDENT; i++)
    {
        assert(elf64_ehdr.e_ident[i] == magic[i]);
    }
    assert(elf64_ehdr.e_entry);
    assert(elf64_ehdr.e_phoff);
    for(int i = 0; i < elf64_ehdr.e_phnum; i++)
    {
        Elf64_Phdr elf64_phdr;
        ramdisk_read(&elf64_phdr, file_baseaddr+elf64_ehdr.e_phoff+i*elf64_ehdr.e_phentsize, sizeof(elf64_phdr));
        if(elf64_phdr.p_type == PT_LOAD)
        {
            ramdisk_read((void *)elf64_phdr.p_vaddr, file_baseaddr+elf64_phdr.p_offset, elf64_phdr.p_memsz);
            memcpy((void *)elf64_phdr.p_vaddr+elf64_phdr.p_filesz, &zero, elf64_phdr.p_memsz-elf64_phdr.p_filesz);
        }
    }
    return (uintptr_t)elf64_ehdr.e_entry;
}

void naive_uload(PCB *pcb, const char *filename) 
{
    uintptr_t entry = loader(pcb, filename);
    Log("Jump to entry = 0x%x", entry);
    ((void(*)())entry) ();
}

