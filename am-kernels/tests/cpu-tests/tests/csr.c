// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : csr.c
// Author        : Cw
// Created On    : 2023-07-14 18:12
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
/*#include "trap.h"*/
#include <am.h>
#include <klib.h>
#include <klib-macros.h>

static Context* do_event(Event e, Context* c) 
{
    switch (e.event) 
    {
        case EVENT_YIELD   : printf("There is an yield request!\n"); c->mepc += 4; break;
        case EVENT_SYSCALL : ; c->mepc += 4; break;
        default: assert(0); printf("mcause = %d, it should be 11\n", e.event);
    }
    return c;
}

int main()
{
    asm volatile("li t1, 42949679104" : :);
    asm volatile("csrw mstatus, t1" : :);
    asm volatile("csrr t0, mstatus" : :);

    asm volatile("csrr t0, mtvec" : :);
    asm volatile("csrr t0, mcause" : :);
    asm volatile("csrr t0, mepc" : :);

    cte_init(do_event);
    asm volatile("csrr t0, mtvec" : :);

    asm volatile("li t2, 11" : :);
    asm volatile("csrw mcause, t2" : :);
    asm volatile("csrr t0, mcause" : :);

    asm volatile("li t2, 8" : :);
    asm volatile("csrw mepc, t2" : :);
    asm volatile("csrr t0, mepc" : :);

    asm volatile("ecall");

    return 0;
}
