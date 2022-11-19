// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : top.v
// Author        : Cw
// Created On    : 2022-10-17 21:44
// Last Modified : 2022-11-18 09:58
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`default_nettype none
`include "ysyx_22041752_mycpu.vh"
module top (
    input  wire        clk,
    input  wire        reset,

    // inst sram interface
    output wire                     inst_sram_en   ,
    output wire [`SRAM_WEN_WD -1:0] inst_sram_wen  ,
    output wire [`SRAM_ADDR_WD-1:0] inst_sram_addr ,
    output wire [`SRAM_DATA_WD-1:0] inst_sram_wdata,
    input  wire [`SRAM_DATA_WD-1:0] inst_sram_rdata,
    // data sram interface
    output wire                     data_sram_en   ,
    output wire [`SRAM_WEN_WD -1:0] data_sram_wen  ,
    output wire [`SRAM_ADDR_WD-1:0] data_sram_addr ,
    output wire [`SRAM_DATA_WD-1:0] data_sram_wdata,
    input  wire [`SRAM_DATA_WD-1:0] data_sram_rdata,
    // trace debug interface
    output wire [`SRAM_ADDR_WD-1:0] debug_wb_pc      ,
    output wire [`RF_WEN_WD   -1:0] debug_wb_rf_wen  ,
    output wire [`RF_ADDR_WD  -1:0] debug_wb_rf_wnum ,
    output wire [`RF_DATA_WD  -1:0] debug_wb_rf_wdata
);
   
wire         ds_allowin;
wire         es_allowin;
wire         ms_allowin;
wire         ws_allowin;
wire         fs_to_ds_valid;
wire         ds_to_es_valid;
wire         es_to_ms_valid;
wire         ms_to_ws_valid;
wire [`FS_TO_DS_BUS_WD -1:0]   fs_to_ds_bus;
wire [`DS_TO_ES_BUS_WD -1:0]   ds_to_es_bus;
wire [`ES_TO_MS_BUS_WD -1:0]   es_to_ms_bus;
wire [`MS_TO_WS_BUS_WD -1:0]   ms_to_ws_bus;
wire [`WS_TO_RF_BUS_WD -1:0]   ws_to_rf_bus;
wire [`BR_BUS_WD       -1:0]   br_bus;
wire [`ES_FORWARD_BUS_WD -1:0] es_forward_bus;
wire [`FORWARD_BUS_WD -1:0]    ms_forward_bus;
wire [`FORWARD_BUS_WD -1:0]    ws_forward_bus;

wire [63:0] mul_result;
wire [63:0] div_result;
wire [63:0] div_complete;

// IF stage
ysyx_22041752_IFU U_IF(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .ds_allowin     (ds_allowin     ),
    //brbus
    .br_bus         (br_bus         ),
    //outputs
    .fs_to_ds_valid (fs_to_ds_valid ),
    .fs_to_ds_bus   (fs_to_ds_bus   ),
    // inst sram interface
    .inst_sram_en   (inst_sram_en   ),
    .inst_sram_wen  (inst_sram_wen  ),
    .inst_sram_addr (inst_sram_addr ),
    .inst_sram_wdata(inst_sram_wdata),
    .inst_sram_rdata(inst_sram_rdata)
);
// ID stage
id_stage id_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .es_allowin     (es_allowin     ),
    .ds_allowin     (ds_allowin     ),
    //from fs
    .fs_to_ds_valid (fs_to_ds_valid ),
    .fs_to_ds_bus   (fs_to_ds_bus   ),
    //to es
    .ds_to_es_valid (ds_to_es_valid ),
    .ds_to_es_bus   (ds_to_es_bus   ),
    //to fs
    .br_bus         (br_bus         ),
    //to rf: for write back
    .ws_to_rf_bus   (ws_to_rf_bus   ),
	//forward_bus
	.es_forward_bus (es_forward_bus ),
	.ms_forward_bus (ms_forward_bus ),
	.ws_forward_bus (ws_forward_bus )
);
// EXE stage
exe_stage exe_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .ms_allowin     (ms_allowin     ),
    .es_allowin     (es_allowin     ),
    //from ds
    .ds_to_es_valid (ds_to_es_valid ),
    .ds_to_es_bus   (ds_to_es_bus   ),
    //to ms
    .es_to_ms_valid (es_to_ms_valid ),
    .es_to_ms_bus   (es_to_ms_bus   ),
    // data sram interface
    .data_sram_en   (data_sram_en   ),
    .data_sram_wen  (data_sram_wen  ),
    .data_sram_addr (data_sram_addr ),
    .data_sram_wdata(data_sram_wdata),
	//exe_forward
	.es_forward_bus (es_forward_bus ),
    .mul_result     (mul_result     )     
);
// MEM stage
mem_stage mem_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .ws_allowin     (ws_allowin     ),
    .ms_allowin     (ms_allowin     ),
    //from es
    .es_to_ms_valid (es_to_ms_valid ),
    .es_to_ms_bus   (es_to_ms_bus   ),
    //to ws
    .ms_to_ws_valid (ms_to_ws_valid ),
    .ms_to_ws_bus   (ms_to_ws_bus   ),
    //from data-sram
    .data_sram_rdata(data_sram_rdata),
    .mul_result     (mul_result     ),
	.ms_forward_bus (ms_forward_bus )
);
// WB stage
wb_stage wb_stage(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .ws_allowin     (ws_allowin     ),
    //from ms
    .ms_to_ws_valid (ms_to_ws_valid ),
    .ms_to_ws_bus   (ms_to_ws_bus   ),
    //to rf: for write back
    .ws_to_rf_bus   (ws_to_rf_bus   ),
    //trace debug interface
    .debug_wb_pc      (debug_wb_pc      ),
    .debug_wb_rf_wen  (debug_wb_rf_wen  ),
    .debug_wb_rf_wnum (debug_wb_rf_wnum ),
    .debug_wb_rf_wdata(debug_wb_rf_wdata),
	.ws_forward_bus   (ws_forward_bus)
);

//dpi_c u_dpi_c(
    //.inst_i                         (inst),
    //.dpi_regs                       ( dpi_regs                      ),
    //.pc                             (addr)
//);

endmodule
