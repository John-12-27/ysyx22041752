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

FILE *log_fp = NULL;
FILE *mtrace_fp = NULL;

bool inputL = false;
bool inputM = false;

static RingBuf iringbuf[IRINGBUF_DEPTH] = {};
static RingBuf mringbuf[MRINGBUF_DEPTH] = {};
static RingBuf *ihead = NULL;
static RingBuf *itail = NULL;
static RingBuf *mhead = NULL;
static RingBuf *mtail = NULL;

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
        if(!ifull && icnt == 10)
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
        if(!mfull && mcnt == 10)
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
    p += snprintf(p, sizeof(s->mlogbuf), "vaddr:"FMT_WORD , vaddr);
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
    RingBufLoad(s->mlogbuf, true);
}

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
    RingBufLoad(s->logbuf, false);
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
        Assert(fp, "Can not open '%s'", file);
        mtrace_fp = fp;
    }
    Log("Mtrace is written to %s", file ? file : "stdout");
    init_RingBuf(mringbuf, true);
}

void init_log(const char *file) 
{
    log_fp = stdout;
    if(file != NULL) 
    {
        FILE *fp = fopen(file, "w");
        Assert(fp, "Can not open '%s'", file);
        log_fp = fp;
    }
    Log("Log is written to %s", file ? file : "stdout");
    init_RingBuf(iringbuf, false);
}

bool mtrace_enable(vaddr_t vaddr, paddr_t paddr) 
{
    bool status = false;
    if(inputM)
    {
#ifdef CONFIG_MTRACE_COND
        if(((vaddr >= CONFIG_VMTRACE_START) && (vaddr <= CONFIG_VMTRACE_END)) || ((paddr >= CONFIG_PMTRACE_START) && (paddr <= CONFIG_PMTRACE_END )))
#endif
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
#if CONFIG_ITRACE_COND
        if((pc >= CONFIG_TRACE_START) && (pc <= CONFIG_TRACE_END))
#endif
        {
            status = true;
        }
    }
    return status;
}
