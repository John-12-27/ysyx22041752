// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752.v
// Author        : Cw
// Created On    : 2022-10-17 21:44
// Last Modified : 2023-06-01 19:54
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752(
    input         clock,
    input         reset,

    input          io_interrupt      ,

    input          io_master_awready ,
    output         io_master_awvalid ,
    output [3:0]   io_master_awid    ,
    output [31:0]  io_master_awaddr  ,
    output [7:0]   io_master_awlen   ,
    output [2:0]   io_master_awsize  ,
    output [1:0]   io_master_awburst ,
    input          io_master_wready  ,
    output         io_master_wvalid  ,
    output [63:0]  io_master_wdata   ,
    output [7:0]   io_master_wstrb   ,
    output         io_master_wlast   ,
    output         io_master_bready  ,
    input          io_master_bvalid  ,
    input  [3:0]   io_master_bid     ,
    input  [1:0]   io_master_bresp   ,
    input          io_master_arready ,
    output         io_master_arvalid ,
    output [3:0]   io_master_arid    ,
    output [31:0]  io_master_araddr  ,
    output [7:0]   io_master_arlen   ,
    output [2:0]   io_master_arsize  ,
    output [1:0]   io_master_arburst ,
    output         io_master_rready  ,
    input          io_master_rvalid  ,
    input  [3:0]   io_master_rid     ,
    input  [63:0]  io_master_rdata   ,
    input  [1:0]   io_master_rresp   ,
    input          io_master_rlast   ,

    output         io_slave_awready ,
    input          io_slave_awvalid ,
    input  [3:0]   io_slave_awid    ,
    input  [31:0]  io_slave_awaddr  ,
    input  [7:0]   io_slave_awlen   ,
    input  [2:0]   io_slave_awsize  ,
    input  [1:0]   io_slave_awburst ,
    output         io_slave_wready  ,
    input          io_slave_wvalid  ,
    input  [63:0]  io_slave_wdata   ,
    input  [7:0]   io_slave_wstrb   ,
    input          io_slave_wlast   ,
    input          io_slave_bready  ,
    output         io_slave_bvalid  ,
    output [3:0]   io_slave_bid     ,
    output [1:0]   io_slave_bresp   ,
    output         io_slave_arready ,
    input          io_slave_arvalid ,
    input  [3:0]   io_slave_arid    ,
    input  [31:0]  io_slave_araddr  ,
    input  [7:0]   io_slave_arlen   ,
    input  [2:0]   io_slave_arsize  ,
    input  [1:0]   io_slave_arburst ,
    input          io_slave_rready  ,
    output         io_slave_rvalid  ,
    output [3:0]   io_slave_rid     ,
    output [63:0]  io_slave_rdata   ,
    output [1:0]   io_slave_rresp   ,
    output         io_slave_rlast   ,

    output [5:0]   io_sram0_addr  ,
    output         io_sram0_cen   ,
    output         io_sram0_wen   ,
    output [127:0] io_sram0_wmask ,
    output [127:0] io_sram0_wdata ,
    input  [127:0] io_sram0_rdata ,

    output [5:0]   io_sram1_addr  ,
    output         io_sram1_cen   ,
    output         io_sram1_wen   ,
    output [127:0] io_sram1_wmask ,
    output [127:0] io_sram1_wdata ,
    input  [127:0] io_sram1_rdata ,

    output [5:0]   io_sram2_addr  ,
    output         io_sram2_cen   ,
    output         io_sram2_wen   ,
    output [127:0] io_sram2_wmask ,
    output [127:0] io_sram2_wdata ,
    input  [127:0] io_sram2_rdata ,

    output [5:0]   io_sram3_addr  ,
    output         io_sram3_cen   ,
    output         io_sram3_wen   ,
    output [127:0] io_sram3_wmask ,
    output [127:0] io_sram3_wdata ,
    input  [127:0] io_sram3_rdata ,

    output [5:0]   io_sram4_addr  ,
    output         io_sram4_cen   ,
    output         io_sram4_wen   ,
    output [127:0] io_sram4_wmask ,
    output [127:0] io_sram4_wdata ,
    input  [127:0] io_sram4_rdata ,

    output [5:0]   io_sram5_addr  ,
    output         io_sram5_cen   ,
    output         io_sram5_wen   ,
    output [127:0] io_sram5_wmask ,
    output [127:0] io_sram5_wdata ,
    input  [127:0] io_sram5_rdata ,

    output [5:0]   io_sram6_addr  ,
    output         io_sram6_cen   ,
    output         io_sram6_wen   ,
    output [127:0] io_sram6_wmask ,
    output [127:0] io_sram6_wdata ,
    input  [127:0] io_sram6_rdata ,

    output [5:0]   io_sram7_addr  ,
    output         io_sram7_cen   ,
    output         io_sram7_wen   ,
    output [127:0] io_sram7_wmask ,
    output [127:0] io_sram7_wdata ,
    input  [127:0] io_sram7_rdata 
);
   
