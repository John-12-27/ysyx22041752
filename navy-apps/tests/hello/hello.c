#include <unistd.h>
#include <stdio.h>

int main() {
  write(1, "Hello World!\n", 13);

  for(int i = 0; i < 10; i++)
  {
      printf("Hello World from Navy-apps for the %dth time!\n", i); 
  }

  return 0;
}
