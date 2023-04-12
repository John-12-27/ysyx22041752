#include <unistd.h>
#include <stdio.h>
#include "fixedptc.h"

int main() {
  write(1, "Hello World!\n", 13);

  /*for(int i = 0; i < 3; i++)*/
  /*{*/
      /*printf("Hello World from Navy-apps for the %dth time!\n", i); */
  /*}*/

    fixedpt a = fixedpt_floor(fixedpt_rconst(5.6));
    fixedpt b = fixedpt_floor(fixedpt_rconst(-3.4));
    fixedpt c = fixedpt_ceil(fixedpt_rconst(5.6));
    fixedpt d = fixedpt_ceil(fixedpt_rconst(-3.4));
    printf("floor(5.6) = %d\n", a >> 8);
    printf("ceil(5.6) = %d\n", c >> 8);
    printf("floor(-3.4) = %d\n", b >> 8);
    printf("ceil(-3.4) = %d\n", d >> 8);
    printf("5.6 * (-3.4) = %d\n", fixedpt_mul(fixedpt_rconst(5.6), fixedpt_rconst(-3.4)) >> 8);


  return 0;
}
