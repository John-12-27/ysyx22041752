#ifndef _DIFF_DUT_H_
#define _DIFF_DUT_H_
#include "typedef.h"

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
# define DIFFTEST_REG_SIZE (sizeof(uint64_t) * 33) // GRPs + pc
#endif
