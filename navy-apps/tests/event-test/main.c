#include <stdio.h>
#include <NDL.h>

int main() 
{
    NDL_Init(0);
    while (1) 
    /*for(int i = 0; i < 10; i++)*/
    {
        char buf[64];
        if (NDL_PollEvent(buf, sizeof(buf))) 
        {
            printf("receive event: %s\n", buf);
        }
    }
    return 0;
}

