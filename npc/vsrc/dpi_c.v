// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : dpi_c.v
// Author        : Cw
// Created On    : 2022-11-12 11:04
// Last Modified : 2023-06-03 21:42
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module dpi_c (
    input                    clk              ,
    input                    stop             ,
    input                    ws_valid         ,
    input  [`ysyx_22041752_RF_DATA_WD-1:0] dpi_regs [31:0]  ,
    input  [63:0]            dpi_csrs [3:0]   ,
    input  [63:0] debug_wb_pc      ,
    input  [63:0] debug_es_pc      ,
    input                    debug_es_exp     ,
    input                    debug_es_mret    ,
    input  [`ysyx_22041752_INST_WD   -1:0] debug_ds_inst    ,

    input  [63:0] debug_fs_pc      ,
    /* verilator lint_off UNUSEDSIGNAL */
    input                    debug_wb_rf_wen  ,
    input  [`ysyx_22041752_RF_ADDR_WD-1:0] debug_wb_rf_wnum ,
    input  [`ysyx_22041752_RF_DATA_WD-1:0] debug_wb_rf_wdata
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

reg [63:0] csr[3:0];
generate
    for (i = 0; i < 4; i=i+1) begin
        :csr_regs
        always @(*) begin
            csr[i] = dpi_csrs[i];
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

reg [`ysyx_22041752_INST_WD-1:0] inst_r0;
reg [`ysyx_22041752_INST_WD-1:0] inst_r1;
reg [`ysyx_22041752_INST_WD-1:0] inst_r2;
reg [`ysyx_22041752_INST_WD-1:0] inst_r3;
always @(posedge clk) begin
    inst_r0 <= debug_ds_inst;   //exe_stage
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

reg exp_es1, exp_es2, exp_ms, exp_ws, exp_cmt;
always @(posedge clk) begin
    exp_es1 <= debug_es_exp;
end
always @(posedge clk) begin
    exp_es2 <= exp_es1;
end
always @(posedge clk) begin
    exp_ms <= exp_es2;
end
always @(posedge clk) begin
    exp_ws <= exp_ms;
end
always @(posedge clk) begin
    exp_cmt <= exp_ws;
end

reg mret_ms, mret_ws, mret_cmt;
always @(posedge clk) begin
    mret_ms <= debug_es_mret;
end
always @(posedge clk) begin
    mret_ws <= mret_ms;
end
always @(posedge clk) begin
    mret_cmt <= mret_ws;
end

reg [63:0] current_pc;
always @(posedge clk) begin
	current_pc <= debug_wb_pc;
end


export "DPI-C" function record;
function void record();
    output bit     halt ;
    output bit     valid;
    output bit     exp;
    output bit     mret;
    output longint pc   ;
    output longint fspc ;
    output longint espc ;
    output longint dnpc ;
    output int     inst ;
    halt  = stop_r3;
    valid = valid_r;
    exp   = exp_cmt;
    mret  = mret_cmt;
    pc    = current_pc ;
    fspc  = debug_fs_pc;
    espc  = debug_es_pc;
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
import "DPI-C" context function void set_csr_ptr(input logic [63:0] a[]);
initial set_gpr_ptr(rf);
initial set_csr_ptr(csr);

endmodule

