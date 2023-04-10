#include <stdio.h>
#include <stdint.h>

extern uint32_t NDL_GetTicks();
extern int NDL_Init(uint32_t flags);
int main() 
{
    NDL_Init(0);
    uint32_t t_ms;
    for(int i = 1; i < 20; i++)
    {
        while(t_ms / 1000 < i)
        {
            t_ms = NDL_GetTicks();
        }
        printf("hello world seconds : %d\n", i);
    }

    return 0;
}
