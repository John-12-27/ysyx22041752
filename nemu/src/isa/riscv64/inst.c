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

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define R(i) gpr(i)
#define Mr   vaddr_read
#define Mw   vaddr_write

enum {
  TYPE_J, TYPE_I, TYPE_U, TYPE_S, TYPE_R, TYPE_B, TYPE_SH, TYPE_SHW, TYPE_C,
  TYPE_N, // none
};

#define src1R(n)   do { *src1   = R(n);     } while (0)
#define src2R(n)   do { *src2   = R(n);     } while (0)
#define destR(n)   do { *dest   = n;        } while (0)
#define src1I(i)   do { *src1   = i;        } while (0)
#define src2I(i)   do { *src2   = i;        } while (0)
#define src2SH(i)  do { *src2   = i;        } while (0)
#define src2SHW(i) do { *src2   = i;        } while (0)
#define destI(i)   do { *dest   = i;        } while (0)
#define srcC(i)    do { *srccsr = csrrd(i); } while (0)
#define csrAddr(i) do { *csraddr= i;        } while (0)

static word_t immI(uint32_t i) { return SEXT(BITS(i, 31, 20), 12); }
static word_t samt(uint32_t i) { return BITS(i, 25, 20); }
static word_t samtw(uint32_t i){ return BITS(i, 24, 20); }
static word_t immU(uint32_t i) { return SEXT(BITS(i, 31, 12), 20) << 12; }
static word_t immS(uint32_t i) { return (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); }
static word_t immJ(uint32_t i) { return SEXT(((BITS(i, 31, 31) << 20) | (BITS(i, 19, 12) << 12) | (BITS(i, 20, 20) << 11) | (BITS(i, 30, 21) << 1)), 21); }
static word_t immB(uint32_t i) { return SEXT(((BITS(i, 31, 31) << 12) | (BITS(i, 7, 7) << 11) | (BITS(i, 30, 25) << 5) | (BITS(i, 11, 8) << 1)), 13); }

static void decode_operand(Decode *s, word_t *dest, word_t *src1, word_t *src2, word_t *srccsr, word_t *csraddr, int type) 
{
    uint32_t i = s->isa.inst.val;
    int rd    = BITS(i, 11, 7);
    int rs1   = BITS(i, 19, 15);
    int rs2   = BITS(i, 24, 20);
    int rscsr = BITS(i, 31, 20);
    destR(rd);
    switch (type) 
    {
        case TYPE_J:   src1I(immJ(i));
                       break;
        case TYPE_I:   src1R(rs1);     
                       src2I(immI(i)); 
                       break;
        case TYPE_U:   src1I(immU(i)); 
                       break;
        case TYPE_S:   destI(immS(i)); 
                       src1R(rs1); 
                       src2R(rs2); 
                       break;
        case TYPE_R:   src1R(rs1);
                       src2R(rs2);
                       break;
        case TYPE_B:   src1R(rs1);
                       src2R(rs2);
                       break;
        case TYPE_C:   src1R(rs1);
                       srcC(rscsr);
                       csrAddr(rscsr);
                       break;
        case TYPE_SH:  src1R(rs1);
                       src2SH(samt(i));
                       break;
        case TYPE_SHW: src1R(rs1);
                       src2SHW(samtw(i));
                       break;
    }
}

static inline int8_t div_filter(word_t src1, word_t src2, bool sign, bool half)
{
    /*printf("src1=0x%lx, src2=0x%lx, sign=%d\n", src1, src2, sign);*/
    /*printf("src1=%ld, src2=%ld, sign=%d\n", src1, src2, sign);*/
    /*printf("src1=%lu, src2=%lu, sign=%d\n", src1, src2, sign);*/
    if(src2 == 0)
    {
        return -1;
    }
    if(sign)
    {
        if((src1==0x8000000000000000) && (src2==0xffffffffffffffff) && !half)
        {
            return 1;
        }
        else if((src1==0x80000000) && (src2==0xffffffff) && half)
        {
            return 1;
        }
    }

    return 0;
}

