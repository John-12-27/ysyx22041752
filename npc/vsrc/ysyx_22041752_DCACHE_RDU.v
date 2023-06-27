// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_DCACHE_RDU.v
// Author        : Cw
// Created On    : 2023-06-17 11:07
// Last Modified : 2023-06-27 18:26
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_DCACHE_RDU (
    input                                    data_en    ,
    input  [`ysyx_22041752_DATA_WEN_WD -1:0] data_wen   ,
    input  [`ysyx_22041752_DATA_ADDR_WD-1:0] data_addr  ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0] data_wdata ,

    input                                         cmp_allowin    ,
    output                                        rs_to_cs_valid ,
    output [`ysyx_22041752_DRS_TO_DCS_BUS_WD-1:0] rs_to_cs_bus   ,

    output [`ysyx_22041752_DCACHE_EN_WD     -1:0] rden           ,
    output [                                 5:0] raddr
);
    
wire [`ysyx_22041752_DCACHE_INDEX_WD -1:0] index ;

assign index = data_addr[`ysyx_22041752_DCACHE_INDEX_WD+`ysyx_22041752_DCACHE_OFFSET_WD -1:`ysyx_22041752_DCACHE_OFFSET_WD];

assign rs_to_cs_bus = {data_addr, data_wdata, data_wen,~rden};
assign rs_to_cs_valid = 1'b1;

assign rden[0] = !(data_en && cmp_allowin);
assign rden[2] = !(data_en && cmp_allowin);
assign rden[1] = !(data_en && cmp_allowin);
assign rden[3] = !(data_en && cmp_allowin);

assign raddr = index;

endmodule

