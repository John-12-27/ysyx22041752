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

//static void single_cycle()
//{
	//top->clk = 0; top->eval();	
	//step_and_dump_wave();
	//top->clk = 1; top->eval();
	//step_and_dump_wave();
//}

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
	#ifdef SIM
        
        top->left = 0b0;
        top->arithmetic = 0b0;
        for (int i = 0; i <= 0xff; ++i) 
        {
            top->din = i;
            //single_cycle();
            for (int j = 0; j < 8; ++j) 
            {
                top->shamt = j;
                step_and_dump_wave();
                if (top->dout != i>>j) 
                {
                    printf("logical shift right err!!!\n");
                    printf("din = %x, shamt = %d, dout = %x\n",i,j,i>>j);
                    printf("din = %x, shamt = %d, dout = %x\n",top->din,top->shamt,top->dout);
                    goto arithmetical_right;
                }
            }
        }
arithmetical_right:

        top->left = 0b0;
        top->arithmetic = 0b1;
        for (int i = 0; i <= 0xff; ++i) 
        {
            top->din = i;
            //single_cycle();
            for (int j = 0; j < 8; ++j) 
            {
                top->shamt = j;
                step_and_dump_wave();

                if(i<128)
                {
                    if (top->dout != i>>j)
                    {
                        printf("arithmetical shift right err!!!\n");
                        printf("din = %x, shamt = %d, dout = %x\n",i,j,i>>j);
                        printf("din = %x, shamt = %d, dout = %x\n",top->din,top->shamt,top->dout);
                        goto logical_left;
                    }
                }
                else
                {
                    if (top->dout != ((i>>j)|((0xff<<(8-j))&0xff)))
                    {
                        printf("arithmetical shift right err!!!\n");
                        printf("din = %x, shamt = %d, dout = %x\n",i,j,(i>>j)|((0xff<<(8-j))&0xff));
                        printf("din = %x, shamt = %d, dout = %x\n",top->din,top->shamt,top->dout);
                        goto logical_left;
                    }
                }
                
            }
        }
logical_left:

        top->left = 0b1;
        top->arithmetic = 0b0;
        for (int i = 0; i <= 0xff; ++i) 
        {
            top->din = i;
            //single_cycle();
            for (int j = 0; j < 8; ++j) 
            {
                top->shamt = j;
                step_and_dump_wave();
                if (top->dout != ((i<<j)&0xff))
                {
                    printf("logical shift left err!!!\n");
                    printf("din = %x, shamt = %d, dout = %x\n",i,j,((i<<j)&0xff));
                    printf("din = %x, shamt = %d, dout = %x\n",top->din,top->shamt,top->dout);
                    goto arithmetical_left;
                }
            }
        }
arithmetical_left:

        top->left = 0b1;
        top->arithmetic = 0b1;
        for (int i = 0; i <= 0xff; ++i) 
        {
            top->din = i;
            //single_cycle();
            for (int j = 0; j < 8; ++j) 
            {
                top->shamt = j;
                step_and_dump_wave();
                if (top->dout != ((i<<j)&0xff)) 
                {
                    printf("arithmetical shift left err!!!\n");
                    printf("din = %x, shamt = %d, dout = %x\n",i,j,((i<<j)&0xff));
                    printf("din = %x, shamt = %d, dout = %x\n",top->din,top->shamt,top->dout);
                    goto end;
                }
            }
        }
end:

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
