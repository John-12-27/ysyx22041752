#Check for sanity to avoid later confusion
ifneq ($(words $(CURDIR)),1)
	$(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

VERILATOR_FLAGS += -cc --exe
VERILATOR_FLAGS += -Os -x-assign 0
VERILATOR_FLAGS += -Wall
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += --assert
VERILATOR_FLAGS += --coverage
VERILATOR_FLAGS += --build
VERILATOR_INPUT = ./vsrc/top.v ./vsrc/switch.v ./csrc/*.cpp 

sim:
	@echo "---- VERILATE & BUILD ----"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	@echo
	@echo "---- RUN ----"
	@rm -rf logs
	@mkdir -p logs
	obj_dir/Vtop +trace
#	@echo
#	@echo "---- COVERAGE ----"
#	@rm -rf logs/annotated
#	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat
	@echo
	@echo "---- COMMIT ----"	
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!

include ../Makefile

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs
