// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_ICACHE_RDU.v
// Author        : Cw
// Created On    : 2023-06-17 11:07
// Last Modified : 2023-06-24 19:48
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_ICACHE_RDU (
    input                                           inst_en        ,
    input  [`ysyx_22041752_PC_WD-1:0]               inst_addr      ,

    input                                           cmp_allowin    ,
    output                                          rs_to_cs_valid ,
    output [`ysyx_22041752_IRS_TO_ICS_BUS_WD-1:0]   rs_to_cs_bus   ,

    output [`ysyx_22041752_ICACHE_EN_WD     -1:0]   rden           ,
    output [                                 5:0]   raddr
);
    
wire [`ysyx_22041752_ICACHE_INDEX_WD -1:0] index ;

assign index = inst_addr[`ysyx_22041752_ICACHE_INDEX_WD+`ysyx_22041752_ICACHE_OFFSET_WD -1:`ysyx_22041752_ICACHE_OFFSET_WD];
assign rs_to_cs_bus = {inst_addr, ~rden};
assign rs_to_cs_valid = inst_en;

assign rden[0] = !(rs_to_cs_valid && cmp_allowin && !index[`ysyx_22041752_ICACHE_INDEX_WD-1]);
assign rden[2] = !(rs_to_cs_valid && cmp_allowin && !index[`ysyx_22041752_ICACHE_INDEX_WD-1]);
assign rden[1] = !(rs_to_cs_valid && cmp_allowin &&  index[`ysyx_22041752_ICACHE_INDEX_WD-1]);
assign rden[3] = !(rs_to_cs_valid && cmp_allowin &&  index[`ysyx_22041752_ICACHE_INDEX_WD-1]);

assign raddr = index[5:0];

endmodule

