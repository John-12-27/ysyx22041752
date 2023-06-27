// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_mmu.v
// Author        : Cw
// Created On    : 2023-06-23 19:24
// Last Modified : 2023-06-27 22:30
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_mmu (
    //from es
    input                                      data_en_i            ,
    input  [`ysyx_22041752_DATA_WEN_WD -1:0]   data_wen_i           ,
    input  [`ysyx_22041752_DATA_ADDR_WD-1:0]   data_addr_i          ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   data_wdata_i         ,
    //to es
    output                                     write_hit_o          ,
    //to ms
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   data_rdata_o         ,
    output                                     dcache_miss_o        ,

    output                                     dcache_en_o          ,
    output                                     dcache_wen_o         , 
    input                                      dcache_miss_i        , 
    input                                      dcache_write_hit_i   ,

    output                                     clint_en_o           ,
    output                                     clint_wen_o          ,

    output                                     axi_d_en_o           ,
    output                                     axi_d_ready_o        ,
    output                                     axi_d_wen_o          ,   
    input                                      axi_valid_i          ,

    output [`ysyx_22041752_DATA_ADDR_WD-1:0]   data_addr_o          ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   data_wdata_o         ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   data_rdata_i          
);
    
wire access_clint= ((data_addr_i == `ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIME_OFFSET) || (data_addr_i == `ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIMECMP_OFFSET));
wire access_mem  = (data_addr_i >= `ysyx_22041752_MEM_BASEADDR) && (data_addr_i <= (`ysyx_22041752_MEM_BASEADDR+`ysyx_22041752_MEM_SIZE));
wire access_io   = !(access_clint || access_mem);

endmodule

