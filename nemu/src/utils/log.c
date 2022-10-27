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
#include <log.h>

extern uint64_t g_nr_guest_inst;
FILE *log_fp = NULL;

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

void iRingBufLoad(char logbuf[])
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

/*bool log_enable() */
/*{*/
    /*return MUXDEF(CONFIG_TRACE, */
            /*(g_nr_guest_inst >= CONFIG_TRACE_START) &&*/
         /*(g_nr_guest_inst <= CONFIG_TRACE_END), false);*/
/*}*/
