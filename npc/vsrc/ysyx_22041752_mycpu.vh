    
`ifndef _MY_CPU_H_
`define _MY_CPU_H_
    `define ysyx_22041752_SRAM_ADDR_WD      64
    `define ysyx_22041752_SRAM_DATA_WD      64
    `define ysyx_22041752_SRAM_WEN_WD        8
    `define ysyx_22041752_RF_ADDR_WD         5
    `define ysyx_22041752_RF_DATA_WD        64
    `define ysyx_22041752_RF_WEN_WD          8
    `define ysyx_22041752_RF_NUM            32

    `define ysyx_22041752_INST_WD           32
    `define ysyx_22041752_PC_WD             64
    `define ysyx_22041752_RESET_PC_VALUE    `ysyx_22041752_PC_WD'h7fff_fffc

    `define ysyx_22041752_BR_BUS_WD         65
    `define ysyx_22041752_FS_TO_DS_BUS_WD   96
    `define ysyx_22041752_DS_TO_ES_BUS_WD   296
    `define ysyx_22041752_ES_TO_MS_BUS_WD   139
    `define ysyx_22041752_MS_TO_WS_BUS_WD   134
    `define ysyx_22041752_WS_TO_RF_BUS_WD   70
    `define ysyx_22041752_FORWARD_BUS_WD    70
    `define ysyx_22041752_ES_FORWARD_BUS_WD 71

    `define ysyx_22041752_CLINT_BASE_ADDR   64'h0200_0000

    `define ysyx_22041752_CSR_ADDR_MSTATUS  12'h300
    `define ysyx_22041752_CSR_ADDR_MIE      12'h304
    `define ysyx_22041752_CSR_ADDR_MTVEC    12'h305
    `define ysyx_22041752_CSR_ADDR_MEPC     12'h341
    `define ysyx_22041752_CSR_ADDR_MCAUSE   12'h342
    `define ysyx_22041752_CSR_ADDR_MIP      12'h344

`endif

