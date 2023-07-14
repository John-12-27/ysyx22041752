// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_csr.v
// Author        : Cw
// Created On    : 2023-03-28 22:12
// Last Modified : 2023-07-14 21:23
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_csr (
    input clk   ,
    input reset ,

    input         wen   ,
    input  [11:0] addr  ,
    input  [63:0] wdata ,
    output [63:0] rdata ,
    
    input  int_t_i,
output int_t_o
    `ifdef DPI_C
        ,
    output [63:0] dpi_csrs [3:0]
`endif
);
    
reg [63:0] mstatus;
reg [63:0] mtvec  ;
reg [63:0] mepc   ;
reg [63:0] mcause ;
reg [63:0] mie    ;

/* verilator lint_off UNUSEDSIGNAL */
reg [63:0] mip    ;
/* verilator lint_on UNUSEDSIGNAL */

assign rdata = {64{(addr == `ysyx_22041752_CSR_ADDR_MSTATUS)}} & mstatus |
               {64{(addr == `ysyx_22041752_CSR_ADDR_MIE)}}     & mie     |
               {64{(addr == `ysyx_22041752_CSR_ADDR_MIP)}}     & mip     |
               {64{(addr == `ysyx_22041752_CSR_ADDR_MTVEC)}}   & mtvec   |
               {64{(addr == `ysyx_22041752_CSR_ADDR_MEPC)}}    & mepc    |
               {64{(addr == `ysyx_22041752_CSR_ADDR_MCAUSE)}}  & mcause  ;

always @(posedge clk) begin
    if (reset) begin
        mstatus <= 64'ha00001800;
    end
    else if (wen && addr == `ysyx_22041752_CSR_ADDR_MSTATUS) begin
        mstatus <= wdata;
    end
end

always @(posedge clk) begin
    if (reset) begin
        mtvec <= 0;
    end
    else if (wen && addr == `ysyx_22041752_CSR_ADDR_MTVEC) begin
        mtvec <= wdata;
    end
end

always @(posedge clk) begin
    if (reset) begin
        mepc <= 0;
    end
    else if (wen && addr == `ysyx_22041752_CSR_ADDR_MEPC) begin
        mepc <= {wdata[63:1], 1'b0};
    end
end

always @(posedge clk) begin
    if (reset) begin
        mcause <= 0;
    end
    else if (wen && addr == `ysyx_22041752_CSR_ADDR_MCAUSE) begin
        mcause <= wdata;
    end
end

always @(posedge clk) begin
    if (reset) begin
        mie <= 0;
    end
    else if (wen && addr == `ysyx_22041752_CSR_ADDR_MIE) begin
        mie <= wdata;
    end
end

always @(posedge clk) begin
    if (reset) begin
        mip <= 0;
    end
    else begin
        mip[7] <= mstatus[3] & mie[7] & int_t_i;
    end
end

assign int_t_o = mip[7];

`ifdef DPI_C
assign dpi_csrs[0] = mstatus; 
assign dpi_csrs[1] = mtvec;   
assign dpi_csrs[2] = mepc;    
assign dpi_csrs[3] = mcause;  
`endif

endmodule

