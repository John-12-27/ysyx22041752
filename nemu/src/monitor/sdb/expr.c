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
  word_t val;
} Token;

static Token tokens[NUM_TOKENS] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  bool negTag = false;
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
            return false;
        }

        switch (rules[i].token_type) 
        {
            case TK_NUM: 
            {
                tokens[nr_token].type = TK_NUM;
                if(substr_len < STR_LEN)
                {
                    tokens[nr_token].val = (word_t)strtol(substr_start, &substr_end, 10);
                }
                else
                {
                    printf("The number must be less than 32!");
                    return false;
                }
                if(negTag)
                {
                    nr_token++;
                    tokens[nr_token].type = ')';
                    negTag = false;
                }
            } break;
            case '+':
            {
                tokens[nr_token].type = '+';
            } break;
            case '-':
            {
                if(((tokens[nr_token-1].type != TK_NUM) && 
                   (tokens[nr_token-1].type != ')') && (nr_token > 0))
                || (nr_token == 0))
                {
                    tokens[nr_token].type = '(';
                    nr_token++;
                    tokens[nr_token].type = TK_NUM;
                    tokens[nr_token].val  = 0;
                    nr_token++;
                    negTag = true;
                }
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
                nr_token--;
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
bool check_parentheses(Token *p, Token *q, bool *success)
{
    int8_t top = 0;
    bool parClear = false;
    for(Token *i = p; i <= q; i++)
    {
        if(i->type == '(')
        {
            if((((i-1)->type == ')') || ((i-1)->type == TK_NUM)) && (i > p))
            {
                *success = false;
                return false;
            }
            top++;
        }
        else if(i->type == ')')
        {
            if((((i-1)->type != ')') && ((i-1)->type != TK_NUM) && (i > p)) || (i == p))
            {
                *success = false;
                return false;
            }
            top--;
        }
        if(!top && (i < q) && p->type == '(')
        {
            parClear = true;
        }
    }
    if(top)
    {
        *success = false;
        return false;
    }
    else
    {
        if(!parClear && (p->type == '(') && (q->type == ')'))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

Token *check_operator(Token *p, Token *q, bool *success)
{
    char    stack[NUM_TOKENS] = {'\0'};
    uint8_t mainOp = 0;
    uint8_t parCnt = 0;
    Token   *tag   = NULL;
    for(Token *i = p; i <= q; i++)
    {
        if(i->type == '(')
        {
            parCnt++;
        }
        else if(i->type == ')')
        {
            parCnt--;
        }
        if(!parCnt)
        {
            if((i->type == '+') || (i->type == '-'))
            {
                stack[mainOp] = i->type;
                tag = i;
                mainOp++;
            }
            else if((i->type == '*') || (i->type == '/'))
            {
                if((stack[mainOp-1] != '+') && (stack[mainOp-1] != '-'))
                {
                    stack[mainOp] = i->type;
                    tag = i;
                    mainOp++;
                }
            }
        }
    }
    return tag;
}

word_t eval(Token *p, Token *q, bool *success)
{
    if(p > q)
    {
        *success = false;
        return 0;
    }
    else if(p == q)
    {
        return p->val;
    }
    else if(check_parentheses(p, q, success))
    {
        return eval(p+1, q-1, success);
    }
    else if(*success)
    {
        Token *op = check_operator(p, q, success);
        word_t val1 = eval(p, op-1, success);
        word_t val2 = eval(op+1, q, success);

        switch(op->type)
        {
            case '+': 
            {
                return val1 + val2;
            } break;
            case '-': 
            {
                return val1 - val2;
            } break;
            case '*': 
            {
                return val1 * val2;
            } break;
            case '/': 
            {
                if(val2)
                {
                    return val1 / val2;
                }
                else
                {
                    *success = false;
                }
            } break;
            default : panic("Operator err!!!");
        }
    }

    return 0;
}

word_t expr(char *e, bool *success) 
{
    if (!make_token(e)) 
    {
        *success = false;
        return 0;
    }

    return eval(&tokens[0], &tokens[nr_token-1], success); 
}