assign io_slave_awready = 1'b0;
assign io_slave_wready  = 1'b0;
assign io_slave_bvalid  = 1'b0;
assign io_slave_bid     = 4'b0;
assign io_slave_bresp   = 2'b0;
assign io_slave_arready = 1'b0;
assign io_slave_rvalid  = 1'b0;
assign io_slave_rid     = 4'b0;
assign io_slave_rdata   = 64'b0;
assign io_slave_rresp   = 2'b0;
assign io_slave_rlast   = 1'b0;
               
assign io_sram0_addr    = 6'b0;
assign io_sram0_cen     = 1'b0; 
assign io_sram0_wen     = 1'b0; 
assign io_sram0_wmask   = 128'b0; 
assign io_sram0_wdata   = 128'b0; 

assign io_sram1_addr    = 6'b0;
assign io_sram1_cen     = 1'b0; 
assign io_sram1_wen     = 1'b0; 
assign io_sram1_wmask   = 128'b0; 
assign io_sram1_wdata   = 128'b0; 

assign io_sram2_addr    = 6'b0;
assign io_sram2_cen     = 1'b0; 
assign io_sram2_wen     = 1'b0; 
assign io_sram2_wmask   = 128'b0; 
assign io_sram2_wdata   = 128'b0; 

assign io_sram3_addr    = 6'b0;
assign io_sram3_cen     = 1'b0; 
assign io_sram3_wen     = 1'b0; 
assign io_sram3_wmask   = 128'b0; 
assign io_sram3_wdata   = 128'b0; 

assign io_sram4_addr    = 6'b0;
assign io_sram4_cen     = 1'b0; 
assign io_sram4_wen     = 1'b0; 
assign io_sram4_wmask   = 128'b0; 
assign io_sram4_wdata   = 128'b0; 

assign io_sram5_addr    = 6'b0;
assign io_sram5_cen     = 1'b0; 
assign io_sram5_wen     = 1'b0; 
assign io_sram5_wmask   = 128'b0; 
assign io_sram5_wdata   = 128'b0; 

assign io_sram6_addr    = 6'b0;
assign io_sram6_cen     = 1'b0; 
assign io_sram6_wen     = 1'b0; 
assign io_sram6_wmask   = 128'b0; 
assign io_sram6_wdata   = 128'b0; 

assign io_sram7_addr    = 6'b0;
assign io_sram7_cen     = 1'b0; 
assign io_sram7_wen     = 1'b0; 
assign io_sram7_wmask   = 128'b0; 
assign io_sram7_wdata   = 128'b0; 

