#include <getopt.h>
#include <stdio.h>
#include "monitor.h"
#include "sdb.h"
#include "tracer.h"
#include "memory.h"

       char *img_file      = NULL;
static char *ilog_file     = NULL;
static char *flog_file     = NULL;
static char *elfInput_file = NULL;
static char *mlog_file     = NULL;
static char *diff_so_file  = NULL;
static int   difftest_port = 1234;

bool inputL       = false;
bool inputD       = false;
bool inputM       = false;
bool inputF       = false;
bool NVBOARD_MODE = false;
bool BATCH_MODE   = false;
static int parse_args(int argc, char *argv[])
{
    const struct option table[] = 
    {
        {"batch  "  , no_argument      , NULL, 'b'},
        {"mtrace "  , required_argument, NULL, 'm'},
        {"ftrace "  , required_argument, NULL, 'f'},
        {"log    "  , required_argument, NULL, 'l'},
        {"diff   "  , required_argument, NULL, 'd'},
        {"port   "  , required_argument, NULL, 'p'},
        {"nvboard"  , no_argument      , NULL, 'n'},
        {"help   "  , no_argument      , NULL, 'h'},
        {0          , 0                , NULL,  0 },
    };
    int o;
    while((o = getopt_long(argc, argv, "-bnhm:f:l:d:", table, NULL)) != -1)
    {
        switch(o)
        {
            case 'b': BATCH_MODE   = true;   break;
            case 'n': NVBOARD_MODE = true;   break;
            case 'p': sscanf(optarg, "%d", &difftest_port); break;
            case 'l': inputL = true; ilog_file = optarg; break;
            case 'f': if(flog_file == NULL)
                      {
                          flog_file = optarg; 
                      }
                      else
                      {
                          elfInput_file = optarg;
                          inputF = true;
                      }break;
            case 'm': inputM = true; mlog_file = optarg; break;
            case 'd': inputD = true; diff_so_file = optarg; break;
            case  1 : img_file = optarg; return 0;
            default :
                printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
                printf("\t-b,--batch              run with batch mode\n");
                printf("\t-n, --nvboard        run with nvboard_mode\n");
                printf("\t-m,--mtrace=FILE        output mtrace to FILE\n");
                printf("\t-f,--ftrace=FILE        input a FILE and enable the tracer of functions\n");
                printf("\t-l,--log=FILE           output log to FILE\n");
                printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
                printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
                printf("\n");
        }
    }
    return 0;
}

void init_disasm(const char *triple);
void init_monitor(int argc, char *argv[])
{
    parse_args(argc, argv);
    init_log(ilog_file);
    init_mlog(mlog_file);
    init_flog(flog_file);
    funcTabInit(elfInput_file);

    init_sdb();
    init_disasm("riscv64");
}
