#include <unistd.h>
#include <stdio.h>
/*#include </home/john/ysyx-workbench/navy-apps/libs/libfixedptc/include/fixedptc.h>*/
#include <fixedptc.h>

extern uint32_t SDL_GetTicks();
int main() {
  /*write(1, "Hello World!\n", 13);*/

  /*for(int i = 0; i < 3; i++)*/
  /*{*/
      /*printf("Hello World from Navy-apps for the %dth time!\n", i); */
  /*}*/

    volatile int32_t test = (int32_t)(3.141592653 * (1 << 8) + 0.5);

  return 0;
}
