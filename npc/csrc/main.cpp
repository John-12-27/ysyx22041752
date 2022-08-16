#include <memory>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <nvboard.h> 
#include <Vtop.h>
#define DEBUG_WITH_NVBOARD 0

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
  tfp			 = new VerilatedVcdC;
  top 		 = new Vtop;
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
		step_and_dump_wave();
	}
	top->rst = 0;
}

int main(int argc, char** argv, char** env) 
{
	if (false && argc && argv && env)
	{

	}
	sim_init(argc,argv);
	nvboard_bind_all_pins(top);	
	nvboard_init();	
	reset(10);
	int i = 100;
	while(1)
	{
		nvboard_update();
		single_cycle();
#if(!DEBUG_WITH_NVBOARD)
		if(i>0)
		{
			top->s1 = rand() & 1;
			top->s2 = rand() & 1;
			step_and_dump_wave();
			i--;
		}
		else
		{
			sim_exit();
		}
#else
		step_and_dump_wave();
#endif
	}
#if(DEBUG_WITH_NVBOARD)
	sim_exit();
#endif
	return 0;
}
