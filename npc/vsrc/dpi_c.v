// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : dpi_c.v
// Author        : Cw
// Created On    : 2022-11-12 11:04
// Last Modified : 2023-03-18 13:30
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module dpi_c (
    input  wire                  clk              ,
    input  wire                  stop             ,
    input  wire                  ws_valid         ,
    input  wire[`RF_DATA_WD-1:0] dpi_regs [31:0]  ,
    input  wire[`PC_WD     -1:0] debug_wb_pc      ,
    input  wire[`PC_WD     -1:0] debug_es_pc      ,
    input  wire[`INST_WD   -1:0] debug_wb_inst    ,

    input  wire                  debug_wb_rf_wen  ,
    input  wire[`RF_ADDR_WD-1:0] debug_wb_rf_wnum ,
    /* verilator lint_off UNUSEDSIGNAL */
    input  wire[`RF_DATA_WD-1:0] debug_wb_rf_wdata
    /* verilator lint_on UNUSEDSIGNAL */
);

reg [63:0] rf[31:0];
genvar i;
generate
    for (i = 0; i < 32; i++) begin
        :regfiles
        always @(*) begin
            rf[i] = dpi_regs[i];
        end
    end
endgenerate

reg stop_r0;
reg stop_r1;
reg stop_r2;
reg stop_r3;
always @(posedge clk) begin
    stop_r0 <= stop;
end
always @(posedge clk) begin
    stop_r1 <= stop_r0;
end
always @(posedge clk) begin
    stop_r2 <= stop_r1;
end
always @(posedge clk) begin
    stop_r3 <= stop_r2;
end

reg valid_r;
always @(posedge clk) begin
	valid_r <= ws_valid;
end

reg [`INST_WD-1:0] inst_r0;
reg [`INST_WD-1:0] inst_r1;
reg [`INST_WD-1:0] inst_r2;
reg [`INST_WD-1:0] inst_r3;
always @(posedge clk) begin
    inst_r0 <= debug_wb_inst;   //exe_stage
end
always @(posedge clk) begin
    inst_r1 <= inst_r0;         //mem_stage
end
always @(posedge clk) begin
    inst_r2 <= inst_r1;         //wb_stage
end
always @(posedge clk) begin     
    inst_r3 <= inst_r2;         //done
end

reg [`PC_WD-1:0] current_pc;
always @(posedge clk) begin
	current_pc <= debug_wb_pc;
end
reg                   wb_rf_wen  ;
reg [`RF_ADDR_WD-1:0] wb_rf_wnum ;
always @(posedge clk) begin
	wb_rf_wen <= debug_wb_rf_wen;
end
always @(posedge clk) begin
	wb_rf_wnum <= debug_wb_rf_wnum;
end

export "DPI-C" function record;
function void record();
    output bit     halt ;
    output bit     valid;
    output longint pc   ;
    output bit     wen  ;
    output int     wnum ;
    output longint dnpc ;
    output int     inst ;
    halt  = stop_r3;
    valid = valid_r;
    pc    = current_pc;
    wen   = wb_rf_wen;
    wnum  = {27'b0, wb_rf_wnum};
    dnpc  = debug_wb_pc;
    inst  = inst_r3 ;
endfunction

export "DPI-C" function mem_inst;
function void mem_inst();
    output longint pc   ;
    output int     inst ;
    pc    = debug_es_pc;

    inst  = inst_r0 ;
endfunction

import "DPI-C" context function void set_gpr_ptr(input logic [63:0] a[]);
initial set_gpr_ptr(rf);

endmodule
