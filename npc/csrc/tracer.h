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

#define IRINGBUF_DEPTH 10
#define MRINGBUF_DEPTH 10
#define CONFIG_TRACE_START   0x80000290
#define CONFIG_TRACE_END     0x80000298
#define CONFIG_VMTRACE_START 0x80000000
#define CONFIG_VMTRACE_END   0x80000008
#define CONFIG_PMTRACE_START 0x80000000
#define CONFIG_PMTRACE_END   0x80000008

#define flog_write(...) \
  { \
      fprintf(flog_fp, __VA_ARGS__); \
      fflush(flog_fp); \
  } 

#define mlog_write(...) \
  { \
      fprintf(mtrace_fp, __VA_ARGS__); \
      fflush(mtrace_fp); \
  } 

#define log_write(...)  \
  { \
      fprintf(log_fp, __VA_ARGS__); \
      fflush(log_fp); \
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

extern void log_mem(Decode *s, vaddr_t vaddr, paddr_t paddr, word_t data, bool read);
extern void log_inst(Decode *s, bool mem);
extern void output_mRingBuf();
extern void output_iRingBuf();
extern void init_mlog(const char *file);
extern void init_flog(const char *file);
extern void init_log(const char *file);
extern bool mtrace_enable(vaddr_t vaddr, paddr_t paddr);
extern bool log_enable(vaddr_t pc);
extern void funcTabInit(const char *file);
extern vaddr_t findPc(const char *s);
extern void call_return(vaddr_t snpc, vaddr_t dnpc);
extern void findStr(vaddr_t pc);
extern void freeAllStrTab();
extern void freeAllFunc(symFunc *p);
#endif
