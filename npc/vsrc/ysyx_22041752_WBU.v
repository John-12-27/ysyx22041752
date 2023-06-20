// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_WBU.v
// Author        : Cw
// Created On    : 2022-11-21 16:21
// Last Modified : 2023-06-20 22:01
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------

`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_WBU (
    input                      clk           ,
    input                      reset         ,
    
    output                          ws_allowin    ,
    
    input                           ms_to_ws_valid,
    input  [`ysyx_22041752_MS_TO_WS_BUS_WD -1:0]  ms_to_ws_bus  ,
    
    output [`ysyx_22041752_WS_TO_RF_BUS_WD -1:0]  ws_to_rf_bus  ,
   
	output [`ysyx_22041752_WS_FORWARD_BUS_WD  -1:0]  ws_forward_bus
`ifdef DPI_C
    ,
    output wire [`ysyx_22041752_PC_WD           -1:0]  debug_wb_pc   ,
    output wire                                        debug_ws_valid,
    output wire                                        debug_wb_rf_wen ,
    output wire [`ysyx_22041752_RF_ADDR_WD      -1:0]  debug_wb_rf_wnum,
    output wire [`ysyx_22041752_RF_DATA_WD      -1:0]  debug_wb_rf_wdata,
    output reg  [`ysyx_22041752_INST_WD         -1:0]  debug_ws_inst,
    input       [`ysyx_22041752_INST_WD         -1:0]  debug_ms_inst
`endif
);

reg         ws_valid;
wire        ws_ready_go;

reg [`ysyx_22041752_MS_TO_WS_BUS_WD -1:0] ms_to_ws_bus_r;
wire                                 ws_rf_we;
wire [`ysyx_22041752_RF_ADDR_WD-1:0] rd      ;
wire [`ysyx_22041752_RF_DATA_WD-1:0] ws_r    ;
/* verilator lint_off UNUSEDSIGNAL */
wire [`ysyx_22041752_PC_WD     -1:0] ws_pc   ;
/* verilator lint_on UNUSEDSIGNAL */
assign {ws_rf_we ,  
        rd       ,  
        ws_r     ,  
        ws_pc             
       } = ms_to_ws_bus_r;

wire                                 rf_we;
wire [`ysyx_22041752_RF_ADDR_WD-1:0] rf_waddr;
wire [`ysyx_22041752_RF_DATA_WD-1:0] rf_wdata;
assign ws_to_rf_bus = {rf_we   ,  
                       rf_waddr,  
                       rf_wdata   
                      };

assign ws_ready_go = 1'b1;
assign ws_allowin  = !ws_valid || ws_ready_go;
always @(posedge clk) begin
    if (reset) begin
        ws_valid <= 1'b0;
    end
    else if (ws_allowin) begin
        ws_valid <= ms_to_ws_valid;
    end
end
always @(posedge clk) begin
    if (reset) begin
        ms_to_ws_bus_r <= 0;
    end
	else if (ms_to_ws_valid && ws_allowin) begin
        ms_to_ws_bus_r <= ms_to_ws_bus;
    end
end

assign rf_we    = ws_rf_we&&ws_valid;
assign rf_waddr = rd;
assign rf_wdata = ws_r;

// forward info generate
wire ws_forward_valid;
assign ws_forward_valid = rf_we;
assign ws_forward_bus   = {ws_forward_valid,ws_r,rd};

`ifdef DPI_C
assign debug_wb_pc       = ws_pc;
assign debug_ws_valid    = ws_valid;
assign debug_wb_rf_wen   = rf_we;
assign debug_wb_rf_wnum  = rd;
assign debug_wb_rf_wdata = ws_r;

always @(posedge clk) begin
    if(ms_to_ws_valid && ws_allowin) begin
        debug_ws_inst <= debug_ms_inst;    
    end
end
`endif


endmodule

