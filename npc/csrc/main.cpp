#include <memory>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <nvboard.h> 
#include <Vtop.h>

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <assert.h>

VerilatedContext* contextp = NULL;
VerilatedVcdC*    tfp      = NULL;
static Vtop* top;

void nvboard_bind_all_pins(Vtop* top);

static void step_and_dump_wave()
{
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
};

static void sim_init(int argc, char** argv)
{
    contextp = new VerilatedContext;
    tfp      = new VerilatedVcdC;
    top      = new Vtop;
	contextp->debug(0);
	contextp->traceEverOn(true);
	contextp->commandArgs(argc, argv);
	top->trace(tfp, 0);
	tfp->open("logs/dump.vcd");
};

static void sim_exit()
{
	step_and_dump_wave();
	tfp->close();
};

static void single_cycle()
{
    top->clk = 0; top->eval();	
    step_and_dump_wave();
    top->clk = 1; top->eval();
    step_and_dump_wave();
}

static void reset(int n)
{
    top->rst = 1;
    while(n-- > 0)
    {
        single_cycle();
    }
    top->rst = 0;
}

static uint8_t *mem = NULL;

static char *img_file = NULL;
static bool NVBOARD_MODE = false;
static int parse_args(int argc, char *argv[])
{
    const struct option table[] = 
    {
        {"nvboard"  , no_argument   , NULL, 'n'},
        {"help   "  , no_argument   , NULL, 'h'},
        {0          , 0             , NULL,  0 },
    };
    int o;
    while((o = getopt_long(argc, argv, "-nh", table, NULL)) != -1)
    {
        switch(o)
        {
            case 'n': NVBOARD_MODE = true; break;
            case  1 : img_file = optarg; return 0;
            default :
                      printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
                      printf("-n, --nvboard        run with nvboard_mode\n");
        }
    }
    return 0;
}

static long load_img()
{
    if(img_file == NULL)
    {
        printf("\n");
        printf("====== No image is given. ======\n");
        printf("\n");
        return 0;
    }

    FILE *fp = fopen(img_file, "rb");
    assert(fp != NULL);

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);

    printf("\n");
    printf("====== The image is %s, size = %ld. ======\n", img_file, size);
    printf("\n");
    mem = (uint8_t *)malloc(size);

    fseek(fp, 0, SEEK_SET);
    int ret = fread(mem, size, 1, fp);
    assert(ret == 1);
    fclose(fp);
    return size;
}

int main(int argc, char *argv[]) 
{
	if(argc)
	{
        parse_args(argc, argv);
	}
    long img_size = load_img();

	sim_init(argc,argv);
    reset(10);
    if(!NVBOARD_MODE)
    {

        for(int i = 0; i < 5; i++)
        {
            top->inst_i = mem[top->addr-0x80000000];
            single_cycle();
        }

        sim_exit();
    }
    else
    {
	    nvboard_bind_all_pins(top);	
	    nvboard_init();	
	    while(1)
	    {
	    	nvboard_update();
            single_cycle();
	    	//step_and_dump_wave();
	    	if(0)	
	    	{
	    		sim_exit();
	    	}
	    }
    }
	return 0;
}
