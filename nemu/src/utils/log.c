/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <common.h>
#include <utils.h>
#include <cpu/decode.h>
#include <elf.h>

FILE *itrace_fp = NULL;
FILE *ftrace_fp = NULL;
FILE *mtrace_fp = NULL;
FILE *dtrace_fp = NULL;

bool inputI = false;
bool inputM = false;
bool inputD = false;
bool inputF = false;

#if (defined(CONFIG_ITRACE) || defined(CONFIG_MTRACE)) || defined(CONFIG_DTRACE)
static RingBuf *ihead = NULL;
static RingBuf *itail = NULL;
static RingBuf *mhead = NULL;
static RingBuf *mtail = NULL;
static RingBuf *dhead = NULL;
static RingBuf *dtail = NULL;

static void init_RingBuf(RingBuf f[], uint8_t init)
{
    int maxDepth = 0;
    switch(init)
    {
        case 0:
            {
                maxDepth = IRINGBUF_DEPTH;
                ihead = &f[0];
                itail = &f[0];
            } break;
        case 1:
            {
                maxDepth = MRINGBUF_DEPTH;
                mhead = &f[0];
                mtail = &f[0];
            } break;
        case 2:
            {
                maxDepth = DRINGBUF_DEPTH;
                dhead = &f[0];
                dtail = &f[0];
            } break;
        default:
              break;
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

#if (!defined(CONFIG_ITRACE_DIRECT)) || (!defined(CONFIG_DTRACE_DIRECT)) || (!defined(CONFIG_MTRACE_DIRECT))
void RingBufLoad(char logbuf[], uint8_t load)
{
    static bool dfull = false;
    static int dcnt = 0;
    static bool mfull = false;
    static int mcnt = 0;
    static bool ifull = false;
    static int icnt = 0;
    switch(load)
    {
        case 0:
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
            } break;
        case 1:
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
            } break;
        case 2:
            {
                if(!dfull && dcnt == DRINGBUF_DEPTH)
                {
                    dfull = true;
                }
                if(dfull)
                {
                    dhead = dhead->next;
                }
                for(int j = 0; j < 256; j++)
                {
                    dtail->buf[j] = logbuf[j];
                }
                dtail = dtail->next;
                dcnt++;
            } break;
        default:
              break;
    }
}
#endif
#endif

#ifdef CONFIG_ITRACE
static RingBuf iringbuf[IRINGBUF_DEPTH] = {};
void log_inst(Decode *s)
{
    char *p = s->logbuf;
    p += snprintf(p, sizeof(s->logbuf), FMT_WORD ":", s->pc);
    int ilen = s->snpc - s->pc;
    int i;
    uint8_t *inst = (uint8_t *)&s->isa.inst.val;
    for (i = ilen - 1; i >= 0; i --) 
    {
        p += snprintf(p, 4, " %02x", inst[i]);
    }
    int ilen_max = MUXDEF(CONFIG_ISA_x86, 8, 4);
    int space_len = ilen_max - ilen;
    if (space_len < 0) 
    {
        space_len = 0;
    }
    space_len = space_len * 3 + 1;
    memset(p, ' ', space_len);
    p += space_len;

   void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);
    disassemble(p, s->logbuf + sizeof(s->logbuf) - p,
        MUXDEF(CONFIG_ISA_x86, s->snpc, s->pc), (uint8_t *)&s->isa.inst.val, ilen);
}

void init_ilog(const char *file) 
{
    itrace_fp = stdout;
    if(file != NULL) 
    {
        FILE *fp = fopen(file, "w");
        Assert(fp, "Can not open '%s'", file);
        itrace_fp = fp;
    }
    Log("Log is written to %s", file ? file : "stdout");
    init_RingBuf(iringbuf, 0);
}