wire         int_t;
wire         flush;
wire [`ysyx_22041752_PC_WD-1:0] flush_pc  ;

wire         ds_allowin;
wire         es_allowin;
wire         ms_allowin;
wire         ws_allowin;
wire         fs_to_ds_valid;
wire         ds_to_es_valid;
wire         es_to_ms_valid;
wire         ms_to_ws_valid;
wire [`ysyx_22041752_FS_TO_DS_BUS_WD -1:0]   fs_to_ds_bus;
wire [`ysyx_22041752_DS_TO_ES_BUS_WD -1:0]   ds_to_es_bus;
wire [`ysyx_22041752_ES_TO_MS_BUS_WD -1:0]   es_to_ms_bus;
wire [`ysyx_22041752_MS_TO_WS_BUS_WD -1:0]   ms_to_ws_bus;
wire [`ysyx_22041752_WS_TO_RF_BUS_WD -1:0]   ws_to_rf_bus;
wire [`ysyx_22041752_BR_BUS_WD       -1:0]   br_bus;
wire [`ysyx_22041752_ES_FORWARD_BUS_WD -1:0] es_forward_bus;
wire [`ysyx_22041752_FORWARD_BUS_WD -1:0]    ms_forward_bus;
wire [`ysyx_22041752_FORWARD_BUS_WD -1:0]    ws_forward_bus;

wire clk = clock;

// fetch insts interface
wire                                   inst_en   ;
wire                                   inst_ready;
wire [`ysyx_22041752_SRAM_ADDR_WD-1:0] inst_addr ;
wire [`ysyx_22041752_SRAM_DATA_WD-1:0] inst_rdata;
// ld/store interface
wire                                   data_en   ;
wire                                   data_ready;
wire [`ysyx_22041752_SRAM_WEN_WD -1:0] data_wen  ;
wire [`ysyx_22041752_SRAM_ADDR_WD-1:0] data_addr ;
wire [`ysyx_22041752_SRAM_DATA_WD-1:0] data_wdata;
wire [`ysyx_22041752_SRAM_DATA_WD-1:0] data_rdata;

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

    .inst_en        (inst_en        ),
    .inst_ready     (inst_ready     ),
    .inst_addr      (inst_addr      ),
    .inst_rdata     (inst_rdata     ),

    .flush          (flush          ),
    .flush_pc       (flush_pc       )
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
    .flush          ( flush          )
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
    .data_en        ( data_en         ),
    .data_ready     ( data_ready      ),
    .data_wen       ( data_wen        ),
    .data_addr      ( data_addr       ),
    .data_wdata     ( data_wdata      ),
    .flush          ( flush           ),
    .flush_pc       ( flush_pc        ),
    .int_t_i        ( int_t           )
);

wire                                   clint_en    = data_en;
wire                                   clint_wen   = |data_wen ;
wire [`ysyx_22041752_SRAM_ADDR_WD-1:0] clint_addr  = data_addr ;
wire [`ysyx_22041752_SRAM_DATA_WD-1:0] clint_wdata = data_wdata;
wire [`ysyx_22041752_SRAM_ADDR_WD-1:0] clint_rdata;
wire                                   clint_rdat_v;

ysyx_22041752_clint U_YSYX_22041752_CLINT_0(
    .clk                            ( clk                           ),
    .reset                          ( reset                         ),
    .en                             ( clint_en                      ),
    .wen                            ( clint_wen                     ),
    .addr                           ( clint_addr                    ),
    .wdata                          ( clint_wdata                   ),
    .rdata                          ( clint_rdata                   ),
    .rdat_v                         ( clint_rdat_v                  ),
    .int_t_o                        ( int_t                         )
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
    .data_sram_rdata( clint_rdat_v ? clint_rdata : data_rdata ),
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
    .ws_forward_bus    ( ws_forward_bus    )
);

ysyx_22041752_axiarbiter U_YSYX_22041752_AXIARBITER_0(
    .clk                            ( clk                           ),
    .reset                          ( reset                         ),
    .inst_en                        ( inst_en                       ),
    .inst_resp                      ( inst_ready                    ),
    .inst_addr                      ( inst_addr                     ),
    .inst_rdata                     ( inst_rdata                    ),
    .data_en                        ( data_en                       ),
    .data_resp                      ( data_ready                    ),
    .data_wen                       ( data_wen                      ),
    .data_addr                      ( data_addr                     ),
    .data_wdata                     ( data_wdata                    ),
    .data_rdata                     ( data_rdata                    ),
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
