// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : tracer.h
// Author        : Cw
// Created On    : 2022-11-12 19:54
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#ifndef _TRACER_H_
#define _TRACER_H_
#include <elf.h>
#include <stdio.h>
#include <stdbool.h>
#include "typedef.h"
#include "npc_state.h"

#define CONFIG_DIFFTEST      1
#define CONFIG_WATCHPOINT    1
//#define CONFIG_FTRACE        1

//#define CONFIG_DTRACE        1
#define CONFIG_SERIAL        1
#define CONFIG_TIMER         1
#define CONFIG_KEYBOARD      1
#define CONFIG_VGA           1
#define CONFIG_VMEM          1
#define CONFIG_AUDIO         1
#define CONFIG_DISK          1
#define CONFIG_SDCARD        1
#define CONFIG_DTRACE_DIRECT 1

#define CONFIG_ITRACE        1
#define CONFIG_ITRACE_START  0x80000000
#define CONFIG_ITRACE_END    0x80000000
//#define CONFIG_ITRACE_COND   1
#define CONFIG_ITRACE_DIRECT 1

#define CONFIG_MTRACE        1
#define CONFIG_PMTRACE_START 0x80002491
#define CONFIG_PMTRACE_END   0x80002491
#define CONFIG_MTRACE_COND   1
#define CONFIG_MTRACE_DIRECT 1



#define IRINGBUF_DEPTH 10
#define MRINGBUF_DEPTH 10
#define DRINGBUF_DEPTH 10

#define ftrace_write(...) \
  { \
      fprintf(ftrace_fp, __VA_ARGS__); \
      fflush(ftrace_fp); \
  } 

#define mtrace_write(...) \
  { \
      fprintf(mtrace_fp, __VA_ARGS__); \
      fflush(mtrace_fp); \
  } 

#define itrace_write(...)  \
  { \
      extern FILE *itrace_fp; \
      fprintf(itrace_fp, __VA_ARGS__); \
      fflush(itrace_fp); \
  } 

#define dtrace_write(...)  \
  { \
      fprintf(dtrace_fp, __VA_ARGS__); \
      fflush(dtrace_fp); \
  } 

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

extern strTab strtab;
extern symFunc *pFirstFunc;

extern void log_mem(Decode *s, paddr_t paddr, word_t data, bool read);
extern void log_inst(Decode *s);
extern void output_mRingBuf();
extern void output_iRingBuf();
extern void init_mlog(const char *file);
extern void init_flog(const char *file);
extern void init_ilog(const char *file);
extern bool mtrace_enable(paddr_t paddr);
extern bool log_enable(vaddr_t pc);
extern bool dtrace_enable(const char *device);
extern bool mtrace_enable(paddr_t paddr);
extern void funcTabInit(const char *file);
extern vaddr_t findPc(const char *s);
extern void call_return(vaddr_t snpc, vaddr_t dnpc);
extern void findStr(vaddr_t pc);
extern void freeAllStrTab();
extern void freeAllFunc(symFunc *p);
#endif
