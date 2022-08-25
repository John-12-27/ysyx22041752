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
        top->op = 0b111;
        for (int j = 0; j < 500; ++j) 
        {
            int a = rand()&0xffffffff;
            int b = rand()&0xffffffff;
            top->x = a;
            top->y = b;
            step_and_dump_wave();
            if(top->res != (a+b))
            {
                printf("add err\n");
                printf("x=%d, y=%d, res=%d\n",a,b,a+b);
                printf("top->x=%d, top->y=%d, top->res=%d\n",top->x,top->y,top->res);
                break;
            }
        }
            
        top->op = 0b110;
        for (int j = 0; j < 500; ++j) 
        {
            int a = rand()&0xffffffff;
            int b = rand()&0xffffffff;
            top->x = a;
            top->y = b;
            step_and_dump_wave();
            if(top->res != (a-b))
            {
                printf("sub err\n");
                printf("x=%d, y=%d, res=%d\n",a,b,a-b);
                printf("top->x=%d, top->y=%d, top->res=%d\n",top->x,top->y,top->res);
                break;
            }
        }
        
        top->op = 0b101;
        for (int j = 0; j < 500; ++j) 
        {
            int a = rand()&0xffffffff;
            int b = rand()&0xffffffff;
            top->x = a;
            top->y = b;
            step_and_dump_wave();
            if(top->res != (~a))
            {
                printf("not err\n");
                printf("x=%x, y=%x, res=%x\n",a,b,~a);
                printf("top->x=%x, top->y=%x, top->res=%x\n",top->x,top->y,top->res);
                break;
            }
        }
        top->op = 0b100;
        for (int j = 0; j < 500; ++j) 
        {
            int a = rand()&0xffffffff;
            int b = rand()&0xffffffff;
            top->x = a;
            top->y = b;
            step_and_dump_wave();
            if(top->res != (a&b))
            {
                printf("and err\n");
                printf("x=%x, y=%x, res=%x\n",a,b,a&b);
                printf("top->x=%x, top->y=%x, top->res=%x\n",top->x,top->y,top->res);
                break;
            }
        }
        top->op = 0b011;
        for (int j = 0; j < 500; ++j) 
        {
            int a = rand()&0xffffffff;
            int b = rand()&0xffffffff;
            top->x = a;
            top->y = b;
            step_and_dump_wave();
            if(top->res != (a|b))
            {
                printf("or err\n");
                printf("x=%x, y=%x, res=%x\n",a,b,a|b);
                printf("top->x=%x, top->y=%x, top->res=%x\n",top->x,top->y,top->res);
                break;
            }
        }
        top->op = 0b010;
        for (int j = 0; j < 500; ++j) 
        {
            int a = rand()&0xffffffff;
            int b = rand()&0xffffffff;
            top->x = a;
            top->y = b;
            step_and_dump_wave();
            if(top->res != (a^b))
            {
                printf("xor err\n");
                printf("x=%x, y=%x, res=%x\n",a,b,a^b);
                printf("top->x=%x, top->y=%x, top->res=%x\n",top->x,top->y,top->res);
                break;
            }
        }
        top->op = 0b001;
        for (int j = 0; j < 500; ++j) 
        {
            int a = rand()&0xffffffff;
            int b = rand()&0xffffffff;
            top->x = a;
            top->y = b;
            step_and_dump_wave();
            if(top->res != (a<b))
            {
                printf("less err\n");
                printf("x=%d, y=%d, res=%d\n",a,b,a<b);
                printf("top->x=%d, top->y=%d, top->res=%d\n",top->x,top->y,top->res);
                break;
            }
        }
        top->op = 0b000;
        for (int j = 0; j < 500; ++j) 
        {
            int a = rand()&0xffffffff;
            int b = rand()&0xffffffff;
            top->x = a;
            top->y = b;
            step_and_dump_wave();
            if(top->res != (a==b))
            {
                printf("equ err\n");
                printf("x=%d, y=%d, res=%d\n",a,b,a==b);
                printf("top->x=%d, top->y=%d, top->res=%d\n",top->x,top->y,top->res);
                break;
            }
        }
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