static int decode_exec(Decode *s) 
{
    word_t dest = 0, src1 = 0, src2 = 0, srccsr = 0, csraddr = 0;
    s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* body */ ) { \
  decode_operand(s, &dest, &src1, &src2, &srccsr, &csraddr, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 0110111", lui    ,  U, R(dest) = src1; s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? ??? ????? 0010111", auipc  ,  U, R(dest) = src1 + s->pc; s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? ??? ????? 1101111", jal    ,  J, R(dest) = s->pc + 4; s->dnpc = s->pc + src1; s->jalTag = true; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 000 ????? 1100111", jalr   ,  I, R(dest) = s->pc + 4; s->dnpc = src1 + src2; s->jalTag = false; s->jalrTag = true);
  INSTPAT("??????? ????? ????? 000 ????? 1100011", beq    ,  B, if(src1 == src2) {s->dnpc = s->pc + immB(s->isa.inst.val);} s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 001 ????? 1100011", bnq    ,  B, if(src1 != src2) {s->dnpc = s->pc + immB(s->isa.inst.val);} s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 100 ????? 1100011", blt    ,  B, if((sword_t)src1 <  (sword_t)src2) {s->dnpc = s->pc + immB(s->isa.inst.val);} s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 101 ????? 1100011", bge    ,  B, if((sword_t)src1 >= (sword_t)src2) {s->dnpc = s->pc + immB(s->isa.inst.val);} s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 110 ????? 1100011", bltu   ,  B, if(src1 <  src2) {s->dnpc = s->pc + immB(s->isa.inst.val);} s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 111 ????? 1100011", bgeu   ,  B, if(src1 >= src2) {s->dnpc = s->pc + immB(s->isa.inst.val);} s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 000 ????? 0000011", lb     ,  I, R(dest) = SEXT(BITS(Mr(s, src1 + src2, 1),  7, 0),  8); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 001 ????? 0000011", lh     ,  I, R(dest) = SEXT(BITS(Mr(s, src1 + src2, 2), 15, 0), 16); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 010 ????? 0000011", lw     ,  I, R(dest) = SEXT(BITS(Mr(s, src1 + src2, 4), 31, 0), 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 100 ????? 0000011", lbu    ,  I, R(dest) = Mr(s, src1 + src2, 1); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 101 ????? 0000011", lhu    ,  I, R(dest) = Mr(s, src1 + src2, 2); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 110 ????? 0000011", lwu    ,  I, R(dest) = Mr(s, src1 + src2, 4); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 011 ????? 0000011", ld     ,  I, R(dest) = Mr(s, src1 + src2, 8); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 000 ????? 0100011", sb     ,  S, Mw(s, src1 + dest, 1, src2); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 001 ????? 0100011", sh     ,  S, Mw(s, src1 + dest, 2, src2); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 010 ????? 0100011", sw     ,  S, Mw(s, src1 + dest, 4, src2); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 011 ????? 0100011", sd     ,  S, Mw(s, src1 + dest, 8, src2); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 000 ????? 0010011", addi   ,  I, R(dest) = src1 + src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 000 ????? 0011011", addiw  ,  I, R(dest) = SEXT(BITS((src1 + src2), 31, 0), 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 010 ????? 0010011", slti   ,  I, R(dest) = (sword_t)src1 < (sword_t)src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 011 ????? 0010011", sltiu  ,  I, R(dest) = src1 <  src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 100 ????? 0010011", xori   ,  I, R(dest) = src1 ^  src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 110 ????? 0010011", ori    ,  I, R(dest) = src1 |  src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("??????? ????? ????? 111 ????? 0010011", andi   ,  I, R(dest) = src1 &  src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("000000? ????? ????? 001 ????? 0010011", slli   , SH, R(dest) = src1 << src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 001 ????? 0011011", slliw  ,SHW, R(dest) = SEXT(BITS(src1, 31, 0) << src2, 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("000000? ????? ????? 101 ????? 0010011", srli   , SH, R(dest) = src1 >> src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 101 ????? 0011011", srliw  ,SHW, R(dest) = SEXT(BITS(src1, 31, 0) >> src2, 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("010000? ????? ????? 101 ????? 0010011", srai   , SH, if(src2) R(dest) = (src1 >> src2) | (SEXT(BITS(src1, 63, 63), 1ull) << (64-src2)); else R(dest) = src1; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0100000 ????? ????? 101 ????? 0011011", sraiw  ,SHW, R(dest) = SEXT((BITS(src1, 31, 0) >> src2) | BITS(SEXT(BITS(src1, 31, 31), 1) << (32-src2), 31, 0), 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 000 ????? 0110011", add    ,  R, R(dest) = src1 + src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 000 ????? 0111011", addw   ,  R, R(dest) = SEXT(BITS((src1 + src2), 31, 0), 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("0100000 ????? ????? 000 ????? 0110011", sub    ,  R, R(dest) = src1 - src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0100000 ????? ????? 000 ????? 0111011", subw   ,  R, R(dest) = SEXT(BITS((src1 - src2), 31, 0), 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 001 ????? 0110011", sll    ,  R, R(dest) = src1 << src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 001 ????? 0111011", sllw   ,  R, R(dest) = SEXT(BITS(src1, 31, 0) << BITS(src2, 4, 0), 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 010 ????? 0110011", slt    ,  R, R(dest) = (sword_t)src1 < (sword_t)src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 011 ????? 0110011", sltu   ,  R, R(dest) = src1 < src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 100 ????? 0110011", xor    ,  R, R(dest) = src1 ^ src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 101 ????? 0110011", srl    ,  R, R(dest) = src1 >> src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 101 ????? 0111011", srlw   ,  R, R(dest) = SEXT(BITS(src1, 31, 0) >> BITS(src2, 4, 0), 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("0100000 ????? ????? 101 ????? 0110011", sra    ,  R, if(BITS(src2, 5, 0)) R(dest) = (src1 >> BITS(src2, 5, 0)) | (SEXT(BITS(src1, 63, 63), 1ull) << (64-BITS(src2, 5, 0))); else R(dest) = src1; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0100000 ????? ????? 101 ????? 0111011", sraw   ,  R, R(dest) = SEXT((BITS(src1, 31, 0) >> BITS(src2, 4, 0)) | BITS(SEXT(BITS(src1, 31, 31), 1) << (32-BITS(src2, 4, 0)), 31, 0), 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 110 ????? 0110011", or     ,  R, R(dest) = src1 | src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000000 ????? ????? 111 ????? 0110011", and    ,  R, R(dest) = src1 & src2; s->jalTag = false; s->jalrTag = false);


  INSTPAT("0000001 ????? ????? 000 ????? 0110011", mul    ,  R, R(dest) = (sword_t)src1 * (sword_t)src2; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 001 ????? 0110011", mulh   ,  R, R(dest) = (int64_t)(((__int128)(sword_t)src1 * (__int128)(sword_t)src2) >> 64); s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 010 ????? 0110011", mulhsu ,  R, R(dest) = ((__int128)(sword_t)src1 * (unsigned __int128)src2) >> 64; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 011 ????? 0110011", mulhu  ,  R, R(dest) = ((unsigned __int128)src1 * (unsigned __int128)src2) >> 64; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 000 ????? 0111011", mulw   ,  R, R(dest) = SEXT(BITS(BITS(src1, 31, 0) * BITS(src2, 31, 0), 31, 0), 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 100 ????? 0110011", div    ,  R, if(div_filter(src1, src2, true, false) == 0) R(dest) = (sword_t)src1 / (sword_t)src2; else if(div_filter(src1, src2, true, false) == 1) R(dest) = src1; else R(dest) = 0xffffffffffffffff; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 101 ????? 0110011", divu   ,  R, if(div_filter(src1, src2, false, false) == 0) R(dest) = src1 / src2; else R(dest) = 0xffffffffffffffff; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 100 ????? 0111011", divw   ,  R, if(div_filter((word_t)BITS(src1, 31, 0), (word_t)BITS(src2, 31, 0), true, true) == 0) R(dest) = SEXT((int32_t)BITS((sword_t)src1, 31, 0) / (int32_t)BITS((sword_t)src2, 31, 0), 32); else if(div_filter((word_t)BITS(src1, 31, 0), (word_t)BITS(src2, 31, 0), true, true) == 1) R(dest) = SEXT(BITS(src1, 31, 0), 32); else R(dest) = 0xffffffffffffffff; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 101 ????? 0111011", divuw  ,  R, if(div_filter((word_t)BITS(src1, 31, 0), (word_t)BITS(src2, 31, 0), false, true) == 0) R(dest) = SEXT(BITS(src1, 31, 0) / BITS(src2, 31, 0), 32); else if(div_filter((word_t)BITS(src1, 31, 0), (word_t)BITS(src2, 31, 0), false, true) == 1) R(dest) = SEXT(BITS(src1, 31, 0), 32); else R(dest) = 0xffffffffffffffff; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 110 ????? 0110011", rem    ,  R, if(div_filter(src1, src2, true, false) == 0) R(dest) = (sword_t)src1 % (sword_t)src2; else if(div_filter(src1, src2, true, false) == 1) R(dest) = 0; else R(dest) = src1; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 111 ????? 0110011", remu   ,  R, if(div_filter(src1, src2, false, false) == 0) R(dest) = src1 % src2; else if(div_filter(src1, src2, false, false) == 1) R(dest) = 0; else R(dest) = src1; s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 110 ????? 0111011", remw   ,  R, if(div_filter((word_t)BITS(src1, 31, 0), (word_t)BITS(src2, 31, 0), true, true) == 0) R(dest) = SEXT((int32_t)BITS((sword_t)src1, 31, 0) % (int32_t)BITS((sword_t)src2, 31, 0), 32); else if(div_filter((word_t)BITS(src1, 31, 0), (word_t)BITS(src2, 31, 0), true, true) == 1) R(dest) = 0; else R(dest) = SEXT(BITS(src1, 31, 0), 32); s->jalTag = false; s->jalrTag = false);
  INSTPAT("0000001 ????? ????? 111 ????? 0111011", remuw  ,  R, if(div_filter((word_t)BITS(src1, 31, 0), (word_t)BITS(src2, 31, 0), false, true) == 0) R(dest) = SEXT(BITS(src1, 31, 0) % BITS(src2, 31, 0), 32); else if(div_filter((word_t)BITS(src1, 31, 0), (word_t)BITS(src2, 31, 0), false, true) == 1) R(dest) = 0; else R(dest) = SEXT(BITS(src1, 31, 0), 32); s->jalTag = false; s->jalrTag = false);

  INSTPAT("??????? ????? ????? 001 00000 1110011", csrw   ,  C, csrw(csraddr, src1);); //rd==0 
  INSTPAT("??????? ????? ????? 001 ????? 1110011", csrr   ,  C, R(dest) = srccsr; csrw(csraddr, src1);); //rd!=0
  INSTPAT("??????? ????? ????? 010 ????? 1110011", csrrs  ,  C, R(dest) = srccsr; csrw(csraddr, src1 | csrrd(csraddr)););
  INSTPAT("??????? ????? ????? 011 ????? 1110011", csrrc  ,  C, R(dest) = srccsr; csrw(csraddr, src1 & (~csrrd(csraddr))););
                                                                                                         
  INSTPAT("0000000 00000 00000 000 00000 1110011", ecall  ,  I, s->dnpc = isa_raise_intr(s, 11, s->pc);); //ecall from M-mode
  INSTPAT("0011000 00010 00000 000 00000 1110011", mret   ,  I, s->dnpc = isa_mret_intr());               //return to mepc

  INSTPAT("0000000 00001 00000 000 00000 1110011", ebreak ,  N, NEMUTRAP(s->pc, R(10)); s->jalTag = false; s->jalrTag = false); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ???????", inv    ,  N, INV(s->pc); s->jalTag = false; s->jalrTag = false);
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) 
{
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
