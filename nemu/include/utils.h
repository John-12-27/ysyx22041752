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

#ifndef __UTILS_H__
#define __UTILS_H__

#include <common.h>
#include <elf.h>
// ----------- state -----------

enum { NEMU_RUNNING, NEMU_STOP, NEMU_END, NEMU_ABORT, NEMU_QUIT };

typedef struct 
{
    int state;
    vaddr_t halt_pc;
    uint32_t halt_ret;
} NEMUState;

extern NEMUState nemu_state;

/* tracer */
#if ((CONFIG_ITRACE_END - CONFIG_ITRACE_START) <= 10)
    #define IRINGBUF_DEPTH 10
#else
    #define IRINGBUF_DEPTH (CONFIG_ITRACE_END - CONFIG_ITRACE_START)
#endif
#if ((CONFIG_PMTRACE_END - CONFIG_PMTRACE_START) <= 10)
    #define MRINGBUF_DEPTH 10
#else
    #define MRINGBUF_DEPTH (CONFIG_VMTRACE_END - CONFIG_VMTRACE_START)
#endif
#if ((CONFIG_DTRACE_END - CONFIG_DTRACE_START) <= 10)
    #define DRINGBUF_DEPTH 10
#else
    #define DRINGBUF_DEPTH (CONFIG_DTRACE_END - CONFIG_DTRACE_START)
#endif

typedef struct RingBuf 
{
    int  NO;
    char buf[256];
    struct RingBuf *next;
} RingBuf;

typedef struct symFunc
{
    uint64_t baseAddr;
    //Elf64_Addr baseAddr;
    uint64_t   size;
    uint32_t   name;
    struct symFunc *next;
} symFunc;

typedef struct fStack
{
    vaddr_t return_pc;
    uint32_t   name;
    struct fStack *last;
} fStack;

typedef struct strTab
{
    uint64_t size;
    char *pStrStart;
} strTab;

// ----------- timer -----------

uint64_t get_time();

// ----------- log -----------

#define ANSI_FG_BLACK   "\33[1;30m"
#define ANSI_FG_RED     "\33[1;31m"
#define ANSI_FG_GREEN   "\33[1;32m"
#define ANSI_FG_YELLOW  "\33[1;33m"
#define ANSI_FG_BLUE    "\33[1;34m"
#define ANSI_FG_MAGENTA "\33[1;35m"
#define ANSI_FG_CYAN    "\33[1;36m"
#define ANSI_FG_WHITE   "\33[1;37m"
#define ANSI_BG_BLACK   "\33[1;40m"
#define ANSI_BG_RED     "\33[1;41m"
#define ANSI_BG_GREEN   "\33[1;42m"
#define ANSI_BG_YELLOW  "\33[1;43m"
#define ANSI_BG_BLUE    "\33[1;44m"
#define ANSI_BG_MAGENTA "\33[1;35m"
#define ANSI_BG_CYAN    "\33[1;46m"
#define ANSI_BG_WHITE   "\33[1;47m"
#define ANSI_NONE       "\33[0m"

#define ANSI_FMT(str, fmt) fmt str ANSI_NONE

#define ftrace_write(...) \
  { \
    extern FILE* ftrace_fp; \
      fprintf(ftrace_fp, __VA_ARGS__); \
      fflush(ftrace_fp); \
  } 

#define mtrace_write(...) \
  { \
    extern FILE* mtrace_fp; \
      fprintf(mtrace_fp, __VA_ARGS__); \
      fflush(mtrace_fp); \
  } 

#define dtrace_write(...) \
  { \
    extern FILE* dtrace_fp; \
      fprintf(dtrace_fp, __VA_ARGS__); \
      fflush(dtrace_fp); \
  } 

#define itrace_write(...) IFDEF(CONFIG_TARGET_NATIVE_ELF, \
  do { \
    extern FILE* itrace_fp; \
      fprintf(itrace_fp, __VA_ARGS__); \
      fflush(itrace_fp); \
  } while (0) \
)

#define _Log(...) \
  do { \
    printf(__VA_ARGS__); \
  } while (0)

#endif
