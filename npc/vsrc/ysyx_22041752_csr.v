// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_csr.v
// Author        : Cw
// Created On    : 2023-03-28 22:12
// Last Modified : 2023-03-30 15:04
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_csr (
    input wire clk  ,

    input  wire        wen   ,
    input  wire [11:0] addr  ,
    input  wire [63:0] wdata ,
    output wire [63:0] rdata ,

    output wire [63:0] dpi_csrs [3:0]
);
    
reg [63:0] mstatus;
reg [63:0] mtvec  ;
reg [63:0] mepc   ;
reg [63:0] mcause ;

assign rdata = {64{(addr == 12'h300)}} & mstatus |
               {64{(addr == 12'h305)}} & mtvec   |
               {64{(addr == 12'h341)}} & mepc    |
               {64{(addr == 12'h342)}} & mcause  ;

always @(posedge clk) begin
    mstatus <= 64'ha00001800;
end

always @(posedge clk) begin
    if (wen && addr == 12'h305) begin
        mtvec <= wdata;
    end
end

always @(posedge clk) begin
    if (wen && addr == 12'h341) begin
        mepc <= wdata;
    end
end

always @(posedge clk) begin
    if (wen && addr == 12'h342) begin
        mcause <= wdata;
    end
end

assign dpi_csrs[0] = mstatus;
assign dpi_csrs[1] = mtvec;
assign dpi_csrs[2] = mepc;
assign dpi_csrs[3] = mcause;

endmodule

