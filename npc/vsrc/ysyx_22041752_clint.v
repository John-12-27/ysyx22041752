// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_clint.v
// Author        : Cw
// Created On    : 2023-05-26 20:44
// Last Modified : 2023-06-02 17:38
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
`define ysyx_22041752_MTIME_OFFSET 32'h0000_bff8
`define ysyx_22041752_MTIMECMP_OFFSET 32'h0000_4000

module ysyx_22041752_clint (
    input  clk          ,
    input  reset        ,

    input             en    ,
    input             wen   ,
    input  [31:0]     addr  ,
    input  [63:0]     wdata ,
    output reg [63:0] rdata ,
    output reg        rdat_v,

    output            int_t_o
);

reg [63:0] mtime;
always @(posedge clk) begin
    if (reset) begin
        mtime <= 0;
    end
    else if (wen && (addr == `ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIME_OFFSET)) begin
        mtime <= wdata;
    end
    else begin
        mtime <= mtime+1;
    end
end

reg [63:0] mtimecmp;
always @(posedge clk) begin
    if (reset) begin
        mtimecmp <= 0;
    end
    else if (wen && (addr == `ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIMECMP_OFFSET)) begin
        mtimecmp <= wdata;
    end
end

always @(posedge clk) begin
    if (reset) begin
        rdata <= 0;
    end
    else if (en && !wen) begin
        if (addr==`ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIME_OFFSET) begin
            rdata <= mtime;
        end
        else if (addr==`ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIMECMP_OFFSET) begin
            rdata <= mtimecmp;
        end
    end
end

always @(posedge clk) begin
    if(reset)
        rdat_v <= 1'b0;
    else begin
        rdat_v <= en && !wen && ((addr == `ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIME_OFFSET) || (addr == `ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIMECMP_OFFSET));
    end
end

assign int_t_o = mtime >= mtimecmp;

endmodule

