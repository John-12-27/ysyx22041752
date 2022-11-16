#include <getopt.h>
#include <stdio.h>
#include "monitor.h"
#include "sdb.h"
#include "tracer.h"

char *img_file = NULL;
static char *ilog_file= NULL;
static char *flog_file= NULL;
static char *elfInput_file = NULL;
static char *mlog_file = NULL;

bool inputL = false;
bool inputM = false;
bool inputF = false;
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
        {"nvboard"  , no_argument      , NULL, 'n'},
        {"help   "  , no_argument      , NULL, 'h'},
        {0          , 0                , NULL,  0 },
    };
    int o;
    while((o = getopt_long(argc, argv, "-bnhm:f:l:d:", table, NULL)) != -1)
    {
        switch(o)
        {
            case 'b': BATCH_MODE   = true; break;
            case 'n': NVBOARD_MODE = true; break;
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
            case  1 : img_file = optarg; return 0;
            default :
                      printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
                      printf("-n, --nvboard        run with nvboard_mode\n");
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
