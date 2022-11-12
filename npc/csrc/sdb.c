// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : sdb.c
// Author        : Cw
// Created On    : 2022-11-11 14:28
// Last Modified : 
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "color.h"
#include "sdb.h"
#include "expr.h"
#include "wp.h"
#include "monitor.h"
#include "memory.h"
#include "exec.h"
#include "npc_state.h"

static int cmd_help(char *args);
static int cmd_si(char *args);
static int cmd_info(char *args);
static int cmd_b(char *args);
static int cmd_x(char *args);
static int cmd_p(char *args);
static int cmd_w(char *args);
static int cmd_d(char *args);
static int cmd_q(char *args);
static int cmd_c(char *args);

static struct 
{
    const char *name;
    const char *description;
    int (*handler) (char *);
} cmd_table [] = {
    { "help", "Display informations about all supported commands", cmd_help },
    { "c", "Continue the execution of the program", cmd_c },
    { "q", "Exit NEMU", cmd_q },
    { "si", "The number of instructions to execute specified by the parameter, and the default value of the parameter is 1", cmd_si },
    { "info", "Print all registers(r) or watchpoints(w)", cmd_info },
    { "b", "halt at the specfical function", cmd_b },
    { "x", "Print the specfical memory", cmd_x },
    { "p", "Expression evaluation", cmd_p },
    { "w", "Set watchpoints", cmd_w},
    { "d", "Delete the specfical watchpoint.", cmd_d},
  /* TODO: Add more commands */
};

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() 
{
    static char *line_read = NULL;
    
    if (line_read) 
    {
        free(line_read);
        line_read = NULL;
    }
    
    line_read = readline("(npc) ");
    
    if (line_read && *line_read) 
    {
        add_history(line_read);
    }
    return line_read;
}

static int cmd_c(char *args) 
{
    exec(0, true);
    return 0;
}

static int cmd_q(char *args) 
{
    return -1;
}

static int cmd_x(char *args)
{
    char *len = strtok(NULL, " ");
    uint64_t scanLen  = 1;
    paddr_t  pmemAddr = MBASEADDR;
    if(len == NULL)
    {
        printf(ANSI_BG_RED "=========================================\n");
        printf("Input parameters error.\n");
        printf("=========================================" ANSI_NONE "\n");
        return 0;
    }
    char *lenEnd = len + strlen(len);
    for(char *p = len; p < lenEnd; p++)
    {
        if(*p > '9' || *p < '0')
        {
            printf(ANSI_BG_RED "=========================================\n");
            printf("The first parameter must be a number\n");
            printf("=========================================" ANSI_NONE "\n");
            return 0;
        }
    }
    char *baseAddr = lenEnd + 1;
    char *baseEnd  = baseAddr + strlen(baseAddr);
    for(char *p = baseAddr; p < baseEnd; p++)
    {
        if(!((*p>='A'&&*p<='F') || (*p>='a'&&*p<='f') || (*p>='0'&&*p<='9')))
        {
            printf(ANSI_BG_RED "=========================================\n");
            printf("The second parameter must be a hexadecimal number\n");
            printf("=========================================" ANSI_NONE "\n");
            return 0;
        }
    }
    scanLen = (uint64_t)strtol(len, &lenEnd, 10);
    pmemAddr = strtol(baseAddr, &baseEnd, 16);
    printf("===========================================\n");
    printf("mem_addr\t\tdata\n");
    for(uint64_t i = 0; i < scanLen; i++)
    {
        printf("0x%lx\t\t0x%lx\n",pmemAddr+i*8,(word_t)read_mem(pmemAddr+i*8,8));
    }
    printf("===========================================\n");
    return 0;
}

/*vaddr_t findPc(const char *s);*/
static int cmd_b(char *args)
{

    /*char *arg = strtok(NULL, " ");*/
    /*char s [30] = {"$pc==0x"}; */
    /*if(arg != NULL)*/
    /*{*/
        /*sprintf(&s[7], "%lx", findPc(arg));*/
        /*cmd_w(s);*/
    /*}*/
    /*else*/
    /*{*/
        /*printf(ANSI_BG_RED "=========================================\n");*/
        /*printf("Invalid name of function.\n");*/
        /*printf("=========================================" ANSI_NONE "\n");*/
    /*}*/

    return 0;
}

static int cmd_help(char *args) 
{
    /* extract the first argument */
    char *arg = strtok(NULL, " ");
    int i;
    if (arg == NULL) 
    {
    /* no argument given */
        for (i = 0; i < NR_CMD; i ++) 
        {
            printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        }
    }
    else 
    {
        for (i = 0; i < NR_CMD; i ++) 
        {
            if (strcmp(arg, cmd_table[i].name) == 0) 
            {
                printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
                return 0;
            }
        }
        printf(ANSI_BG_RED "=========================================\n");
        printf("Unknown command '%s'\n", arg);
        printf("=========================================" ANSI_NONE "\n");
    }
    return 0;
}

