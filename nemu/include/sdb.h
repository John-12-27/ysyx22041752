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

#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>

typedef struct watchpoints
{
    int NO;
    word_t OldVal;
    word_t NewVal;
    char *expr;
    struct watchpoints *next;
} WP;

word_t expr(char *e, bool *success);

extern void init_wp_pool();
extern WP *new_wp(bool *success);
extern void free_wp(WP *wp);
extern void displayWp();
extern WP *num2wp(uint8_t n);//监视点数很大时要修改参数数据类型
extern bool checkChange();

#endif
