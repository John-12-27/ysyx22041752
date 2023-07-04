    
`ifndef _MY_CPU_H_
`define _MY_CPU_H_

    `define ysyx_22041752_DATA_ADDR_WD      32
    `define ysyx_22041752_DATA_DATA_WD      64
    `define ysyx_22041752_DATA_WEN_WD        8
    `define ysyx_22041752_RF_ADDR_WD         5
    `define ysyx_22041752_RF_DATA_WD        64
    `define ysyx_22041752_RF_WEN_WD          8
    `define ysyx_22041752_RF_NUM            32

    `define ysyx_22041752_INST_WD           32
    `define ysyx_22041752_PC_WD             32
    `define ysyx_22041752_RESET_PC_VALUE    `ysyx_22041752_PC_WD'h7fff_fffc


    `define ysyx_22041752_BR_BUS_WD         33
    `define ysyx_22041752_PS_TO_FS_BUS_WD   `ysyx_22041752_PC_WD
    `define ysyx_22041752_FS_TO_DS_BUS_WD   118
    `define ysyx_22041752_DS_TO_ES_BUS_WD   318
    `define ysyx_22041752_ES_TO_MS_BUS_WD   111
    `define ysyx_22041752_MS_TO_WS_BUS_WD   102
    `define ysyx_22041752_WS_TO_RF_BUS_WD   70
    `define ysyx_22041752_FORWARD_BUS_WD    71
    `define ysyx_22041752_WS_FORWARD_BUS_WD 70

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
    `define ysyx_22041752_IRS_TO_ICS_BUS_WD   36

    `define ysyx_22041752_DCACHE_SIZE         (4*1024)
    `define ysyx_22041752_DCACHE_EN_WD        (`ysyx_22041752_DCACHE_SIZE / 1024)
    `define ysyx_22041752_DCACHE_WAY          4
    `define ysyx_22041752_DCACHE_SIZE_PERWAY  (`ysyx_22041752_DCACHE_SIZE / `ysyx_22041752_DCACHE_WAY)
    `define ysyx_22041752_DCACHE_SIZE_PERLINE (128 / 8)
    `define ysyx_22041752_DCACHE_LINE_PERWAY  (`ysyx_22041752_DCACHE_SIZE_PERWAY / `ysyx_22041752_DCACHE_SIZE_PERLINE)
    `define ysyx_22041752_DCACHE_INDEX_WD     $clog2(`ysyx_22041752_DCACHE_LINE_PERWAY)
    `define ysyx_22041752_DCACHE_OFFSET_WD    $clog2(`ysyx_22041752_DCACHE_SIZE_PERLINE)
    `define ysyx_22041752_DCACHE_TAG_WD       `ysyx_22041752_DATA_ADDR_WD - `ysyx_22041752_DCACHE_OFFSET_WD - `ysyx_22041752_DCACHE_INDEX_WD
    `define ysyx_22041752_DRS_TO_DCS_BUS_WD   110

    `define ysyx_22041752_MEM_BASEADDR        32'h80000000
    `define ysyx_22041752_MEM_SIZE            32'h08000000
    `define ysyx_22041752_MTIME_OFFSET        32'h0000_bff8
    `define ysyx_22041752_MTIMECMP_OFFSET     32'h0000_4000

    `define DPI_C
`endif

