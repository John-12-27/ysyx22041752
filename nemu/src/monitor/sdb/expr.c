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
#include <memory/host.h>
enum {
  TK_NOTYPE = 256, 
  TK_EQ, 
  TK_NEQ, 
  TK_NUM, 
  TK_HEX, 
  TK_AND, 
  TK_REG,
  TK_POINTER,

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {"0x\(([0-9]|[a-f]|[A-F])+)", TK_HEX},      // hexadecimal num 
  {"[0-9]+"  , TK_NUM},      // decimal num 
  {" +"      , TK_NOTYPE},   // spaces
  {"\\+"     , '+'},         // plus
  {"\\-"     , '-'},         // sub
  {"\\*"     , '*'},         // mult or pointers dereference 
  {"/"       , '/'},         // div 
  {"\\("     , '('},         // (
  {"\\)"     , ')'},         // )
  {"=="      , TK_EQ},       // equal
  {"!="      , TK_NEQ},      // not equal
  {"&&"      , TK_AND},      // logic and
  {"\\$\(0|ra|sp|gp|tp|t0|t1|t2|s0|s1|a0|a1|a2|a3|a4|a5|a6|a7|s2|s3|s4|s5|s6|s7|s8|s9|s10|s11|t3|t4|t5|t6|pc)",TK_REG}, // reg name
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() 
{
    int i;
    char error_msg[128];
    int ret;

    for (i = 0; i < NR_REGEX; i ++) 
    {
        ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
        if (ret != 0) 
        {
            regerror(ret, &re[i], error_msg, 128);
            panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
        }
    }
}

#define STR_LEN 32
#define NUM_TOKENS 32

typedef struct token {
  int type;
  word_t val;
} Token;

static Token tokens[NUM_TOKENS] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e, bool *success)
{
    int position = 0;
    int i;
    regmatch_t pmatch;
    bool negTag = false;
    nr_token = 0;

    while (e[position] != '\0') 
    {
        /* Try all rules one by one. */
        for (i = 0; i < NR_REGEX; i++) 
        {
            if (regexec(&re[i], e + position, 1, &pmatch, 1) == 0 && pmatch.rm_so == 0) 
            {
                char *substr_start = e + position;
                int substr_len = pmatch.rm_eo;
                char *substr_end = substr_start + substr_len;

                Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",i, rules[i].regex, position, substr_len, substr_len, substr_start);

                position += substr_len;


                if(nr_token == NUM_TOKENS)
                {
                    printf(ANSI_BG_RED "=========================================\n");
                    printf("Too many tokens!\n");
                    printf("=========================================" ANSI_NONE "\n");
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
                            printf(ANSI_BG_RED "=========================================\n");
                            printf("The number must be smaller than 10^32-1 !\n");
                            printf("=========================================" ANSI_NONE "\n");
                            return false;
                        }
                        if(negTag)
                        {
                            nr_token++;
                            tokens[nr_token].type = ')';
                            negTag = false;
                        }
                    } break;
                    case TK_HEX:
                    {
                        tokens[nr_token].type = TK_HEX;
                        if(substr_len < STR_LEN)
                        {
                            tokens[nr_token].val = (word_t)strtol(substr_start, &substr_end, 16);
                        }
                        else
                        {
                            printf(ANSI_BG_RED "=========================================\n");
                            printf("The number must be smaller than 16^32-1 !\n");
                            printf("=========================================" ANSI_NONE "\n");
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
                        if(((tokens[nr_token-1].type != TK_NUM) && (tokens[nr_token-1].type != ')') && (tokens[nr_token-1].type != TK_REG) && (tokens[nr_token-1].type != TK_HEX) && (nr_token > 0))
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
                        if(((tokens[nr_token-1].type != TK_NUM) && (tokens[nr_token-1].type != ')') && (tokens[nr_token-1].type != TK_REG) && (tokens[nr_token-1].type != TK_HEX) && (nr_token > 0))
                        || (nr_token == 0))
                        {
                            tokens[nr_token].type = TK_POINTER;
                        }
                        else
                        {
                            tokens[nr_token].type = '*';
                        }
                    } break;
                    case TK_REG:
                    {
                        char regstr[4] = {0};
                        strncpy(regstr, substr_start, substr_len);
                        
                        tokens[nr_token].type = TK_REG;
                        /*Assert(regstr != NULL, "Please check the *regstr");*/
                        tokens[nr_token].val  = isa_reg_str2val(regstr, success);
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
                    case TK_EQ:
                    {
                        tokens[nr_token].type = TK_EQ;
                    } break;
                    case TK_NEQ:
                    {
                        tokens[nr_token].type = TK_NEQ;
                    } break;
                    case TK_AND:
                    {
                        tokens[nr_token].type = TK_AND;
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

    if (i == NR_REGEX) 
    {
       printf(ANSI_BG_RED "=========================================\n");
       printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
       printf("=========================================" ANSI_NONE "\n");
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
            if(i > p)
            {
                if((((i-1)->type == ')') || ((i-1)->type == TK_NUM) || ((i-1)->type == TK_HEX) || ((i-1)->type == TK_REG)))
                {
                    *success = false;
                    printf(ANSI_BG_RED "=========================================\n");
                    printf("There is an error near '('.\n");
                    printf("=========================================" ANSI_NONE "\n");
                    return false;
                }
            }
            top++;
        }
        else if(i->type == ')')
        {
            if(i > p)
            {
                if((((i-1)->type != ')') && ((i-1)->type != TK_HEX) && ((i-1)->type != TK_NUM) && ((i-1)->type != TK_REG)))
                {
                    *success = false;
                    printf(ANSI_BG_RED "=========================================\n");
                    printf("There is an error near ')'.\n");
                    printf("=========================================" ANSI_NONE "\n");
                    return false;
                }
            }
            else if(i == p)
            {
                *success = false;
                printf(ANSI_BG_RED "=========================================\n");
                printf("There is an error near ')'.\n");
                printf("=========================================" ANSI_NONE "\n");
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

Token *check_operator(Token *p, Token *q)
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
            if(i->type == TK_AND)
            {
                stack[mainOp] = i->type;
                tag = i;
                mainOp++;
            }
            else if((i->type == TK_EQ) || (i->type == TK_NEQ))
            {
                if(mainOp > 0)
                {
                    if(stack[mainOp-1] != TK_AND)
                    {
                        stack[mainOp] = i->type;
                        tag = i;
                        mainOp++;
                    }
                }
                else
                {
                    stack[mainOp] = i->type;
                    tag = i;
                    mainOp++;
                }
            }
            else if((i->type == '+') || (i->type == '-'))
            {
                if(mainOp > 0)
                {
                    if((stack[mainOp-1] != TK_AND) && (stack[mainOp-1] != TK_EQ) && (stack[mainOp-1] != TK_NEQ))
                    {
                        stack[mainOp] = i->type;
                        tag = i;
                        mainOp++;
                    }
                }
                else
                {
                    stack[mainOp] = i->type;
                    tag = i;
                    mainOp++;
                }
            }
            else if((i->type == '*') || (i->type == '/'))
            {
                if(mainOp > 0)
                {
                    if((stack[mainOp-1] != TK_AND) && (stack[mainOp-1] != TK_EQ) && (stack[mainOp-1] != TK_NEQ) && (stack[mainOp-1] != '+') && (stack[mainOp-1] != '-'))
                    {
                        stack[mainOp] = i->type;
                        tag = i;
                        mainOp++;
                    }
                }
                else
                {
                    stack[mainOp] = i->type;
                    tag = i;
                    mainOp++;
                }
            }
            else if(i->type == TK_POINTER)
            {
                if(mainOp > 0)
                {
                    if((stack[mainOp-1] != TK_AND) && (stack[mainOp-1] != TK_EQ) && (stack[mainOp-1] != TK_NEQ) && (stack[mainOp-1] != '+') && (stack[mainOp-1] != '-') && (stack[mainOp-1] != '*') && (stack[mainOp-1] != '/'))
                    {
                        stack[mainOp] = i->type;
                        tag = i;
                        mainOp++;
                    }
                }
                else
                {
                    stack[mainOp] = i->type;
                    tag = i;
                    mainOp++;
                }
                
            }
            else if(i->type == TK_REG)
            {
                if(mainOp > 0)
                {
                    if((stack[mainOp-1] != TK_AND) && (stack[mainOp-1] != TK_EQ) && (stack[mainOp-1] != TK_NEQ) && (stack[mainOp-1] != '+') && (stack[mainOp-1] != '-') && (stack[mainOp-1] != '*') && (stack[mainOp-1] != '/') && (stack[mainOp-1] != TK_POINTER))
                    {
                        stack[mainOp] = i->type;
                        tag = i;
                        mainOp++;
                    }
                }
                else
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

extern uint8_t* guest_to_host(paddr_t paddr);
word_t eval(Token *p, Token *q, bool *success)
{
    if(p > q)
    {
        *success = false;
        return 0;
    }
    else if(p == q)
    {
        if((p->type != TK_NUM) && (p->type != TK_HEX) && (p->type != TK_REG))
        {
            *success = false;
        }
        return p->val;
    }
    else if(check_parentheses(p, q, success))
    {
        return eval(p+1, q-1, success);
    }
    else if(*success)
    {
        Token *op = check_operator(p, q);
        word_t val1 = 0;
        if((op->type != TK_POINTER) && (op->type != TK_REG))
        {
            val1 = eval(p, op-1, success);
        }
        word_t val2 = eval(op+1, q, success);

        switch(op->type)
        {
            case TK_REG:
            {
                return op->val;
            }
            case TK_POINTER:
            {
                return host_read(guest_to_host((paddr_t)val2), 8);
            } break;
            case TK_EQ: 
            {
                return val1 == val2;
            } break;
            case TK_NEQ:
            {
                return val1 != val2;
            } break;
            case TK_AND:
            {
                return val1 && val2;
            } break;
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
                    printf(ANSI_BG_RED "=========================================\n");
                    printf("The dividend is 0.\n");
                    printf("=========================================" ANSI_NONE "\n");
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
    if (!make_token(e, success)) 
    {
        *success = false;
        return 0;
    }

    return eval(&tokens[0], &tokens[nr_token-1], success); 
}
