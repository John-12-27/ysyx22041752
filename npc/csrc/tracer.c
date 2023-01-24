// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : tracer.c
// Author        : Cw
// Created On    : 2022-11-12 19:54
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include "tracer.h"
#include "color.h"
#include "monitor.h"

FILE *log_fp = NULL;
FILE *flog_fp = NULL;
FILE *mtrace_fp = NULL;

static RingBuf iringbuf[IRINGBUF_DEPTH] = {};
static RingBuf mringbuf[MRINGBUF_DEPTH] = {};
static RingBuf *ihead = NULL;
static RingBuf *itail = NULL;
static RingBuf *mhead = NULL;
static RingBuf *mtail = NULL;
static fStack  *fstack_top = NULL;
static fStack  *fstack_bottom = NULL;

static void init_RingBuf(RingBuf f[], bool mringbuf_init)
{
    int maxDepth = 0;
    if(mringbuf_init)
    {
        maxDepth = MRINGBUF_DEPTH;
        mhead = &f[0];
        mtail = &f[0];
    }
    else
    {
        maxDepth = IRINGBUF_DEPTH;
        ihead = &f[0];
        itail = &f[0];
    }
    for(int i = 0; i < maxDepth; i++)
    {
        f[i].NO = i;
        for(int j = 0; j < 256; j++)
        {
            f[i].buf[j] = '\0';
        }
        if(i != maxDepth - 1)
        {
            f[i].next = &f[i+1];
        }
        else
        {
            f[i].next = &f[0];
        }
    }
}

static void RingBufLoad(char logbuf[], bool mload)
{
    static bool mfull = false;
    static int mcnt = 0;
    static bool ifull = false;
    static int icnt = 0;
    if(!mload)
    {
        if(!ifull && icnt == IRINGBUF_DEPTH)
        {
            ifull = true;
        }
        if(ifull)
        {
            ihead = ihead->next;
        }
        for(int j = 0; j < 256; j++)
        {
            itail->buf[j] = logbuf[j];
        }
        itail = itail->next;
        icnt++;
    }
    else
    {
        if(!mfull && mcnt == MRINGBUF_DEPTH)
        {
            mfull = true;
        }
        if(mfull)
        {
            mhead = mhead->next;
        }
        for(int j = 0; j < 256; j++)
        {
            mtail->buf[j] = logbuf[j];
        }
        mtail = mtail->next;
        mcnt++;
    }
}

void log_mem(Decode *s, vaddr_t vaddr, paddr_t paddr, word_t data, bool read)
{
    char *p = s->mlogbuf;
    p += snprintf(p, sizeof(s->mlogbuf), "%s\t", s->logbuf);
    p += snprintf(p, sizeof(s->mlogbuf), "vaddr:" FMT_WORD , vaddr);
    p += snprintf(p, sizeof(s->mlogbuf), " paddr:" FMT_PADDR, paddr);
    p += snprintf(p, sizeof(s->mlogbuf), " data:" FMT_WORD , data);
    if(read)
    {
        p += snprintf(p, sizeof(s->mlogbuf), " R");
    }
    else
    {
        p += snprintf(p, sizeof(s->mlogbuf), " W");
    }
    RingBufLoad(s->mlogbuf, true);
}

extern void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
void log_inst(Decode *s, bool inst_l)
{
    char *p = s->logbuf;
    p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
    int ilen = 4;//s->snpc - s->pc;
    int i;
    uint8_t *inst = (uint8_t *)&s->inst;
    for (i = ilen - 1; i >= 0; i --) 
    {
        p += snprintf(p, 4, " %02x", inst[i]);
    }
    int ilen_max = 4;
    int space_len = ilen_max - ilen;
    if (space_len < 0) 
    {
        space_len = 0;
    }
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;

    disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
         s->pc, (uint8_t *)&s->inst, ilen);
    if(inst_l)
    {
        RingBufLoad(s->logbuf, false);
    }
}

void output_mRingBuf()
{
    for(; mhead->next != mtail; mhead = mhead->next)
    {
        mlog_write("%s\n", mhead->buf);
    }
    mlog_write("%s\n", mhead->buf);
}

void output_iRingBuf()
{
    for(; ihead->next != itail; ihead = ihead->next)
    {
        log_write("%s\n", ihead->buf);
    }
    log_write("%s\n", ihead->buf);
}

