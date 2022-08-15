#include <stdio.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vtop.h"

VerilatedContext* contextp = NULL;
VerilatedVcdC*		tfp			 = NULL;

static Vtop* top;

static void step_and_dump_wave()
{
	top->eval();
	contextp->timeInc(1);
	tfp->dump(contextp->time());
};

static void sim_init()
{
	contextp = new VerilatedContext;
	tfp      = new VerilatedVcdC;
	top      = new Vtop;
	contextp->traceEverOn(true);
	top->trace(tfp, 0);
	tfp->open("logs/dump.vcd");
};

static void sim_exit()
{
	step_and_dump_wave();
	tfp->close();
};

int main(int argc, char** argv, char** env) 
{
	if (false && argc && argv && env)
	{

	}
	int i;
	sim_init();
	for(i=100;i>0;i--)
	{
		top->s1 = rand() & 1;
		top->s2 = rand() & 1;
		step_and_dump_wave();
	}
	sim_exit();
	return 0;
}
