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

extern uint64_t g_nr_guest_inst;
FILE *log_fp = NULL;
FILE *mtrace_fp = NULL;

bool inputL = false;
bool inputM = false;


static iRingBuf iringbuf[IRINGBUF_DEPTH] = {};
static iRingBuf *head = NULL;
static iRingBuf *tail = NULL;

static void init_iRingBuf()
{
    for(int i = 0; i < IRINGBUF_DEPTH; i++)
    {
        for(int j = 0; j < 128; j++)
        {
            iringbuf[i].buf[j] = '\0';
        }
        if(i != IRINGBUF_DEPTH - 1)
        {
            iringbuf[i].next = &iringbuf[i+1];
        }
        else
        {
            iringbuf[i].next = &iringbuf[0];
        }
    }
    head = &iringbuf[0];
    tail = &iringbuf[0];
}

static void iRingBufLoad(char logbuf[])
{
    static bool full = false;
    static int i = 0;
    if(!full && i == 10)
    {
        full = true;
    }
    if(full)
    {
        head = head->next;
    }
    for(int j = 0; j < 128; j++)
    {
        tail->buf[j] = logbuf[j];
    }
    tail = tail->next;
    i++;
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
    iRingBufLoad(s->logbuf);
}

void output_iRingBuf()
{
    for(; head->next != tail; head = head->next)
    {
        log_write("%s\n", head->buf);
    }
    log_write("%s\n", head->buf);
}

void init_log(const char *log_file) 
{
    log_fp = stdout;
    if(log_file != NULL) 
    {
        FILE *fp = fopen(log_file, "w");
        Assert(fp, "Can not open '%s'", log_file);
        log_fp = fp;
    }
    Log("Log is written to %s", log_file ? log_file : "stdout");

    init_iRingBuf();
}

bool log_enable(vaddr_t pc) 
{
    bool status = false;
    if(inputL)
    {
#ifdef CONFIG_ITRACE_COND
        if(pc >= CONFIG_TRACE_START&& pc <= CONFIG_TRACE_END)
#endif
        {
            status = true;
        }
    }
    return status;
}