void init_mlog(const char *file) 
{
    mtrace_fp = stdout;
    if(file != NULL) 
    {
        FILE *fp = fopen(file, "w");
        mtrace_fp = fp;
        assert(mtrace_fp != NULL);
    }
    Log("Mtrace is written to %s", file ? file : "stdout");
    init_RingBuf(mringbuf, true);
}

void init_flog(const char *file) 
{
    flog_fp = stdout;
    if(file != NULL) 
    {
        FILE *fp = fopen(file, "w");
        flog_fp = fp;
        assert(flog_fp != NULL);
    }
    Log("ftrace is written to %s", file ? file : "stdout");
}

void init_log(const char *file) 
{
    log_fp = stdout;
    if(file != NULL) 
    {
        FILE *fp = fopen(file, "w");
        log_fp = fp;
        assert(log_fp != NULL);
    }
    Log("Log is written to %s", file ? file : "stdout");
    init_RingBuf(iringbuf, false);
}

bool mtrace_enable(vaddr_t vaddr, paddr_t paddr) 
{
    bool status = false;
    if(inputM)
    {
        if(((vaddr >= CONFIG_VMTRACE_START) && (vaddr <= CONFIG_VMTRACE_END)) || ((paddr >= CONFIG_PMTRACE_START) && (paddr <= CONFIG_PMTRACE_END )))
        {
            status = true;
        }
    }
    return status;
}

bool log_enable(vaddr_t pc) 
{
    bool status = false;
    if(inputL)
    {
        if((pc >= CONFIG_TRACE_START) && (pc <= CONFIG_TRACE_END))
        {
            status = true;
        }
    }
    return status;
}

symFunc *pFirstFunc = NULL;
static symFunc *pLastFunc  = NULL;
strTab strtab;
static char *shstrtab;
void funcTabInit(const char *file)
{
    if(file != NULL)
    {
        Elf64_Ehdr elf64_ehdr;
        FILE *fp = fopen(file, "rb");
        assert(fp != NULL);
        
        Log("There are %lu bytes in ELF header.\n",fread(&elf64_ehdr, sizeof(char), sizeof(elf64_ehdr), fp));
        if(elf64_ehdr.e_shoff)
        {
            Elf64_Shdr elf64_shdr;

            fseek(fp, (long)(elf64_ehdr.e_shoff + elf64_ehdr.e_shstrndx * elf64_ehdr.e_shentsize), SEEK_SET);
            Log("There are %lu bytes in the Section entry %d.\n", fread(&elf64_shdr, sizeof(char), sizeof(elf64_shdr), fp), (uint32_t)elf64_ehdr.e_shstrndx);

            shstrtab = (char *)malloc(elf64_shdr.sh_size);
            fseek(fp, (long)elf64_shdr.sh_offset, SEEK_SET);
            Log("There are %lu bytes in the Section header string table.\n", fread(shstrtab, sizeof(char), elf64_shdr.sh_size, fp));

            fseek(fp, (long)elf64_ehdr.e_shoff, SEEK_SET);
            for(int i = 0; i < elf64_ehdr.e_shnum; i++)
            {
                Log("There are %lu bytes in the Section entry %d.\n", fread(&elf64_shdr, sizeof(char), sizeof(elf64_shdr), fp), i);

                if(elf64_shdr.sh_type == SHT_STRTAB)
                {
                    if(strcmp(".strtab", shstrtab + elf64_shdr.sh_name) == 0)
                    {
                        strtab.size = elf64_shdr.sh_size;
                        strtab.pStrStart = (char *)malloc(elf64_shdr.sh_size);
                        fseek(fp, (long)elf64_shdr.sh_offset, SEEK_SET);
                        Log("There are %lu bytes in the String table.\n", fread(strtab.pStrStart, sizeof(char), elf64_shdr.sh_size, fp));
                    }
                }

                else if(elf64_shdr.sh_type == SHT_SYMTAB)
                {
                    Elf64_Sym  elf64_sym;
                    fseek(fp, (long)elf64_shdr.sh_offset, SEEK_SET);

                    for(int j = 0; j < elf64_shdr.sh_size / elf64_shdr.sh_entsize; j++)
                    {
                        Log("There are %lu bytes in the Symbol table %d.\n", fread(&elf64_sym, sizeof(char), sizeof(elf64_sym), fp), j); 
                        if(ELF64_ST_TYPE(elf64_sym.st_info) == STT_FUNC)
                        {
                            if(pFirstFunc == NULL)
                            {
                                pFirstFunc = (symFunc*)malloc(sizeof(symFunc));
                                pLastFunc = pFirstFunc;
                                pLastFunc->baseAddr = elf64_sym.st_value;
                                pLastFunc->size     = elf64_sym.st_size;
                                pLastFunc->name     = elf64_sym.st_name;
                            }
                            else
                            {
                                pLastFunc->next = (symFunc*)malloc(sizeof(symFunc));
                                pLastFunc = pLastFunc->next;
                                pLastFunc->baseAddr = elf64_sym.st_value;
                                pLastFunc->size     = elf64_sym.st_size;
                                pLastFunc->name     = elf64_sym.st_name;
                            }
                        }
                    }
                    if(pLastFunc != NULL)
                    {
                        pLastFunc->next = NULL;
                    }
                }
                fseek(fp, (long)(elf64_ehdr.e_shoff + (1+i) * sizeof(elf64_shdr)), SEEK_SET);
            }
        }
        fclose(fp);
    }
}

