#include <memory>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <nvboard.h> 
#include <Vtop.h>

#include "memory.h"
#include "monitor.h"
#include "sdb.h"

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

int main(int argc, char *argv[]) 
{
    init_monitor(argc, argv);
    long img_size = load_img();

	sim_init(argc,argv);
    reset(10);
    if(!NVBOARD_MODE)
    {
        sdb_mainloop();

        //for(int i = 0; i < 1; i++)
        //{
            //top->inst_i = read_mem(top->addr, 4);
            //printf("%x\n", top->inst_i);
            //single_cycle();
        //}

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
