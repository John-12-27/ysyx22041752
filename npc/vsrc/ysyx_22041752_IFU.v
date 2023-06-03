// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_IFU.v
// Author        : Cw
// Created On    : 2022-10-17 20:50
// Last Modified : 2023-06-03 17:54
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_IFU (
    input                                        clk            ,
    input                                        reset          ,
    
    input                                        ds_allowin     ,
    
    input  [`ysyx_22041752_BR_BUS_WD       -1:0] br_bus         ,
    
    output                                       fs_to_ds_valid ,
    output [`ysyx_22041752_FS_TO_DS_BUS_WD -1:0] fs_to_ds_bus   ,
    
    output                                       inst_en        ,
    input                                        inst_ready     ,
    output [`ysyx_22041752_SRAM_ADDR_WD-1:0]     inst_addr      ,
/* verilator lint_off UNUSEDSIGNAL */
    input  [`ysyx_22041752_SRAM_DATA_WD-1:0]     inst_rdata     ,
/* verilator lint_on UNUSEDSIGNAL */
    input                                        inst_valid     ,

    input                                        flush          , 
    input  [`ysyx_22041752_PC_WD-1:0]            flush_pc       
);

reg         fs_valid;
wire        fs_ready_go;
wire        fs_allowin;
wire        to_fs_valid;

wire [`ysyx_22041752_PC_WD-1:0] seq_pc;
wire [`ysyx_22041752_PC_WD-1:0] nextpc;

wire                            br_taken;
wire [`ysyx_22041752_PC_WD-1:0] br_target;
assign {br_taken,br_target} = br_bus;

wire [`ysyx_22041752_INST_WD-1:0] fs_inst;
reg  [`ysyx_22041752_PC_WD-1:0]   fs_pc;
assign fs_to_ds_bus = {fs_inst, fs_pc};

// pre-IF stage
assign to_fs_valid  = ~reset && inst_ready;

assign seq_pc       = fs_pc + 4;
assign nextpc       = flush    ? flush_pc  :
                      br_taken ? br_target : 
                                 seq_pc    ; 

// IF stage
reg inst_en_r;
always @(posedge clk) begin
    if (reset) begin
        inst_en_r <= 0;
    end
    else begin
        inst_en_r <= inst_en;
    end
end
assign fs_ready_go    = inst_en_r ? inst_valid : 1'b1;
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
        fs_pc <= `ysyx_22041752_RESET_PC_VALUE;   
    end
    else if (to_fs_valid && fs_allowin) begin
        fs_pc <= nextpc;
    end
end

assign inst_en    = ~reset && fs_allowin;
assign inst_addr  = nextpc;
assign fs_inst    = inst_rdata[`ysyx_22041752_INST_WD-1:0];

endmodule

