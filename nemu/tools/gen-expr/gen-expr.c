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
* See the Mulan PSL v3 for more details.
***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {'\0',};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned int result = (unsigned int) %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

uint16_t genNum(char *p, bool *divFlag)
{
    static uint32_t num;
    if(!(*divFlag))
    {
        num = rand();
    }
    else
    {
        num = 1;

        /*uint32_t i = 0;*/
        /*while((i > num) || (i == 0))*/
        /*{*/
            /*i = rand();*/
        /*}*/

        *divFlag = false;
    }
    sprintf(p, "%u", num);
    return strlen(buf);
}

uint16_t genLPar(char *p)
{
    *p = '(';
    return strlen(buf);
}

uint16_t genRPar(char *p)
{
    *p = ')';
    return strlen(buf);
}

uint16_t genSpace(char *p)
{
    *p = ' ';
    return strlen(buf);
}

uint16_t genOp(char *p, bool *divFlag)
{
    uint8_t op = rand() & 3;
    switch(op)
    {
        case 0:
        {
            *p = '+';
        } break;
        case 1:
        {
            *p = '-';
        } break;
        case 2:
        {
            *p = '*';
        } break;
        case 3:
        {
            *p = '/';
            *divFlag = true;
        } break;
    }

    return strlen(buf);
}

static char *p_buf = buf;
static bool divFlag    = false;
static bool allowNum   = true;
static bool allowLPar  = true;
static bool allowRPar  = false;
static bool allowOp    = false;
static bool allowSpace = true;
static uint32_t parCnt = 0;

static void gen_init()
{
    p_buf = buf;
    for(int i = 0; i < 65536; i++)
    {
        buf[i] = '\0';
    }
    divFlag    = false;
    allowNum   = true;
    allowLPar  = true;
    allowRPar  = false;
    allowOp    = false;
    allowSpace = true;
    parCnt     = 0;
}

static void gen_rand_expr() 
{
    switch(rand() & 3)
    {
        case 0:
        {
            if(allowNum)
            {
                p_buf = buf + genNum(p_buf, &divFlag); 
                allowNum   = false;
                allowLPar  = false;
                allowRPar  = true;
                allowOp    = true;
                allowSpace = false;
                while(parCnt)
                {
                    gen_rand_expr();
                }
            }
            else
            {
                gen_rand_expr();
            }

        } break;
        case 1:
        {
            if(allowLPar)
            {
                p_buf = buf + genLPar(p_buf);
                parCnt++;
                allowNum   = true;
                allowLPar  = true;
                allowRPar  = false;
                allowOp    = false;
                allowSpace = true;

                gen_rand_expr();
            }
            else if(allowRPar && parCnt)
            {
                p_buf = buf + genRPar(p_buf);
                parCnt--;
                allowNum   = false;
                allowLPar  = false;
                allowRPar  = true;
                allowOp    = true;
                allowSpace = true;
            }
            else
            {
                gen_rand_expr();
            }
        } break;
        case 2:
        {
            if(allowOp)
            {
                p_buf = buf + genOp(p_buf, &divFlag);
                allowNum   = true;
                allowLPar  = true;
                allowRPar  = false;
                allowOp    = false;
                allowSpace = true;
                
                gen_rand_expr();
            }
            else
            {
                gen_rand_expr();
            }
        } break;

        default:
        {
            if(allowSpace)
            {
                p_buf = buf + genSpace(p_buf);
                
                gen_rand_expr();
            }
            else
            {
                gen_rand_expr();
            }
        }
        
    }

}

int main(int argc, char *argv[]) {
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) 
  {
    gen_init();
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    if(fscanf(fp, "%d", &result))
    {
        pclose(fp);
        printf("%u %s\n", result, buf);
    }

  }
  return 0;
}
