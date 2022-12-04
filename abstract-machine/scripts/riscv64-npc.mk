include $(AM_HOME)/scripts/isa/riscv64.mk

AM_SRCS := riscv/npc/start.S \
           riscv/npc/trm.c \
           riscv/npc/ioe.c \
           riscv/npc/timer.c \
           riscv/npc/input.c \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           platform/dummy/vme.c \
           platform/dummy/mpe.c

CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

nvboard: image
	$(MAKE) -C $(NPC_HOME) nvboard IMG_BIN=$(IMAGE).bin

NEMU_SO = $(NEMU_HOME)/build/riscv64-nemu-interpreter-so
#NEMU_SO = $(NEMU_HOME)/tools/spike-diff/build/riscv64-spike-so

override SIMFLAGS += -b -l $(shell dirname $(IMAGE).elf)/npc-ilog.txt -m $(shell dirname $(IMAGE).elf)/npc-mlog.txt -f $(shell dirname $(IMAGE).elf)/npc-flog.txt -f $(shell dirname $(IMAGE).elf)/$(NAME)-$(ARCH).elf -d $(NEMU_SO)

run: image
	$(MAKE) -C $(NPC_HOME) sim OPTIONS="$(SIMFLAGS)" IMG_BIN=$(IMAGE).bin

batch: image
	$(MAKE) -C $(NPC_HOME) batch OPTIONS="$(SIMFLAGS)" IMG_BIN=$(IMAGE).bin

gdb: image
	$(MAKE) -C $(NPC_HOME) gdb OPTIONS="$(SIMFLAGS)" IMG_BIN=$(IMAGE).bin
