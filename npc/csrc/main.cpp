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

//static void reset(int n)
//{
    //top->rst = 1;
    //while(n-- > 0)
    //{
        //single_cycle();
    //}
    //top->rst = 0;
//}

int main(int argc, char** argv, char** env) 
{
	if (false && argc && argv && env)
	{

	}
	sim_init(argc,argv);
    //reset(10);
    top->ps2_clk = 0b1;
    top->ps2_data= 0b1;
	#ifdef SIM
      
        int j=0,t=-1;
        for (int i = 0; i < 1000; i++) 
        {

            switch(t)
            {

                case 0: top->ps2_data = 0b0;break;
                case 1: top->ps2_data = 0b0;break;
                case 2: top->ps2_data = 0b0;break;
                case 3: top->ps2_data = 0b0;break;
                case 4: top->ps2_data = 0b0;break;

                case 5: top->ps2_data = 0b0;break;
                case 6: top->ps2_data = 0b0;break;
                case 7: top->ps2_data = 0b0;break;
                case 8: top->ps2_data = 0b0;break;
                case 9: top->ps2_data = 0b0;break;

                case 10: top->ps2_data = 0b1;break;
                case 11: top->ps2_data = 0b1;break;
                case 12: top->ps2_data = 0b1;break;
                case 13: top->ps2_data = 0b1;break;
                case 14: top->ps2_data = 0b1;break;

                case 15: top->ps2_data = 0b0;break;
                case 16: top->ps2_data = 0b0;break;
                case 17: top->ps2_data = 0b0;break;
                case 18: top->ps2_data = 0b0;break;
                case 19: top->ps2_data = 0b0;break;

                case 20: top->ps2_data = 0b0;break;
                case 21: top->ps2_data = 0b0;break;
                case 22: top->ps2_data = 0b0;break;
                case 23: top->ps2_data = 0b0;break;
                case 24: top->ps2_data = 0b0;break;

                case 25: top->ps2_data = 0b1;break;
                case 26: top->ps2_data = 0b1;break;
                case 27: top->ps2_data = 0b1;break;
                case 28: top->ps2_data = 0b1;break;
                case 29: top->ps2_data = 0b1;break;

                case 30: top->ps2_data = 0b0;break;
                case 31: top->ps2_data = 0b0;break;
                case 32: top->ps2_data = 0b0;break;
                case 33: top->ps2_data = 0b0;break;
                case 34: top->ps2_data = 0b0;break;

                case 35: top->ps2_data = 0b0;break;
                case 36: top->ps2_data = 0b0;break;
                case 37: top->ps2_data = 0b0;break;
                case 38: top->ps2_data = 0b0;break;
                case 39: top->ps2_data = 0b0;break;

                case 40: top->ps2_data = 0b0;break;
                case 41: top->ps2_data = 0b0;break;
                case 42: top->ps2_data = 0b0;break;
                case 43: top->ps2_data = 0b0;break;
                case 44: top->ps2_data = 0b0;break;

                case 45: top->ps2_data = 0b1;break;
                case 46: top->ps2_data = 0b1;break;
                case 47: top->ps2_data = 0b1;break;
                case 48: top->ps2_data = 0b1;break;
                case 49: top->ps2_data = 0b1;break;

                case 50: top->ps2_data = 0b1;break;
                case 51: top->ps2_data = 0b1;break;
                case 52: top->ps2_data = 0b1;break;
                case 53: top->ps2_data = 0b1;break;
                case 54: top->ps2_data = 0b1;break;
            }
            
            if(j==10)
            {
                top->ps2_clk = !top->ps2_clk;
                j=0;
                if(!top->ps2_clk)    t++;
            }
            j++;
            
            single_cycle();
        }
        sim_exit();
	#else
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
	#endif
	return 0;
}
