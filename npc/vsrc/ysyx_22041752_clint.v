// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_clint.v
// Author        : Cw
// Created On    : 2023-05-26 20:44
// Last Modified : 2023-05-29 20:45
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
`define MTIME_OFFSET 64'h0000_bff8
`define MTIMECMP_OFFSET 64'h0000_4000

module ysyx_22041752_clint (
    input  wire clk          ,
    input  wire reset        ,

    input  wire        en    ,
    input  wire        wen   ,
    input  wire [63:0] addr  ,
    input  wire [63:0] wdata ,
    output reg  [63:0] rdata ,
    output reg         rdat_v,

    output wire        int_t_o
);
    
reg [63:0] mtime;
always @(posedge clk) begin
    if (reset) begin
        mtime <= 0;
    end
    else if (wen && (addr == `CLINT_BASE_ADDR+`MTIME_OFFSET)) begin
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
    else if (wen && (addr == `CLINT_BASE_ADDR+`MTIMECMP_OFFSET)) begin
        mtimecmp <= wdata;
    end
end

always @(posedge clk) begin
    if (en && !wen) begin
        if (addr==`CLINT_BASE_ADDR+`MTIME_OFFSET) begin
            rdata <= mtime;
        end
        else if (addr==`CLINT_BASE_ADDR+`MTIMECMP_OFFSET) begin
            rdata <= mtimecmp;
        end
    end
end

always @(posedge clk) begin
    if(reset)
        rdat_v <= 1'b0;
    else begin
        rdat_v <= en && !wen && ((addr == `CLINT_BASE_ADDR+`MTIME_OFFSET) || (addr == `CLINT_BASE_ADDR+`MTIMECMP_OFFSET));
    end
end

assign int_t_o = mtime >= mtimecmp;

endmodule

