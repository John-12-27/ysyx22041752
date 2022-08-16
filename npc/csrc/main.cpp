#include <memory>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include <nvboard.h> 
#include <Vtop.h>
#define SIM

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

/*static void single_cycle()
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
}*/

int main(int argc, char** argv, char** env) 
{
	if (false && argc && argv && env)
	{

	}
	sim_init(argc,argv);
	//reset(10);
	#ifdef SIM
			top->s0 = 0b00; top->s2 = 0b00; step_and_dump_wave();
											top->s2 = 0b01; step_and_dump_wave();
											top->s2 = 0b10; step_and_dump_wave();
                      top->s2 = 0b11; step_and_dump_wave();
			top->s0 = 0b01; top->s4 = 0b00; step_and_dump_wave();
											top->s4 = 0b01; step_and_dump_wave();
											top->s4 = 0b10; step_and_dump_wave();
                      top->s4 = 0b11; step_and_dump_wave();
			top->s0 = 0b10; top->s6 = 0b00; step_and_dump_wave();
											top->s6 = 0b01; step_and_dump_wave();
											top->s6 = 0b10; step_and_dump_wave();
                      top->s6 = 0b11; step_and_dump_wave();
			top->s0 = 0b11; top->s8 = 0b00; step_and_dump_wave();
											top->s8 = 0b01; step_and_dump_wave();
											top->s8 = 0b10; step_and_dump_wave();
                      top->s8 = 0b11; step_and_dump_wave();
			sim_exit();
	#else
		nvboard_bind_all_pins(top);	
		nvboard_init();	
		while(1)
		{
			nvboard_update();
			//single_cycle();
			step_and_dump_wave();
			if(0)	
			{
				sim_exit();
			}
		}
	#endif
	return 0;
}
