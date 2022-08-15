sim:
	@echo "---- VERILATE & BUILD ----"
	verilator --cc --trace --exe --build -j ./vsrc/top.v ./vsrc/switch.v  ./csrc/*.cpp
	@echo "---- RUN ----"
	obj_dir/Vtop
	@echo "---- DONE ----"
	
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "-------------- commited -----------------."

include ../Makefile

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir *.vcd
