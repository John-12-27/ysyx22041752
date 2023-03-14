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

#include <sdb.h>

#define NR_WP 32
#define EXPR_MAX_LEN 32

static WP wp_pool[NR_WP] = {};
static char exprs[NR_WP][EXPR_MAX_LEN] = {};
static WP *head = NULL, *free_ = NULL;

void init_wp_pool() 
{
    int i;
    for (i = 0; i < NR_WP; i++) 
    {
        wp_pool[i].NO = i;
        wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
        wp_pool[i].OldVal = 0;
        wp_pool[i].NewVal = 0;
        wp_pool[i].expr = exprs[i];
    }
    head = NULL;
    free_ = wp_pool;
}

void displayWp()
{
    if(head == NULL)
    {
        printf(ANSI_BG_RED "=========================================\n");
        printf("There isn't a valid watchpoint.\n");
        printf("=========================================" ANSI_NONE "\n");
    }
    else
    {
        WP *tmp = head;
        printf("=======================================================================\n");
        printf("%s\t%-20s\t%-20s\t%s\t\n", "NO", "Old Value", "New Value", "Expression");
        while(tmp->next != NULL)
        {
            printf("%d\t%-20ld\t%-20ld\t", tmp->NO, tmp->OldVal, tmp->NewVal);
            puts(tmp->expr);
            printf("%-6d\t0x%-20lx\t0x%-20lx\t", tmp->NO, tmp->OldVal, tmp->NewVal);
            puts(tmp->expr);
            tmp = tmp->next;
        }
        printf("%d\t%-20ld\t%-20ld\t", tmp->NO, tmp->OldVal, tmp->NewVal);
        puts(tmp->expr);
        printf("%-6d\t0x%-20lx\t0x%-20lx\t", tmp->NO, tmp->OldVal, tmp->NewVal);
        puts(tmp->expr);
        printf("=======================================================================\n");
    }
}

WP *num2wp(uint8_t n)//监视点数很大时要修改参数数据类型
{
    WP *tmp = NULL;
    if(head != NULL)
    {
        for(tmp = head; tmp->next != NULL; tmp = tmp->next)
        {
            if(n == tmp->NO)
            {
                return tmp;
            }
        }
        if(n == tmp->NO)
        {
            return tmp;
        }
    }
    return NULL;
}

bool checkChange()
{
    bool changed = false;
    if(head != NULL)
    {
        bool s = true;
        WP *i = NULL;
        for(i = head; i->next != NULL; i = i->next)
        {
            i->NewVal = expr(i->expr, &s);
            if(i->OldVal != i->NewVal)
            {
                printf("=======================================================================\n");
                printf("The %d watchpoint has changed.\n", i->NO);
                printf("=======================================================================\n");
                printf("%s\t%-20s\t%-20s\t%s\t\n", "NO", "Old Value", "New Value", "Expression");
                printf("%d\t%-20ld\t%-20ld\t", i->NO, i->OldVal, i->NewVal);
                puts(i->expr);
                printf("%-6d\t0x%-20lx\t0x%-20lx\t", i->NO, i->OldVal, i->NewVal);
                puts(i->expr);
                printf("=======================================================================\n");
                changed = true;
                i->OldVal = i->NewVal;
            }
        }
        i->NewVal = expr(i->expr, &s);
        if(i->OldVal != i->NewVal)
        {
            printf("=======================================================================\n");
            printf("The %d watchpoint has changed.\n", i->NO);
            printf("=======================================================================\n");
            printf("%s\t%-20s\t%-20s\t%s\t\n", "NO", "Old Value", "New Value", "Expression");
            printf("%d\t%-20ld\t%-20ld\t", i->NO, i->OldVal, i->NewVal);
            puts(i->expr);
            printf("%-6d\t0x%-20lx\t0x%-20lx\t", i->NO, i->OldVal, i->NewVal);
            puts(i->expr);
            printf("=======================================================================\n");
            changed = true;
            i->OldVal = i->NewVal;
        }
    }
    return changed;
}

WP *new_wp(bool *success)
{
    WP *tmp = head;
    if(free_ == NULL)
    {
        *success = false;
        return NULL;
    }
    if(tmp == NULL)
    {
        head = free_;
        tmp = free_;
        free_ = free_->next;
        tmp->next = NULL;
    }
    else
    {
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = free_;
        tmp = free_;
        free_ = free_->next;
        tmp->next = NULL;
    }
    return tmp;
}

void free_wp(WP *wp)
{
    if(wp == head)
    {
        head = head->next;
        wp->next = NULL;
    }
    else
    {
        for(WP *i = head; i->next != NULL; i = i->next)
        {
            if(wp == i->next)
            {
                i->next = wp->next;
                wp->next = NULL;
            }
        }
    }
    if(free_ == NULL)
    {
        free_ = wp;
    }
    else
    {
        WP *tmp = free_;
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = wp;
    }
}

