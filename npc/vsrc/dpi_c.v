// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : dpi_c.v
// Author        : Cw
// Created On    : 2022-11-12 11:04
// Last Modified : 2023-07-14 16:44
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module dpi_c (
    input                    clk                                 ,
    input                    stop                                ,
    input                    ws_valid                            ,
    input  [`ysyx_22041752_RF_DATA_WD-1:0] dpi_regs [31:0]       ,
    input  [63:0]            dpi_csrs [3:0]                      ,
    input  [63:0]            debug_wb_pc                         ,
    input  [63:0]            debug_es_pc                         ,
    input                    debug_es_bjpre_error                ,
    input                    debug_es_bj_inst                    ,
    input                    debug_es_exp                        ,
    input                    debug_es_mret                       ,
    input                    debug_es_data_ren                   ,
    input                    debug_es_data_wen                   ,
    input                    debug_ms_rdata_valid                ,

    input  [`ysyx_22041752_DATA_DATA_WD-1:0] debug_ms_data_rdata ,
    input  [63:0]                            debug_es_data_addr  ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0] debug_es_data_wdata ,
    input  [`ysyx_22041752_INST_WD     -1:0] debug_ws_inst       ,
    input                                    debug_ws_out_of_mem ,
    input  [`ysyx_22041752_INST_WD     -1:0] debug_es_inst       ,
    
    input                                    debug_dcache_miss   ,
    input                                    debug_dcache_en     ,
    input                                    debug_icache_miss
);

reg dcache_en_r;
always @(posedge clk) begin
    dcache_en_r <= debug_dcache_en;
end

reg dcache_miss_r;
always @(posedge clk) begin
    dcache_miss_r <= debug_dcache_miss;
end

reg icache_miss_r;
always @(posedge clk) begin
    icache_miss_r <= debug_icache_miss;
end

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
reg [31:0] current_inst;
always @(posedge clk) begin
    current_inst <= debug_ws_inst;
end
reg current_out_of_mem;
always @(posedge clk) begin
    current_out_of_mem <= debug_ws_out_of_mem;
end

export "DPI-C" function record;
function void record();
    output bit     halt         ;
    output bit     valid        ;
    output bit     exp          ;
    output bit     mret         ;
    output bit     bjpre_error  ;
    output bit     bj_inst      ;
    output longint pc           ;
    output bit     out_of_mem   ;
    output bit     icache_miss  ;
    output bit     dcache_miss  ;
    output bit     dcache_en    ;
    output longint dnpc         ;
    output int     inst         ;
    halt        = stop_r3               ;
    valid       = valid_r               ;
    exp         = exp_cmt               ;
    mret        = mret_cmt              ;
    bjpre_error = debug_es_bjpre_error  ;
    bj_inst     = debug_es_bj_inst      ;
    pc          = current_pc            ;
    out_of_mem  = current_out_of_mem    ;
    icache_miss = !debug_icache_miss&&icache_miss_r;
    dcache_miss = !dcache_miss_r&&debug_dcache_miss;
    dcache_en   = !dcache_en_r&&debug_dcache_en;
    dnpc        = debug_wb_pc           ;
    inst        = current_inst          ;
endfunction

export "DPI-C" function mem_inst;
function void mem_inst();
    output longint pc   ;
    output int     inst ;
    output bit     data_ren;
    output bit     data_wen;
    output longint data_addr;
    output longint data_wdata;
    output longint data_rdata;
    output bit     rdata_v   ;

    pc          = debug_es_pc;
    inst        = debug_es_inst;
    data_ren    = debug_es_data_ren;
    data_wen    = debug_es_data_wen;
    data_addr   = debug_es_data_addr;
    data_wdata  = debug_es_data_wdata;
    data_rdata  = debug_ms_data_rdata;
    rdata_v     = debug_ms_rdata_valid;
endfunction

import "DPI-C" context function void set_gpr_ptr(input logic [63:0] a[]);
import "DPI-C" context function void set_csr_ptr(input logic [63:0] a[]);
initial set_gpr_ptr(rf);
initial set_csr_ptr(csr);

endmodule