static int cmd_si(char *args)
{
    uint64_t siCnt;
    if(args != NULL)
    {
        for(char *i = args; *i != '\0'; i++)
        {
            if(!((*i > '0') && (*i < '9')))
            {
                printf(ANSI_BG_RED "=========================================\n");
                printf("The parameter must be a number.\n");
                printf("=========================================" ANSI_NONE "\n");
                return 0;
            }
        }
        char *argsEnd = args + strlen(args);
        siCnt = strtol(args, &argsEnd, 10);
    }
    else
    {
        siCnt = 1;
    }
    exec(siCnt, false);
    return 0;
}

static int cmd_info(char *args)
{
    char *arg = strtok(NULL, " ");
    if(*arg == 'r')
    {
        reg_display();        
    }
    else if(*args == 'w')
    {
        displayWp();
    }
    else
    {
        printf(ANSI_BG_RED "=========================================\n");
        printf("Invalid subcommand or Invalid watchpoint.\n");
        printf("=========================================" ANSI_NONE "\n");
    }
    return 0;
}

static int cmd_p(char *args)
{
    bool   status = true;
    word_t res    = 0;
    /*word_t res;*/
    /* extract the first argument */
    if(args == NULL)
    {
        printf(ANSI_BG_RED "=========================================\n");
        printf("Please input a expression.\n");
        printf("=========================================" ANSI_NONE "\n");
        return 0;
    }
    res = expr(args, &status);
    if(!status)
    {
        printf(ANSI_BG_RED "=========================================\n");
        printf("The expression is wrong.\n");
        printf("=========================================" ANSI_NONE "\n");
        return 0;
    }
    else
    {
        printf("=========================================\n");
        printf("The result is   %ld\n", res);
        printf("The result is 0x%lx\n", res);
        printf("=========================================\n");
    }
    return 0;
}

static int cmd_w(char *args)
{
    WP     *wp    = NULL;
    bool   status = true;
    word_t res    = 0;
    if(args == NULL)
    {
        printf(ANSI_BG_RED "=========================================\n");
        printf("Please input a expression.\n");
        printf("=========================================" ANSI_NONE "\n");
        return 0;
    }
    wp = new_wp(&status);
    if(!status)
    {
        printf(ANSI_BG_RED "=========================================\n");
        printf("There isn't a free watchpoint.\n");
        printf("=========================================" ANSI_NONE "\n");
        return 0;
    }
    res = expr(args, &status);
    if(!status)
    {
        printf(ANSI_BG_RED "=========================================\n");
        printf("The expression is wrong.\n");
        printf("=========================================" ANSI_NONE "\n");
        return 0;
    }
    else
    {
        wp->OldVal = res;
        strcpy(wp->expr, args);
        printf("Watchpoints set successfully.\n");
    }
    return 0;
}

static int cmd_d(char *args)
{
    WP *tmp = NULL;
    char *arg    = strtok(NULL, " ");
    char *argEnd = arg + strlen(arg);
    uint8_t num = strtol(arg, &argEnd, 10);
    tmp = num2wp(num);
    if(tmp != NULL)
    {
        free_wp(tmp);
        printf("Delete successfully.\n");
    }
    else
    {
        printf(ANSI_BG_RED "=========================================\n");
        printf("Delete failed.\n");
        printf("=========================================" ANSI_NONE "\n");
    }
    return 0;
}


void sdb_mainloop() 
{
    if (BATCH_MODE) 
    {
        cmd_c(NULL);
        return;
    }

    for (char *str; (str = rl_gets()) != NULL; ) 
    {
        char *str_end = str + strlen(str);

        /* extract the first token as the command */
        char *cmd = strtok(str, " ");
        if (cmd == NULL) 
        { 
            continue; 
        }

        /* treat the remaining string as the arguments,
         * which may need further parsing
         */
        char *args = cmd + strlen(cmd) + 1;
        if (args >= str_end) 
        {
          args = NULL;
        }

        int i;
        for (i = 0; i < NR_CMD; i ++) 
        {
            if (strcmp(cmd, cmd_table[i].name) == 0) 
            {
                if (cmd_table[i].handler(args) < 0) 
                {
                    return; 
                }
                break;
            }
        }

        if (i == NR_CMD) 
        { 
            printf(ANSI_BG_RED "=========================================\n");
            printf("Unknown command '%s'\n", cmd); 
            printf("=========================================" ANSI_NONE "\n");
        }
    }
}

void init_sdb() 
{
    /* Compile the regular expressions. */
    init_regex();
    
    /* Initialize the watchpoint pool. */
    init_wp_pool();
}
