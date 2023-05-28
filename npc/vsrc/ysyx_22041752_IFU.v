// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_IFU.v
// Author        : Cw
// Created On    : 2022-10-17 20:50
// Last Modified : 2023-05-27 19:59
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`default_nettype none
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_IFU (
    input  wire                         clk            ,
    input  wire                         reset          ,
    //allwoin
    input  wire                         ds_allowin     ,
    //brbus
    input  wire [`BR_BUS_WD       -1:0] br_bus         ,
    //to ds
    output wire                         fs_to_ds_valid ,
    output wire [`FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus   ,
    // inst sram interface
    output wire                         inst_en        ,
    input  wire                         inst_ready     ,
    output wire [`SRAM_ADDR_WD-1:0]     inst_addr      ,
/* verilator lint_off UNUSEDSIGNAL */
    input  wire [`SRAM_DATA_WD-1:0]     inst_rdata     ,
/* verilator lint_on UNUSEDSIGNAL */

    input  wire                         flush          , 
    input  wire [`PC_WD-1:0]            flush_pc       

`ifdef DPI_C
    ,
    output wire [`PC_WD-1:0]            debug_fs_pc
`endif
);

reg         fs_valid;
wire        fs_ready_go;
wire        fs_allowin;
wire        to_fs_valid;

wire [`PC_WD-1:0] seq_pc;
wire [`PC_WD-1:0] nextpc;

wire              br_taken;
wire [`PC_WD-1:0] br_target;
assign {br_taken,br_target} = br_bus;

wire [`INST_WD-1:0] fs_inst;
reg  [`PC_WD-1:0]   fs_pc;
assign fs_to_ds_bus = {fs_inst, fs_pc};

// pre-IF stage
assign to_fs_valid  = ~reset && inst_ready;

assign seq_pc       = fs_pc + 4;
assign nextpc       = flush    ? flush_pc  :
                      br_taken ? br_target : 
                                 seq_pc    ; 

// IF stage
assign fs_ready_go    = 1'b1;
assign fs_allowin     = !fs_valid || fs_ready_go && ds_allowin;
assign fs_to_ds_valid =  fs_valid && fs_ready_go && ~br_taken && ~flush;
always @(posedge clk) begin
    if (reset) begin
        fs_valid <= 1'b0;
    end
    else if (fs_allowin) begin
        fs_valid <= to_fs_valid;
    end
end

always @(posedge clk) begin
    if (reset) begin
        fs_pc <= `RESET_PC_VALUE;   
    end
    else if (to_fs_valid && fs_allowin) begin
        fs_pc <= nextpc;
    end
end

assign inst_en    = to_fs_valid && fs_allowin;
assign inst_addr  = nextpc;
assign fs_inst    = inst_rdata[`INST_WD-1:0];

`ifdef DPI_C
assign debug_fs_pc = fs_pc;
`endif
endmodule

