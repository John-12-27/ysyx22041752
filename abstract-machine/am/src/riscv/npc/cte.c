#include <am.h>
#include <klib.h>

static Context* (*user_handler)(Event, Context*) = NULL;

Context* __am_irq_handle(Context *c) {
  if (user_handler) {
    Event ev = {0};

    switch (c->mcause) 
    {
        case 11: 
                 if((c->GPR1 == 1) || (c->GPR1 == -1))
                 {
                     ev.event = EVENT_YIELD;
                 }
                 else if((c->GPR1 == 0) ||  //sys_exit
                         (c->GPR1 == 2) ||  //sys_open
                         (c->GPR1 == 3) ||  //sys_read
                         (c->GPR1 == 4) ||  //sys_write
                         (c->GPR1 == 7) ||  //sys_close
                         (c->GPR1 == 8) ||  //sys_lseek
                         (c->GPR1 == 9) ||  //sys_brk
                         (c->GPR1 ==19)     //sys_gettimeofday
                        )
                 {
                     ev.event = EVENT_SYSCALL;
                 } break;
        default:   ev.event = EVENT_ERROR; break;
    }

    c = user_handler(ev, c);
    assert(c != NULL);
  }

  return c;
}

extern void __am_asm_trap(void);

bool cte_init(Context*(*handler)(Event, Context*)) {
  // initialize exception entry
  asm volatile("csrw mtvec, %0" : : "r"(__am_asm_trap));

  // register event handler
  user_handler = handler;

  return true;
}

Context *kcontext(Area kstack, void (*entry)(void *), void *arg) {
  return NULL;
}

void yield() {
  asm volatile("li a7, -1; ecall");
}

bool ienabled() {
  return false;
}

void iset(bool enable) {
}
