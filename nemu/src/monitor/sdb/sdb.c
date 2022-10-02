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
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"
#include <memory/paddr.h>

static int is_batch_mode = false;

void init_regex();
void init_wp_pool();

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() {
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

static int cmd_c(char *args) {
  cpu_exec(-1);
  return 0;
}


static int cmd_q(char *args) {
  return -1;
}

static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_x(char *args);
static int cmd_p(char *args);

static struct {
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display informations about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si", "The number of instructions to execute specified by the parameter, and the default value of the parameter is 1", cmd_si },
  { "info", "Print all registers(r) or watchpoints(w)", cmd_info },
  { "x", "Print the specfical memory", cmd_x },
  { "p", "Expression evaluation", cmd_p },
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args) {
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

static int cmd_si(char *args)
{
  /* extract the first argument */
  char *arg    = strtok(NULL, " ");
  uint64_t siCnt;
  if(arg != NULL)
  {
    char *argEnd = arg + strlen(arg);
    siCnt = strtol(arg, &argEnd, 10);
  }
  else
  {
    siCnt = 1;
  }

  cpu_exec(siCnt);
  return 0;
}

static int cmd_info(char *args)
{
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  if(*arg == 'r')
  {
    isa_reg_display();        
  }
  else if(*args == 'w')
  {
  /* TODO: print watchpoints messages*/
  }
  else
  {
    printf("Input parameters error.\n");
  }

  return 0;
}

static int cmd_x(char *args)
{
    char *len = strtok(NULL, " ");

    uint64_t scanLen  = 1;
    paddr_t  pmemAddr = CONFIG_MBASE;
    if(len == NULL)
    {
        printf("Input parameters error.\n");
        return 0;
    }
    char *lenEnd = len + strlen(len);
   
    for(char *p = len; p < lenEnd; p++)
    {
        if(*p > '9' || *p < '0')
        {
            printf("The first parameter must be a number\n");
            return 0;
        }
    }
    char *baseAddr = lenEnd + 1;
    char *baseEnd  = baseAddr + strlen(baseAddr);
    for(char *p = baseAddr; p < baseEnd; p++)
    {
        if(!((*p>='A'&&*p<='F') || (*p>='a'&&*p<='f') || (*p>='0'&&*p<='9')))
        {
            printf("The second parameter must be a hexadecimal number\n");
            
            return 0;
        }
    }

    scanLen = (uint64_t)strtol(len, &lenEnd, 10);
    pmemAddr = strtol(baseAddr, &baseEnd, 16);

    printf("===========================================\n");
    printf("mem_addr\t\tdata\n");
    for(uint64_t i = 0; i < scanLen; i++)
    {
        printf("0x%lx\t\t0x%lx\n",pmemAddr+i*8,(word_t)paddr_read(pmemAddr+i*8,8));
    }
    printf("===========================================\n");
    return 0;
}

static int cmd_p(char *args)
{
  bool   status = true;
  /*word_t res;*/
  /* extract the first argument */
  if(args == NULL)
  {
      printf("Please input a expression.\n");
      return 0;
  }
  expr(args, &status);
  if(!status)
  {
      printf("The expression is wrong.\n");
      return 0;
  }
  else
  {
      
  }

  return 0;
}

void sdb_set_batch_mode() {
  is_batch_mode = true;
}

void sdb_mainloop() {
  if (is_batch_mode) {
    cmd_c(NULL);
    return;
  }

  for (char *str; (str = rl_gets()) != NULL; ) {
    char *str_end = str + strlen(str);

    /* extract the first token as the command */
    char *cmd = strtok(str, " ");
    if (cmd == NULL) { continue; }

    /* treat the remaining string as the arguments,
     * which may need further parsing
     */
    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end) {
      args = NULL;
    }

#ifdef CONFIG_DEVICE
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

    int i;
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(cmd, cmd_table[i].name) == 0) {
        if (cmd_table[i].handler(args) < 0) 
        {
            nemu_state.state = NEMU_QUIT;
            return; 
        }
        break;
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
  }
}

void init_sdb() {
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();
}
