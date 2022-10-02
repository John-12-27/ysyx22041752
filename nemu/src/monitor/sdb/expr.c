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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NUM

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {"[0-9]+"  , TK_NUM},      // num 
  {" +"      , TK_NOTYPE},   // spaces
  {"\\+"     , '+'},         // plus
  {"\\-"     , '-'},         // sub
  {"\\*"     , '*'},         // mult 
  {"/"       , '/'},         // div 
  {"\\("     , '('},         // (
  {"\\)"     , ')'},         // )
  {"=="      , TK_EQ},       // equal
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

#define STR_LEN 32
#define NUM_TOKENS 32

typedef struct token {
  int type;
  /*char str[STR_LEN];*/  //目前感觉纯数字可以直接记录数值
  uint64_t val;
} Token;

static Token tokens[NUM_TOKENS] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 1) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;
        char *substr_end = substr_start + substr_len;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        if(nr_token == NUM_TOKENS)
        {
            printf("Too many tokens!");
            return 0;
        }

        switch (rules[i].token_type) 
        {
            case TK_NUM: 
            {
                tokens[nr_token].type = TK_NUM;
                if(substr_len < STR_LEN)
                {
                    tokens[nr_token].val = strtol(substr_start, &substr_end, 10);
                }
                else
                {
                    printf("The number must be less than 32!");
                    return 0;
                }
            } break;
            case '+':
            {
                tokens[nr_token].type = '+';
            } break;
            case '-':
            {
                tokens[nr_token].type = '-';
            } break;
            case '*':
            {
                tokens[nr_token].type = '*';
            } break;
            case '/':
            {
                tokens[nr_token].type = '/';
            } break;
            case '(':
            {
                tokens[nr_token].type = '(';
            } break;
            case ')':
            {
                tokens[nr_token].type = ')';
            } break;
            case TK_NOTYPE:
            {

            } break;

            default: TODO();
        }
        nr_token++;
        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

// 用“堆栈”保存'('，遇到')'就出栈
static uint8_t rParArray[NUM_TOKENS] = {0}; 
static uint8_t rParCnt = 0;
static uint8_t lParArray[NUM_TOKENS] = {0};
bool check_parentheses(Token *p, Token *q)
{
    /*char stack[NUM_TOKENS] = {'\0'};*/
    int8_t top = 0;
    uint8_t cnt = 0;
    uint8_t lParCnt = 0;
    uint8_t lParTag[NUM_TOKENS] = {0};
    for(Token *i = p; i <= q; i++)
    {
        switch(p->type)
        {
            case '(':
            {
                /*stack[top] = '(';*/
                lParTag[lParCnt] = (uint8_t)(i-p);
                lParCnt++;
                top++;
            } break;
            case ')':
            {
                if((p-1)->type == '(')
                {
                    return false;
                }
                rParArray[cnt] = (uint8_t)(i-p);
                rParCnt++;
                lParArray[cnt] = lParTag[lParCnt-1];
                cnt++;
                /*stack[top] = ')';*/
                top--;
            } break;
        }
    }
    rParCnt--;
    if(!top)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool check_operator(Token *p, Token *q)
{
    for(Token *i = p+1; i<=q; i++)
    {
        if((i->type == '+') || (i->type == '-') ||
           (i->type == '*') || (i->type == '/'))
        {
            if(((i-1)->type != TK_NUM) || ((i+1)->type != TK_NUM))
            {
                return false;
            }
        }
    }
    return true;
}

void arraysSort(uint8_t arrA[], uint8_t arrB[], uint8_tlen)
{
    for(uint8_t i = 0; i < len; i++)
    {
        for(uint8_t j = 0; j < len - i; j++)
        {
            if(arrA[j] > arrB[j+1])
            {
                uint8_t tmp = arrA[j];
                arrA[j]     = arrA[j+1];
                arrA[j+1]   = tmp;

                tmp       = arrB[j];
                arrB[j]   = arrB[j+1];
                arrB[j+1] = tmp;
            }
        }
    }
}

word_t eval(Token *p, Token *q)
{
    static i = 0;
    uint8_t main_op = '\0';
    word_t res;
    if((lParArray[0] == i) && (rParArray[0] == q - i))
    {
        i++;
        return eval(p+1, q-1);
    }
    else
    {
        Token *tmp = p;
        while(tmp)
    }


    return res;
}

word_t expr(char *e, bool *success) {
    if (!make_token(e) || !check_parentheses(&tokens[0],&tokens[nr_token-1]) || !check_operator(&tokens[0],&tokens[nr_token-1])) 
    {
        *success = false;
        return 0;
    }

    arraysSort(lParArray, rParArray, rParCnt);



  return 1; 
}
