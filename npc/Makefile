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
VERILATOR_FLAGS += -O3 --x-assign fast --x-initial fast --noassert
VERILATOR_FLAGS += -Wall
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += --build
VERILATOR_FLAGS += -MMD

TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=
BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)
# project source
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)
# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image

all: $(BIN)

$(shell mkdir -p $(BUILD_DIR))
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
# constraint file
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
include $(NVBOARD_HOME)/scripts/nvboard.mk

$(BIN): $(VSRCS) $(CSRCS) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	@echo "---- VERILATE & BUILD ----"
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

commit: $(BIN) 
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo
	@echo "---- COMMITED ----"	
include ../Makefile

run: $(BIN)
	@$(BUILD_DIR)/$(TOPNAME) $(IMG_BIN)

clean:
	-rm -rf logs $(BUILD_DIR)
.PHONY: clean all commit
