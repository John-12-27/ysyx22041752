#include "memory.h"
#include "monitor.h"
#include "sdb.h"
#include "exec.h"
#include "npc_state.h"
#include "diff_dut.h"
#include "device.h"

//void nvboard_bind_all_pins(Vtop* top);

int main(int argc, char *argv[]) 
{
    init_monitor(argc, argv);
	cpu.pc = 0x80000000;

    device_init();
#ifdef CONFIG_DIFFTEST
    init_difftest(diff_so_file, load_img(img_file), difftest_port);
#else
    load_img(img_file);
#endif
	sim_init(argc,argv);
    reset(10);
    if(!NVBOARD_MODE)
    {
        sdb_mainloop();
    }
    else
    {

		//nvboard_bind_all_pins(top);	
		//nvboard_init();	
		//while(1)
		//{
			//nvboard_update();
            //single_cycle();
			////step_and_dump_wave();
			//if(0)	
			//{
				//sim_exit();
			//}
		//}

    }
    sim_exit();
	return is_exit_status_bad();
}