#ifndef CONFIG_ITRACE_DIRECT
void output_iRingBuf()
{
    for(; ihead->next != itail; ihead = ihead->next)
    {
        itrace_write("%s\n", ihead->buf);
    }
    itrace_write("%s\n", ihead->buf);
}
#endif

bool log_enable(vaddr_t pc) 
{
    bool status = false;
    if(inputI)
    {
#if CONFIG_ITRACE_COND
        if((pc >= CONFIG_ITRACE_START) && (pc <= CONFIG_ITRACE_END))
#endif
        {
            status = true;
        }
    }
    return status;
}
#endif

#ifdef CONFIG_DTRACE
static RingBuf dringbuf[DRINGBUF_DEPTH] = {};
static DTRACE_TAB table[8] = {
                                {"serial"  ,  MUXDEF(CONFIG_SERIAL  , true, false)},
                                {"rtc"     ,  MUXDEF(CONFIG_TIMER   , true, false)},
                                {"keyboard",  MUXDEF(CONFIG_KEYBOARD, true, false)},
                                {"vgactl"  ,  MUXDEF(CONFIG_VGA     , true, false)},
                                {"vmem"    ,  MUXDEF(CONFIG_VMEM    , true, false)},
                                {"audio"   ,  MUXDEF(CONFIG_AUDIO   , true, false)},
                                {"disk"    ,  MUXDEF(CONFIG_DISK    , true, false)},
                                {"sdhci"   ,  MUXDEF(CONFIG_SDCARD  , true, false)},
                             };

void log_device(Decode *s, const char *name, word_t data, bool read)
{
    char *p = s->dlogbuf;
    p += snprintf(p, sizeof(s->dlogbuf), "%s\t", s->logbuf);
    p += snprintf(p, sizeof(s->dlogbuf), " device: %s", name);
    p += snprintf(p, sizeof(s->dlogbuf), " data:"FMT_WORD , data);
    if(read)
    {
        p += snprintf(p, sizeof(s->dlogbuf), " R");
    }
    else
    {
        p += snprintf(p, sizeof(s->dlogbuf), " W");
    }
#ifdef CONFIG_DTRACE_DIRECT
    dtrace_write("%s\n", s->dlogbuf);
#else
    RingBufLoad(s->dlogbuf, 2);
#endif
}

#ifndef CONFIG_DTRACE_DIRECT
void output_dRingBuf()
{
    for(; dhead->next != dtail; dhead = dhead->next)
    {
        dtrace_write("%s\n", dhead->buf);
    }
    dtrace_write("%s\n", dhead->buf);
}
#endif

void init_dlog(const char *file) 
{
    dtrace_fp = stdout;
    if(file != NULL) 
    {
        FILE *fp = fopen(file, "w");
        Assert(fp, "Can not open '%s'", file);
        dtrace_fp = fp;
    }
    Log("Dtrace is written to %s", file ? file : "stdout");
    init_RingBuf(dringbuf, 2);
}

bool dtrace_enable(const char *device) 
{
    bool status = false;
    if(inputD)
    {
        for(int i = 0; i < 7; i++)
        {
            if((!strcmp(device, table[i].name)) && table[i].act)
            {
                status = true;
                break;
            }
        }
    }
    return status;
}
#endif

#ifdef CONFIG_MTRACE
static RingBuf mringbuf[MRINGBUF_DEPTH] = {};

void log_mem(Decode *s, paddr_t paddr, word_t data, bool read)
{
    char *p = s->mlogbuf;
    p += snprintf(p, sizeof(s->mlogbuf), "%s\t", s->logbuf);
    p += snprintf(p, sizeof(s->mlogbuf), " paddr:"FMT_PADDR, paddr);
    p += snprintf(p, sizeof(s->mlogbuf), " data:"FMT_WORD , data);
    if(read)
    {
        p += snprintf(p, sizeof(s->mlogbuf), " R");
    }
    else
    {
        p += snprintf(p, sizeof(s->mlogbuf), " W");
    }
#ifdef CONFIG_MTRACE_DIRECT
    mtrace_write("%s\n", s->mlogbuf);
#else
    RingBufLoad(s->dlogbuf, 1);
#endif
}
#ifndef CONFIG_MTRACE_DIRECT
void output_mRingBuf()
{
    for(; mhead->next != mtail; mhead = mhead->next)
    {
        mtrace_write("%s\n", mhead->buf);
    }
    mtrace_write("%s\n", mhead->buf);
}
#endif

