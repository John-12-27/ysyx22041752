// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : dpi_c.v
// Author        : Cw
// Created On    : 2022-11-12 11:04
// Last Modified : 2022-11-22 17:35
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
    input  wire[`PC_WD     -1:0] debug_ms_pc      ,
    input  wire[`PC_WD     -1:0] debug_wb_pc      ,
    input  wire[`INST_WD   -1:0] debug_wb_inst    ,
    input  wire                  debug_wb_rf_wen  ,
    input  wire[`RF_ADDR_WD-1:0] debug_wb_rf_wnum ,
    input  wire[`RF_DATA_WD-1:0] debug_wb_rf_wdata
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
always @(posedge clk) begin
    stop_r0 <= stop;
end
always @(posedge clk) begin
    stop_r1 <= stop_r0;
end
always @(posedge clk) begin
    stop_r2 <= stop_r1;
end

reg [`INST_WD-1:0] inst_r0;
reg [`INST_WD-1:0] inst_r1;
reg [`INST_WD-1:0] inst_r2;
always @(posedge clk) begin
    inst_r0 <= debug_wb_inst;
end
always @(posedge clk) begin
    inst_r1 <= inst_r0;
end
always @(posedge clk) begin
    inst_r2 <= inst_r1;
end

wire [63:0] Halt;
wire [63:0] Valid;
assign Halt  = {63'b0, stop_r2};
assign Valid = {63'b0, ws_valid};

import "DPI-C" context function void halt(input logic [63:0] s[]);
import "DPI-C" context function void valid(input logic [63:0] s[]);
import "DPI-C" context function void set_gpr_ptr(input logic [63:0] a[]);
import "DPI-C" context function void set_pc_ptr(input logic [63:0] a[]);
import "DPI-C" context function void set_dnpc_ptr(input logic [63:0] a[]);
import "DPI-C" context function void set_inst_ptr(input logic [63:0] a[]);
initial set_gpr_ptr(rf);
initial set_pc_ptr(debug_wb_pc);
initial set_dnpc_ptr(debug_ms_pc);
initial halt(Halt);
initial valid(Valid);
initial set_inst_ptr(inst_r2);

endmodule
