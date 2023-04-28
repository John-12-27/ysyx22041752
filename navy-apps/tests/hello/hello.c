#include <unistd.h>
#include <stdio.h>
#include <stdint.h>

int main() {
  /*write(1, "Hello World!\n", 13);*/

  /*for(int i = 0; i < 3; i++)*/
  /*{*/
      /*printf("Hello World from Navy-apps for the %dth time!\n", i); */
  /*}*/

    for(int i=0;i<10;i++)
    {
        volatile int32_t test = (int32_t)(3.141592653 * (1 << 8) + (i/2) ? 0.5 : -0.5);
        printf("%d\n", test);
    }

  return 0;
}
