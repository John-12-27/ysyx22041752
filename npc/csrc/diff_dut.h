#ifndef _DIFF_DUT_H_
#define _DIFF_DUT_H_
#include "typedef.h"

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
# define DIFFTEST_REG_SIZE (sizeof(uint64_t) * 33) // GRPs + pc
                                                   //
extern void init_difftest(char *ref_so_file, long img_size, int port) ;
extern void difftest_step(vaddr_t pc, vaddr_t npc);
extern void difftest_skip_ref();
extern void difftest_skip_dut(int nr_ref, int nr_dut);
#endif
