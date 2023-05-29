    
`ifndef _MY_CPU_H_
`define _MY_CPU_H_
    `define SRAM_ADDR_WD      64
    `define SRAM_DATA_WD      64
    `define SRAM_WEN_WD        8
    `define RF_ADDR_WD         5
    `define RF_DATA_WD        64
    `define RF_WEN_WD          8
    `define RF_NUM            32

    `define INST_WD           32
    `define PC_WD             64
    `define RESET_PC_VALUE    `PC_WD'h7fff_fffc

    `define BR_BUS_WD         65
    `define FS_TO_DS_BUS_WD   96
    `define DS_TO_ES_BUS_WD   296
    `define ES_TO_MS_BUS_WD   139
    `define MS_TO_WS_BUS_WD   134
    `define WS_TO_RF_BUS_WD   70
    `define FORWARD_BUS_WD    70
    `define ES_FORWARD_BUS_WD 71

    `define CLINT_BASE_ADDR   64'h0200_0000

    `define CSR_ADDR_MSTATUS  12'h300
    `define CSR_ADDR_MIE      12'h304
    `define CSR_ADDR_MTVEC    12'h305
    `define CSR_ADDR_MEPC     12'h341
    `define CSR_ADDR_MCAUSE   12'h342
    `define CSR_ADDR_MIP      12'h344

    `define DPI_C
`endif

