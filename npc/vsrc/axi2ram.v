// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : axi2ram.v
// Author        : Cw
// Created On    : 2023-06-03 17:05
// Last Modified : 2023-06-03 17:31
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module axi2ram (
    input  clk  ,
    input  reset,

    output         io_slave_awready ,
    input          io_slave_awvalid ,
    input  [3:0]   io_slave_awid    ,
    input  [31:0]  io_slave_awaddr  ,
    input  [7:0]   io_slave_awlen   ,
    input  [2:0]   io_slave_awsize  ,
    input  [1:0]   io_slave_awburst ,
    output         io_slave_wready  ,
    input          io_slave_wvalid  ,
    input  [63:0]  io_slave_wdata   ,
    input  [7:0]   io_slave_wstrb   ,
    input          io_slave_wlast   ,
    input          io_slave_bready  ,
    output         io_slave_bvalid  ,
    output [3:0]   io_slave_bid     ,
    output [1:0]   io_slave_bresp   ,
    output         io_slave_arready ,
    input          io_slave_arvalid ,
    input  [3:0]   io_slave_arid    ,
    input  [31:0]  io_slave_araddr  ,
    input  [7:0]   io_slave_arlen   ,
    input  [2:0]   io_slave_arsize  ,
    input  [1:0]   io_slave_arburst ,
    input          io_slave_rready  ,
    output         io_slave_rvalid  ,
    output [3:0]   io_slave_rid     ,
    output [63:0]  io_slave_rdata   ,
    output [1:0]   io_slave_rresp   ,
    output         io_slave_rlast   ,
    
    output wire                     sram_en   ,
    output wire [`SRAM_WEN_WD -1:0] sram_wen  ,
    output wire [`SRAM_ADDR_WD-1:0] sram_addr ,
    output wire [`SRAM_DATA_WD-1:0] sram_wdata,
    input  wire [`SRAM_DATA_WD-1:0] sram_rdata
);
    

endmodule
