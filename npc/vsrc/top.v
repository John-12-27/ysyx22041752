// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : top.v
// Author        : Cw
// Created On    : 2022-10-17 21:44
// Last Modified : 2023-03-30 15:26
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
    //output wire [`SRAM_WEN_WD -1:0] inst_sram_wen  ,
    output wire [`SRAM_ADDR_WD-1:0] inst_sram_addr ,
    //output wire [`SRAM_DATA_WD-1:0] inst_sram_wdata,
    input  wire [`SRAM_DATA_WD-1:0] inst_sram_rdata,
    // data sram interface
    output wire                     data_sram_en   ,
    output wire [`SRAM_WEN_WD -1:0] data_sram_wen  ,
    output wire [`SRAM_ADDR_WD-1:0] data_sram_addr ,
    output wire [`SRAM_DATA_WD-1:0] data_sram_wdata,
    input  wire [`SRAM_DATA_WD-1:0] data_sram_rdata
);
   
wire              flush     ;
wire [`PC_WD-1:0] flush_pc  ;

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

/* verilator lint_off UNUSEDSIGNAL */
wire [63:0] mul_result;
wire [63:0] div_result;
wire [63:0] div_complete;


// trace debug interface
wire [`PC_WD       -1:0] debug_fs_pc      ;
wire [`PC_WD       -1:0] debug_wb_pc      ;
wire [`PC_WD       -1:0] debug_es_pc      ;
wire                     debug_es_exp     ;
wire                     debug_es_mret    ;
wire                     debug_ws_valid   ;
wire [`INST_WD     -1:0] debug_ds_inst    ;
wire                     debug_wb_rf_wen  ;
wire [`RF_ADDR_WD  -1:0] debug_wb_rf_wnum ;
wire [`RF_DATA_WD  -1:0] debug_wb_rf_wdata;
wire [`RF_DATA_WD-1:0]    dpi_regs [`RF_NUM-1:0];
wire [`RF_DATA_WD-1:0]    dpi_csrs [3:0];
wire [            0:0]    stop;
// IF stage
ysyx_22041752_IFU U_IFU_0(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .ds_allowin     (ds_allowin     ),
    //brbus
    .br_bus         (br_bus         ),
    //outputs
    .fs_to_ds_valid (fs_to_ds_valid ),
    .fs_to_ds_bus   (fs_to_ds_bus   ),

    .inst_en        (inst_sram_en   ),
    .inst_addr      (inst_sram_addr ),
    .inst_rdata     (inst_sram_rdata),

    .flush          (flush          ),
    .flush_pc       (flush_pc       ),

    .debug_fs_pc    (debug_fs_pc    )
);

// ID stage
ysyx_22041752_IDU U_IDU_0(
    .clk            ( clk            ),
    .reset          ( reset          ),
    .es_allowin     ( es_allowin     ),
    .ds_allowin     ( ds_allowin     ),
    .fs_to_ds_valid ( fs_to_ds_valid ),
    .fs_to_ds_bus   ( fs_to_ds_bus   ),
    .ds_to_es_valid ( ds_to_es_valid ),
    .ds_to_es_bus   ( ds_to_es_bus   ),
    .br_bus         ( br_bus         ),
    .ws_to_rf_bus   ( ws_to_rf_bus   ),
    .es_forward_bus ( es_forward_bus ),
    .ms_forward_bus ( ms_forward_bus ),
    .ws_forward_bus ( ws_forward_bus ),
    .flush          ( flush          ),
    .dpi_regs       ( dpi_regs       ),
    .stop           ( stop           ),
    .debug_ds_inst  ( debug_ds_inst  ) 
);

// EXE stage
ysyx_22041752_EXU U_EXU_0(
    .clk            ( clk             ),
    .reset          ( reset           ),
    .ms_allowin     ( ms_allowin      ),
    .es_allowin     ( es_allowin      ),
    .ds_to_es_valid ( ds_to_es_valid  ),
    .ds_to_es_bus   ( ds_to_es_bus    ),
    .es_to_ms_valid ( es_to_ms_valid  ),
    .es_to_ms_bus   ( es_to_ms_bus    ),
    .es_forward_bus ( es_forward_bus  ),
    .data_sram_en   ( data_sram_en    ),
    .data_sram_wen  ( data_sram_wen   ),
    .data_sram_addr ( data_sram_addr  ),
    .data_sram_wdata( data_sram_wdata ),
    .flush          ( flush           ),
    .flush_pc       ( flush_pc        ),

    .dpi_csrs       ( dpi_csrs        ),
    .es_exp         ( debug_es_exp    ),
    .es_mret        ( debug_es_mret   ),
    .debug_es_pc    ( debug_es_pc     )
);

// MEM stage
ysyx_22041752_MEU U_MEU_0(
    .clk            ( clk             ),
    .reset          ( reset           ),
    .ws_allowin     ( ws_allowin      ),
    .ms_allowin     ( ms_allowin      ),
    .es_to_ms_valid ( es_to_ms_valid  ),
    .es_to_ms_bus   ( es_to_ms_bus    ),
    .ms_to_ws_valid ( ms_to_ws_valid  ),
    .ms_to_ws_bus   ( ms_to_ws_bus    ),
    .data_sram_rdata( data_sram_rdata ),
    .ms_forward_bus ( ms_forward_bus  )
);

// WB stage
ysyx_22041752_WBU U_WBU_0(
    .clk               ( clk               ),
    .reset             ( reset             ),
    .ws_allowin        ( ws_allowin        ),
    .ms_to_ws_valid    ( ms_to_ws_valid    ),
    .ms_to_ws_bus      ( ms_to_ws_bus      ),
    .ws_to_rf_bus      ( ws_to_rf_bus      ),
    .ws_forward_bus    ( ws_forward_bus    ),
    .debug_ws_valid    ( debug_ws_valid    ),
    .debug_wb_pc	   ( debug_wb_pc	   ),
    .debug_wb_rf_wen   ( debug_wb_rf_wen   ),
    .debug_wb_rf_wnum  ( debug_wb_rf_wnum  ),
    .debug_wb_rf_wdata ( debug_wb_rf_wdata )
);

dpi_c u_dpi_c(
    .clk               ( clk               ),
    .stop              ( stop              ),
    .ws_valid          ( debug_ws_valid    ),
    .dpi_regs          ( dpi_regs          ),
    .dpi_csrs          ( dpi_csrs          ),
    .debug_wb_pc       ( debug_wb_pc       ),
    .debug_es_pc       ( debug_es_pc       ),
    .debug_es_exp      ( debug_es_exp      ),
    .debug_es_mret     ( debug_es_mret     ),
    .debug_ds_inst     ( debug_ds_inst     ),
    .debug_wb_rf_wen   ( debug_wb_rf_wen   ),
    .debug_wb_rf_wnum  ( debug_wb_rf_wnum  ),
    .debug_wb_rf_wdata ( debug_wb_rf_wdata ),
    .debug_fs_pc       ( debug_fs_pc       )
);

endmodule