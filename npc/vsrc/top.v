// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : top.v
// Author        : Cw
// Created On    : 2022-10-17 21:44
// Last Modified : 2023-05-29 21:54
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`default_nettype none
`include "ysyx_22041752_mycpu.vh"
module top (
    input  wire        aclk,
    input  wire        aresetn,
    
    output wire [ 3:0] arid    ,
    output wire [31:0] araddr  ,
    output wire [ 7:0] arlen   ,
    output wire [ 2:0] arsize  ,
    output wire [ 1:0] arburst ,
    output wire [ 1:0] arlock  ,
    output wire [ 3:0] arcache ,
    output wire [ 2:0] arprot  ,
    output wire        arvalid ,
    input  wire        arready ,

    input  wire [ 3:0] rid     ,
    input  wire [63:0] rdata   ,
    input  wire [ 1:0] rresp   ,
    input  wire        rlast   ,
    input  wire        rvalid  ,
    output wire        rready  ,

    output wire [ 3:0] awid    ,
    output wire [31:0] awaddr  ,
    output wire [ 7:0] awlen   ,
    output wire [ 2:0] awsize  ,
    output wire [ 1:0] awburst ,
    output wire [ 1:0] awlock  ,
    output wire [ 3:0] awcache ,
    output wire [ 2:0] awprot  ,
    output wire        awvalid ,
    input  wire        awready ,

    output wire [ 3:0] wid     ,
    output wire [63:0] wdata   ,
    output wire [ 3:0] wstrb   ,
    output wire        wlast   ,
    output wire        wvalid  ,
    input  wire        wready  ,

    input  wire [ 3:0] bid     ,
    input  wire [ 1:0] bresp   ,
    input  wire        bvalid  ,
    output wire        bready
);
   
wire              mie;
wire              mtie;
wire              int_t;
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

`ifdef DPI_C
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
`endif

wire clk = aclk;
reg reset;
always @(posedge clk or aresetn) begin
    if (!aresetn) begin
        reset <= 1;
    end
    else begin
        reset <= 0;
    end
end

// inst sram interface
wire                     inst_en   ;
wire                     inst_ready;
wire [`SRAM_ADDR_WD-1:0] inst_addr ;
wire [`SRAM_DATA_WD-1:0] inst_rdata;
// data sram interface
wire                     data_en   ;
wire                     data_ready;
wire [`SRAM_WEN_WD -1:0] data_wen  ;
wire [`SRAM_ADDR_WD-1:0] data_addr ;
wire [`SRAM_DATA_WD-1:0] data_wdata;
wire [`SRAM_DATA_WD-1:0] data_rdata;

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

`ifdef DPI_C
    ,
    .debug_fs_pc    (debug_fs_pc    )
`endif
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

`ifdef DPI_C
    ,
    .dpi_regs       ( dpi_regs       ),
    .stop           ( stop           ),
    .debug_ds_inst  ( debug_ds_inst  ) 
`endif
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

`ifdef DPI_C
    ,
    .dpi_csrs       ( dpi_csrs        ),
    .es_exp         ( debug_es_exp    ),
    .es_mret        ( debug_es_mret   ),
    .debug_es_pc    ( debug_es_pc     )
`endif
);

wire                     clint_en    = data_en;
wire                     clint_wen   = |data_wen ;
wire [`SRAM_ADDR_WD-1:0] clint_addr  = data_addr ;
wire [`SRAM_DATA_WD-1:0] clint_wdata = data_wdata;
wire [`SRAM_ADDR_WD-1:0] clint_rdata;
wire                     clint_rdat_v;

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

`ifdef DPI_C
    ,
    .debug_ws_valid    ( debug_ws_valid    ),
    .debug_wb_pc	   ( debug_wb_pc	   ),
    .debug_wb_rf_wen   ( debug_wb_rf_wen   ),
    .debug_wb_rf_wnum  ( debug_wb_rf_wnum  ),
    .debug_wb_rf_wdata ( debug_wb_rf_wdata )
`endif
);

ysyx_22041752_axiarbiter U_YSYX_22041752_AXIARBITER_0(
    .clk                            ( clk                           ),
    .reset                          ( reset                         ),
    .inst_en                        ( inst_en                       ),
    .inst_ready                     ( inst_ready                    ),
    .inst_addr                      ( inst_addr                     ),
    .inst_rdata                     ( inst_rdata                    ),
    .data_en                        ( data_en                       ),
    .data_ready                     ( data_ready                    ),
    .data_wen                       ( data_wen                      ),
    .data_addr                      ( data_addr                     ),
    .data_wdata                     ( data_wdata                    ),
    .data_rdata                     ( data_rdata                    ),
    .arid                           ( arid                          ),
    .araddr                         ( araddr                        ),
    .arlen                          ( arlen                         ),
    .arsize                         ( arsize                        ),
    .arburst                        ( arburst                       ),
    .arlock                         ( arlock                        ),
    .arcache                        ( arcache                       ),
    .arprot                         ( arprot                        ),
    .arvalid                        ( arvalid                       ),
    .arready                        ( arready                       ),
    .rid                            ( rid                           ),
    .rdata                          ( rdata                         ),
    .rresp                          ( rresp                         ),
    .rlast                          ( rlast                         ),
    .rvalid                         ( rvalid                        ),
    .rready                         ( rready                        ),
    .awid                           ( awid                          ),
    .awaddr                         ( awaddr                        ),
    .awlen                          ( awlen                         ),
    .awsize                         ( awsize                        ),
    .awburst                        ( awburst                       ),
    .awlock                         ( awlock                        ),
    .awcache                        ( awcache                       ),
    .awprot                         ( awprot                        ),
    .awvalid                        ( awvalid                       ),
    .awready                        ( awready                       ),
    .wid                            ( wid                           ),
    .wdata                          ( wdata                         ),
    .wstrb                          ( wstrb                         ),
    .wlast                          ( wlast                         ),
    .wvalid                         ( wvalid                        ),
    .wready                         ( wready                        ),
    .bid                            ( bid                           ),
    .bresp                          ( bresp                         ),
    .bvalid                         ( bvalid                        ),
    .bready                         ( bready                        )
);

`ifdef DPI_C
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
`endif

endmodule