void init_mlog(const char *file) 
{
    mtrace_fp = stdout;
    if(file != NULL) 
    {
        FILE *fp = fopen(file, "w");
        Assert(fp, "Can not open '%s'", file);
        mtrace_fp = fp;
    }
    Log("Mtrace is written to %s", file ? file : "stdout");
    init_RingBuf(mringbuf, 1);
}

bool mtrace_enable(paddr_t paddr) 
{
    bool status = false;
    if(inputM)
    {
#ifdef CONFIG_MTRACE_COND
        if((paddr >= CONFIG_PMTRACE_START) && (paddr <= CONFIG_PMTRACE_END ))
#endif
        {
            status = true;
        }
    }
    return status;
}
#endif

#ifdef CONFIG_FTRACE
static fStack  *fstack_top = NULL;
static fStack  *fstack_bottom = NULL;
symFunc *pFirstFunc = NULL;
static symFunc *pLastFunc  = NULL;
strTab strtab;
static char *shstrtab;

void init_flog(const char *file) 
{
    ftrace_fp = stdout;
    if(file != NULL) 
    {
        FILE *fp = fopen(file, "w");
        Assert(fp, "Can not open '%s'", file);
        ftrace_fp = fp;
    }
    Log("ftrace is written to %s", file ? file : "stdout");
}

void funcTabInit(const char *file)
{
    if(file != NULL)
    {
        Elf64_Ehdr elf64_ehdr;
        FILE *fp = fopen(file, "rb");
        Assert(fp, "Can not open '%s'", file);
        
        Log("There are %lu bytes in ELF header.\n",fread(&elf64_ehdr, sizeof(char), sizeof(elf64_ehdr), fp));
        if(elf64_ehdr.e_shoff)
        {
            Elf64_Shdr elf64_shdr;

            fseek(fp, (long)(elf64_ehdr.e_shoff + elf64_ehdr.e_shstrndx * elf64_ehdr.e_shentsize), SEEK_SET);
            Log("There are %lu bytes in the Section entry %d.\n", fread(&elf64_shdr, sizeof(char), sizeof(elf64_shdr), fp), (uint32_t)elf64_ehdr.e_shstrndx);

            shstrtab = malloc(elf64_shdr.sh_size);
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
                        strtab.pStrStart = malloc(elf64_shdr.sh_size);
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
                                pFirstFunc = malloc(sizeof(symFunc));
                                pLastFunc = pFirstFunc;
                                pLastFunc->baseAddr = elf64_sym.st_value;
                                pLastFunc->size     = elf64_sym.st_size;
                                pLastFunc->name     = elf64_sym.st_name;
                            }
                            else
                            {
                                pLastFunc->next = malloc(sizeof(symFunc));
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
                fstack_bottom = malloc(sizeof(fStack));
                fstack_bottom->last = NULL;
                fstack_top = fstack_bottom;
                fstack_top->return_pc = snpc;
                fstack_top->name = p->name;
            }
            else
            {
                fStack *tmp;
                tmp = malloc(sizeof(fStack));
                tmp->last = fstack_top;
                tmp->return_pc = snpc;
                tmp->name = p->name;
                fstack_top = tmp;
            }

            ftrace_write("Call %s, pc=%lx\n", strtab.pStrStart + fstack_top->name, dnpc);
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
        ftrace_write("Return from %s to %lx\n", strtab.pStrStart + tmp->name, dnpc);
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
#endif
