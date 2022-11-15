######################################################################
#
# DESCRIPTION: Verilator Example: Small Makefile
#
# This calls the object directory makefile.  That allows the objects to
# be placed in the "current directory" which simplifies the Makefile.
#
# This file ONLY is placed under the Creative Commons Public Domain, for
# any use, without warranty, 2020 by Wilson Snyder.
# SPDX-License-Identifier: CC0-1.0
#
######################################################################
# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################
# Set up variables

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package install, and verilator is in your path. Otherwise find the
# binary relative to $VERILATOR_ROOT (such as when inside the git sources).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CXXSRCS = $(shell find $(abspath ./csrc) -name "*.cc" -or -name "*.cpp")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c")

TOPNAME   = top
BUILD_DIR = ./build
OBJ_DIR   = $(BUILD_DIR)/obj_dir
VERILATE  = $(BUILD_DIR)/$(TOPNAME)
# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
VERILATOR_FLAGS += -O3 --x-assign fast --x-initial fast 
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert
# Generate coverage analysis
VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt

# Input files for Verilator
#VERILATOR_INPUT = -f input.vc $(VSRCS) $(CXXSRCS)

######################################################################
default: $(BIN)

$(VERILATE): $(VSRCS) $(CXXSRCS)
	@echo
	@rm -rf $(OBJ_DIR)
	@mkdir -p $(BUILD_DIR)
	@echo "-- VERILATE ----------------"
	$(VERILATOR) $(VERILATOR_FLAGS) --top-module $(TOPNAME) --Mdir $(OBJ_DIR) $^

#$(OBJ_DIR)/%.o: %.c 

build: $(VERILATE)
	@echo
	@echo "-- BUILD -------------------"
	$(MAKE) -j -C $(OBJ_DIR) -f ../../Makefile_obj


run: build
# To compile, we can either
# 1. Pass --build to Verilator by editing VERILATOR_FLAGS above.
# 2. Or, run the make rules Verilator does:
#	$(MAKE) -j -C obj_dir -f Vtop.mk
# 3. Or, call a submakefile where we can override the rules ourselves:

	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	obj_dir/Vtop +trace

	@echo
	@echo "-- COVERAGE ----------------"
	@rm -rf logs/annotated
	$(VERILATOR_COVERAGE) --annotate logs/annotated logs/coverage.dat

	@echo
	@echo "-- DONE --------------------"
	@echo "To see waveforms, open vlt_dump.vcd in a waveform viewer"
	@echo


######################################################################
# Other targets

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf $(BUILD_DIR) logs *.log *.dmp *.vpd coverage.dat core