vaddr_t findPc(const char *s)
{
    if(s != NULL)
    {
        symFunc *p = pFirstFunc;
        uint64_t offset = 0;

        char *ps = strtab.pStrStart;
        while(ps <= (strtab.pStrStart + strtab.size))
        {
            if(strcmp(s, ps) == 0)
            {
                break;
            }
            ps += strlen(ps) + 1;
        }
        offset = ps - strtab.pStrStart;

        while(p->next != NULL)
        {
            if(p->name == offset)
            {
                return p->baseAddr;
            }
            p = p->next;
        }
    }
    return 0;
}

void call_return(vaddr_t snpc, vaddr_t dnpc)
{
    if((!inputF))
    {
        return;
    }
    symFunc *p = pFirstFunc;
    while(p != NULL)
    {
        if(dnpc == p->baseAddr) 
        {
            if(fstack_bottom == NULL)
            {
                fstack_bottom = (fStack*)malloc(sizeof(fStack));
                fstack_bottom->last = NULL;
                fstack_top = fstack_bottom;
                fstack_top->return_pc = snpc;
                fstack_top->name = p->name;
            }
            else
            {
                fStack *tmp;
                tmp = (fStack*)malloc(sizeof(fStack));
                tmp->last = fstack_top;
                tmp->return_pc = snpc;
                tmp->name = p->name;
                fstack_top = tmp;
            }

            flog_write("Call %s, pc=%lx\n", strtab.pStrStart + fstack_top->name, dnpc);
            /*printf(ANSI_BG_GREEN "=========================================\n");*/
            /*printf("Call %s\n", strtab.pStrStart + fstack_top->name);*/
            /*printf("=========================================" ANSI_NONE "\n");*/
            break;
        }
        p = p->next;
    }
    if(dnpc == fstack_top->return_pc)
    {
        fStack *tmp = fstack_top;
        flog_write("Return from %s to %lx\n", strtab.pStrStart + tmp->name, dnpc);
        /*printf(ANSI_BG_GREEN "=========================================\n");*/
        /*printf("Return from %s\n", strtab.pStrStart + tmp->name);*/
        /*printf("=========================================" ANSI_NONE "\n");*/
        fstack_top = fstack_top->last;
        free(tmp);
    }
}

void findStr(vaddr_t pc) 
{
    if((!inputF))
    {
        return;
    }
    symFunc *p = pFirstFunc;
    while(p != NULL)
    {
        if((pc >= p->baseAddr) && (pc < (p->baseAddr + p->size)))
        {
            printf(ANSI_BG_GREEN "=========================================\n");
            printf("Running %s\n", strtab.pStrStart + p->name);
            printf("=========================================" ANSI_NONE "\n");
            break;
        }
        p = p->next;
    }
}

void freeAllStrTab()
{
    free(shstrtab);
    free(strtab.pStrStart);
}

void freeAllFunc(symFunc *p)
{
    if(p != NULL)
    {
        if(p->next != NULL)
        {
            freeAllFunc(p->next);
        }
        free(p);
    }
}
