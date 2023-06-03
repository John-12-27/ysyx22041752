// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : axi2ram.v
// Author        : Cw
// Created On    : 2023-06-03 17:05
// Last Modified : 2023-06-03 22:48
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module axi2ram (
    input  clk  ,
    input  reset,

    output         awready ,
    input          awvalid ,
    input  [3:0]   awid    ,
    input  [31:0]  awaddr  ,
/* verilator lint_off UNUSEDSIGNAL */
    input  [7:0]   awlen   ,
    input  [2:0]   awsize  ,
    input  [1:0]   awburst ,
/* verilator lint_on UNUSEDSIGNAL */
    output         wready  ,
    input          wvalid  ,
    input  [63:0]  wdata   ,
    input  [7:0]   wstrb   ,
/* verilator lint_off UNUSEDSIGNAL */
    input          wlast   ,
    input          bready  ,
/* verilator lint_on UNUSEDSIGNAL */
    output         bvalid  ,
/* verilator lint_off UNUSEDSIGNAL */
    output [3:0]   bid     ,
    output [1:0]   bresp   ,
/* verilator lint_on UNUSEDSIGNAL */
    output         arready ,
    input          arvalid ,
    input  [3:0]   arid    ,
    input  [31:0]  araddr  ,
/* verilator lint_off UNUSEDSIGNAL */
    input  [7:0]   arlen   ,
    input  [2:0]   arsize  ,
    input  [1:0]   arburst ,
    input          rready  ,
/* verilator lint_on UNUSEDSIGNAL */
    output         rvalid  ,
    output [3:0]   rid     ,
    output [63:0]  rdata   ,
/* verilator lint_off UNUSEDSIGNAL */
    output [1:0]   rresp   ,
    output         rlast   ,
/* verilator lint_on UNUSEDSIGNAL */
    
    output                                   inst_sram_en   ,
    output [`ysyx_22041752_SRAM_ADDR_WD-1:0] inst_sram_addr ,
    input  [`ysyx_22041752_SRAM_DATA_WD-1:0] inst_sram_rdata,

    output                                   data_sram_en   ,
    output [`ysyx_22041752_SRAM_WEN_WD -1:0] data_sram_wen  ,
    output [`ysyx_22041752_SRAM_ADDR_WD-1:0] data_sram_addr ,
    output [`ysyx_22041752_SRAM_DATA_WD-1:0] data_sram_wdata,
    input  [`ysyx_22041752_SRAM_DATA_WD-1:0] data_sram_rdata
);
    
reg  [1:0] rfsm_pre;
wire [1:0] rfsm_nxt;
parameter R_IDLE=0;
parameter R_FETCH=1;
parameter R_LOAD=2;
always @(posedge clk) begin
    if (reset) begin
        rfsm_pre <= R_IDLE;
    end
    else begin
        rfsm_pre <= rfsm_nxt;
    end
end

assign rfsm_nxt = arvalid && arid==1 ? R_LOAD  :
                  arvalid && arid==0 ? R_FETCH :
                  !arvalid           ? R_IDLE  :
                                       rfsm_pre;

assign arready = 1'b1;                  
assign awready = 1'b1;
assign wready  = 1'b1;
assign rvalid  = 1'b1;
assign bvalid  = 1'b1;
assign bid     = 4'd1;
assign bresp   = 0;
assign rresp   = 0;
assign rlast   = 1;

assign inst_sram_addr = araddr;
assign data_sram_addr = |data_sram_wen ? awaddr :araddr;
assign inst_sram_en   = arvalid && arid==0;
assign data_sram_en   = arvalid && arid==1 || wvalid&awvalid && awid==1;
assign data_sram_wen  = wvalid&awvalid && awid==1 ? wstrb : 0;
assign data_sram_wdata= wdata;
assign rvalid = rfsm_pre!=R_IDLE;
assign rid    = rfsm_pre==R_FETCH ? 0 : 1;
assign rdata  = rfsm_pre==R_FETCH ? inst_sram_rdata : data_sram_rdata;

endmodule

