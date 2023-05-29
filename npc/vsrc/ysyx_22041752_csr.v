// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_csr.v
// Author        : Cw
// Created On    : 2023-03-28 22:12
// Last Modified : 2023-05-29 20:32
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
    
    input  wire        int_i ,
    output wire mie_o ,
    output wire mtie_o

`ifdef DPI_C
    ,
    output wire [63:0] dpi_csrs [3:0]
`endif
);
    
reg [63:0] mstatus;
reg [63:0] mtvec  ;
reg [63:0] mepc   ;
reg [63:0] mcause ;
reg [63:0] mie    ;
reg [63:0] mip    ;

assign rdata = {64{(addr == `CSR_ADDR_MSTATUS)}} & mstatus |
               {64{(addr == `CSR_ADDR_MIE)}}     & mie     |
               {64{(addr == `CSR_ADDR_MIP)}}     & mip     |
               {64{(addr == `CSR_ADDR_MTVEC)}}   & mtvec   |
               {64{(addr == `CSR_ADDR_MEPC)}}    & mepc    |
               {64{(addr == `CSR_ADDR_MCAUSE)}}  & mcause  ;

always @(posedge clk) begin
`ifdef DPI_C
    mstatus <= 64'ha00001800;
`else
    if (wen && addr == `CSR_ADDR_MSTATUS) begin
        mstatus <= wdata;
    end
`endif
end

always @(posedge clk) begin
    if (wen && addr == `CSR_ADDR_MTVEC) begin
        mtvec <= wdata;
    end
end

always @(posedge clk) begin
    if (wen && addr == `CSR_ADDR_MEPC) begin
        mepc <= wdata;
    end
end

always @(posedge clk) begin
    if (wen && addr == `CSR_ADDR_MCAUSE) begin
        mcause <= wdata;
    end
end

always @(posedge clk) begin
    if (wen && addr == `CSR_ADDR_MIE) begin
        mie <= wdata;
    end
end

always @(posedge clk) begin
    if (wen && addr == `CSR_ADDR_MIP) begin
        mip <= wdata;
    end
end

assign mie_o  = mstatus[3];
assign mtie_o = mie[7];

`ifdef DPI_C
assign dpi_csrs[0] = mstatus;
assign dpi_csrs[1] = mtvec;
assign dpi_csrs[2] = mepc;
assign dpi_csrs[3] = mcause;
`endif

endmodule

