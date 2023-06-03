// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : top.v
// Author        : Cw
// Created On    : 2022-10-17 21:44
// Last Modified : 2023-06-03 17:38
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

    output wire                     sram_en   ,
    output wire [`SRAM_WEN_WD -1:0] sram_wen  ,
    output wire [`SRAM_ADDR_WD-1:0] sram_addr ,
    output wire [`SRAM_DATA_WD-1:0] sram_wdata,
    input  wire [`SRAM_DATA_WD-1:0] sram_rdata
);
   

wire         io_slave_awready ;
wire         io_slave_awvalid ;
wire [3:0]   io_slave_awid    ;
wire [31:0]  io_slave_awaddr  ;
wire [7:0]   io_slave_awlen   ;
wire [2:0]   io_slave_awsize  ;
wire [1:0]   io_slave_awburst ;
wire         io_slave_wready  ;
wire         io_slave_wvalid  ;
wire [63:0]  io_slave_wdata   ;
wire [7:0]   io_slave_wstrb   ;
wire         io_slave_wlast   ;
wire         io_slave_bready  ;
wire         io_slave_bvalid  ;
wire [3:0]   io_slave_bid     ;
wire [1:0]   io_slave_bresp   ;
wire         io_slave_arready ;
wire         io_slave_arvalid ;
wire [3:0]   io_slave_arid    ;
wire [31:0]  io_slave_araddr  ;
wire [7:0]   io_slave_arlen   ;
wire [2:0]   io_slave_arsize  ;
wire [1:0]   io_slave_arburst ;
wire         io_slave_rready  ;
wire         io_slave_rvalid  ;
wire [3:0]   io_slave_rid     ;
wire [63:0]  io_slave_rdata   ;
wire [1:0]   io_slave_rresp   ;
wire         io_slave_rlast   ;

// inst sram interface
wire                     inst_sram_en   ;
wire [`SRAM_ADDR_WD-1:0] inst_sram_addr ;
wire [`SRAM_DATA_WD-1:0] inst_sram_rdata;
// data sram interface                  
wire                     data_sram_en   ;
wire [`SRAM_WEN_WD -1:0] data_sram_wen  ;
wire [`SRAM_ADDR_WD-1:0] data_sram_addr ;
wire [`SRAM_DATA_WD-1:0] data_sram_wdata;
wire [`SRAM_DATA_WD-1:0] data_sram_rdata;

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

ysyx_22041752_axiarbiter U_YSYX_22041752_AXIARBITER_0(
    .clk                            ( clk                           ),
    .reset                          ( reset                         ),
    .inst_en                        ( inst_en                       ),
    .inst_ready                     ( inst_ready                    ),
    .inst_addr                      ( inst_addr                     ),
    .inst_rdata                     ( inst_rdata                    ),
    .inst_valid                     ( inst_valid                    ),
    .data_en                        ( data_en                       ),
    .data_ready                     ( data_ready                    ),
    .data_wen                       ( data_wen                      ),
    .data_addr                      ( data_addr                     ),
    .data_wdata                     ( data_wdata                    ),
    .data_rdata                     ( data_rdata                    ),
    .data_valid                     ( data_valid                    ),
    .arid                           ( io_master_arid                ),
    .araddr                         ( io_master_araddr              ),
    .arlen                          ( io_master_arlen               ),
    .arsize                         ( io_master_arsize              ),
    .arburst                        ( io_master_arburst             ),
    .arvalid                        ( io_master_arvalid             ),
    .arready                        ( io_master_arready             ),
    .rid                            ( io_master_rid                 ),
    .rdata                          ( io_master_rdata               ),
    .rresp                          ( io_master_rresp               ),
    .rlast                          ( io_master_rlast               ),
    .rvalid                         ( io_master_rvalid              ),
    .rready                         ( io_master_rready              ),
    .awid                           ( io_master_awid                ),
    .awaddr                         ( io_master_awaddr              ),
    .awlen                          ( io_master_awlen               ),
    .awsize                         ( io_master_awsize              ),
    .awburst                        ( io_master_awburst             ),
    .awvalid                        ( io_master_awvalid             ),
    .awready                        ( io_master_awready             ),
    .wdata                          ( io_master_wdata               ),
    .wstrb                          ( io_master_wstrb               ),
    .wlast                          ( io_master_wlast               ),
    .wvalid                         ( io_master_wvalid              ),
    .wready                         ( io_master_wready              ),
    .bid                            ( io_master_bid                 ),
    .bresp                          ( io_master_bresp               ),
    .bvalid                         ( io_master_bvalid              ),
    .bready                         ( io_master_bready              )
);

endmodule
