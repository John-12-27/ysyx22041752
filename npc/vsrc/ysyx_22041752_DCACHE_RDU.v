// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_DCACHE_RDU.v
// Author        : Cw
// Created On    : 2023-06-17 11:07
// Last Modified : 2023-07-04 10:19
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_DCACHE_RDU (
    input   clk         ,
    input   reset       ,
    input   fence_i     ,

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
wire [`ysyx_22041752_DCACHE_TAG_WD   -1:0] tag   ;
wire [`ysyx_22041752_ICACHE_OFFSET_WD-1:0] offset;

assign {tag, index, offset} = data_addr;

reg fence_i_r;
always @(posedge clk) begin
    if (reset) begin
        fence_i_r <= 0;
    end
    else begin
        fence_i_r <= fence_i;
    end
end
wire fence_i_rising = fence_i && !fence_i_r;

reg  [`ysyx_22041752_DCACHE_INDEX_WD :0] fence_cnt;
/* verilator lint_off UNUSEDSIGNAL */
wire [`ysyx_22041752_DCACHE_INDEX_WD :0] fence_addr=fence_cnt-1;
/* verilator lint_on UNUSEDSIGNAL */
wire fence_to_mem = fence_cnt!=0;
wire fence_last   = fence_cnt==1;
assign rs_to_cs_bus = {tag, raddr, offset, data_wdata, data_wen, ~rden, fence_to_mem, fence_last};
assign rs_to_cs_valid = 1'b1;

always @(posedge clk) begin
    if (reset) begin
        fence_cnt <= 0;
    end
    else if (fence_i_rising) begin
        fence_cnt <= 64;//`ysyx_22041752_DCACHE_LINE_PERWAY;
    end
    else if(fence_cnt!=0 && cmp_allowin) begin
        fence_cnt <= fence_addr;
    end
end

assign rden[0] = !((fence_cnt!=0 || data_en) && cmp_allowin);
assign rden[2] = !((fence_cnt!=0 || data_en) && cmp_allowin);
assign rden[1] = !((fence_cnt!=0 || data_en) && cmp_allowin);
assign rden[3] = !((fence_cnt!=0 || data_en) && cmp_allowin);
assign raddr = fence_cnt!=0 ? fence_addr[`ysyx_22041752_DCACHE_INDEX_WD-1:0]: index;

endmodule

