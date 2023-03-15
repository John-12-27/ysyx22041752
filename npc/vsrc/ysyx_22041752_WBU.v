// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_WBU.v
// Author        : Cw
// Created On    : 2022-11-21 16:21
// Last Modified : 2022-11-22 16:48
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_WBU (
    input  wire                          clk           ,
    input  wire                          reset         ,
    //allowin
    output wire                          ws_allowin    ,
    //from ms
    input  wire                          ms_to_ws_valid,
    input  wire [`MS_TO_WS_BUS_WD -1:0]  ms_to_ws_bus  ,
    //to rf: for write back
    output wire [`WS_TO_RF_BUS_WD -1:0]  ws_to_rf_bus  ,
    //forward_bus
	output wire [`FORWARD_BUS_WD  -1:0]  ws_forward_bus,
	//trace debug interface
    output wire [`PC_WD           -1:0]  debug_wb_pc   ,
    output wire                          debug_ws_valid,
    output wire                          debug_wb_rf_wen ,
    output wire [`RF_ADDR_WD      -1:0]  debug_wb_rf_wnum,
    output wire [`RF_DATA_WD      -1:0]  debug_wb_rf_wdata
);

reg         ws_valid;
wire        ws_ready_go;

reg [`MS_TO_WS_BUS_WD -1:0] ms_to_ws_bus_r;
wire                   ws_rf_we;
wire [`RF_ADDR_WD-1:0] rd      ;
wire [`RF_DATA_WD-1:0] ws_r    ;
wire [`PC_WD     -1:0] ws_pc   ;
assign {ws_rf_we ,  
        rd       ,  
        ws_r     ,  
        ws_pc             
       } = ms_to_ws_bus_r;

wire                   rf_we;
wire [`RF_ADDR_WD-1:0] rf_waddr;
wire [`RF_DATA_WD-1:0] rf_wdata;
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
	if (ms_to_ws_valid && ws_allowin) begin
        ms_to_ws_bus_r <= ms_to_ws_bus;
    end
end

assign rf_we    = ws_rf_we&&ws_valid;
assign rf_waddr = rd;
assign rf_wdata = ws_r;

// debug info generate
assign debug_wb_pc       = ws_pc;
assign debug_ws_valid    = ws_valid;
assign debug_wb_rf_wen   = rf_we;
assign debug_wb_rf_wnum  = rd;
assign debug_wb_rf_wdata = ws_r;
// forward info generate
wire ws_forward_valid;
assign ws_forward_valid = rf_we;
assign ws_forward_bus   = {ws_forward_valid,ws_r,rd};

endmodule
