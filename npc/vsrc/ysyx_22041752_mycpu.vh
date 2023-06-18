    
`ifndef _MY_CPU_H_
`define _MY_CPU_H_

    `define ysyx_22041752_SRAM_ADDR_WD      32
    `define ysyx_22041752_SRAM_DATA_WD      64
    `define ysyx_22041752_SRAM_WEN_WD        8
    `define ysyx_22041752_RF_ADDR_WD         5
    `define ysyx_22041752_RF_DATA_WD        64
    `define ysyx_22041752_RF_WEN_WD          8
    `define ysyx_22041752_RF_NUM            32

    `define ysyx_22041752_INST_WD           32
    `define ysyx_22041752_PC_WD             32
    `define ysyx_22041752_RESET_PC_VALUE    `ysyx_22041752_PC_WD'h7fff_fffc

    `define ysyx_22041752_BR_BUS_WD         33
    `define ysyx_22041752_FS_TO_DS_BUS_WD   118
    `define ysyx_22041752_DS_TO_ES_BUS_WD   317
    `define ysyx_22041752_ES_TO_MS_BUS_WD   107
    `define ysyx_22041752_MS_TO_WS_BUS_WD   102
    `define ysyx_22041752_WS_TO_RF_BUS_WD   70
    `define ysyx_22041752_FORWARD_BUS_WD    70
    `define ysyx_22041752_ES_FORWARD_BUS_WD 71

    `define ysyx_22041752_CLINT_BASE_ADDR   32'h0200_0000

    `define ysyx_22041752_CSR_ADDR_MSTATUS  12'h300
    `define ysyx_22041752_CSR_ADDR_MIE      12'h304
    `define ysyx_22041752_CSR_ADDR_MTVEC    12'h305
    `define ysyx_22041752_CSR_ADDR_MEPC     12'h341
    `define ysyx_22041752_CSR_ADDR_MCAUSE   12'h342
    `define ysyx_22041752_CSR_ADDR_MIP      12'h344


    `define ysyx_22041752_ICACHE_SIZE         (4*1024)
    `define ysyx_22041752_ICACHE_EN_WD        (`ysyx_22041752_ICACHE_SIZE / 1024)
    `define ysyx_22041752_ICACHE_WAY          2
    `define ysyx_22041752_ICACHE_SIZE_PERWAY  (`ysyx_22041752_ICACHE_SIZE / `ysyx_22041752_ICACHE_WAY)
    `define ysyx_22041752_ICACHE_SIZE_PERLINE (128 / 8)
    `define ysyx_22041752_ICACHE_LINE_PERWAY  (`ysyx_22041752_ICACHE_SIZE_PERWAY / `ysyx_22041752_ICACHE_SIZE_PERLINE)
    `define ysyx_22041752_ICACHE_INDEX_WD     $clog2(`ysyx_22041752_ICACHE_LINE_PERWAY)
    `define ysyx_22041752_ICACHE_OFFSET_WD    $clog2(`ysyx_22041752_ICACHE_SIZE_PERLINE)
    `define ysyx_22041752_ICACHE_TAG_WD       `ysyx_22041752_PC_WD - `ysyx_22041752_ICACHE_OFFSET_WD - `ysyx_22041752_ICACHE_INDEX_WD
    `define ysyx_22041752_RS_TO_CS_BUS_WD     36

    `define DPI_C
`endif

