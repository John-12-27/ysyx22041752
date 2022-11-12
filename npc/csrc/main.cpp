#include <memory>
#include "memory.h"
#include "monitor.h"
#include "sdb.h"
#include "exec.h"
#include "npc_state.h"

//void nvboard_bind_all_pins(Vtop* top);

int main(int argc, char *argv[]) 
{
    init_monitor(argc, argv);
    load_img();

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
	return is_exit_status_bad();
}
