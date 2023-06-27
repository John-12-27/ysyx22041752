// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752.v
// Author        : Cw
// Created On    : 2022-10-17 21:44
// Last Modified : 2023-06-27 21:43
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752(
    input         clock,
    input         reset,

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
    input          io_master_rlast   

);
   
wire         int_t;
wire         flush;
wire         flush_pc_p4;
wire         pre_error;       
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
wire [`ysyx_22041752_PC_WD           -1:0]   ra_data     ;
wire [`ysyx_22041752_FORWARD_BUS_WD -1:0]    es_forward_bus;
wire [`ysyx_22041752_FORWARD_BUS_WD-1:0]     ms_forward_bus;
wire [`ysyx_22041752_WS_FORWARD_BUS_WD -1:0] ws_forward_bus;

`ifdef DPI_C
// trace debug interface
wire [`ysyx_22041752_PC_WD       -1:0] debug_wb_pc      ;
wire [`ysyx_22041752_PC_WD       -1:0] debug_es_pc      ;
wire                                   debug_es_bjpre_error; 
wire                                   debug_es_bj_inst ; 
wire                                   debug_es_exp     ;
wire                                   debug_es_mret    ;
wire                                   debug_es_data_ren;
wire                                   debug_es_data_wen;
wire [`ysyx_22041752_DATA_ADDR_WD-1:0] debug_es_data_addr;
wire [`ysyx_22041752_DATA_DATA_WD-1:0] debug_es_data_wdata;
wire                                   debug_ws_valid   ;
wire [`ysyx_22041752_INST_WD     -1:0] debug_ds_inst    ;
wire [`ysyx_22041752_INST_WD     -1:0] debug_es_inst    ;
wire [`ysyx_22041752_INST_WD     -1:0] debug_ms_inst    ;
wire [`ysyx_22041752_DATA_DATA_WD-1:0] debug_ms_data_rdata;
wire                                   debug_ms_rdata_valid;
wire [`ysyx_22041752_INST_WD     -1:0] debug_ws_inst    ;
wire                                   debug_es_out_of_mem;
wire                                   debug_ms_out_of_mem;
wire                                   debug_ws_out_of_mem;
wire                                   debug_wb_rf_wen  ;
wire [`ysyx_22041752_RF_ADDR_WD  -1:0] debug_wb_rf_wnum ;
wire [`ysyx_22041752_RF_DATA_WD  -1:0] debug_wb_rf_wdata;
wire [`ysyx_22041752_RF_DATA_WD  -1:0] dpi_regs [`ysyx_22041752_RF_NUM-1:0];
wire [`ysyx_22041752_RF_DATA_WD  -1:0] dpi_csrs [3:0];
wire [                            0:0] stop;
`endif

wire clk = clock;

// fetch insts interface
wire                                   inst_en   ;
wire [`ysyx_22041752_DATA_ADDR_WD-1:0] inst_addr ;
wire [`ysyx_22041752_INST_WD-1:0]      inst_rdata;
wire                                   icache_miss;
// ld/store interface
wire                                   data_en   ;
wire [`ysyx_22041752_DATA_WEN_WD -1:0] data_wen  ;
wire [`ysyx_22041752_DATA_ADDR_WD-1:0] data_addr ;
wire [`ysyx_22041752_DATA_DATA_WD-1:0] data_wdata;
wire [`ysyx_22041752_DATA_DATA_WD-1:0] data_rdata;
wire                                   dcache_miss;
wire                                   write_hit ;

// IF stage
ysyx_22041752_IFU U_IFU_0(
    .clk            (clk            ),
    .reset          (reset          ),
    //allowin
    .ds_allowin     (ds_allowin     ),
    //outputs
    .fs_to_ds_valid (fs_to_ds_valid ),
    .fs_to_ds_bus   (fs_to_ds_bus   ),

    .inst_en        (inst_en        ),
    .inst_addr      (inst_addr      ),
    .inst_rdata     (inst_rdata     ),
    .cache_miss     (icache_miss    ) ,

    .ra_data        (ra_data        ),
    .flush          (flush|pre_error),
    .flush_pc_p4    (flush_pc_p4    ),
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
    .ws_to_rf_bus   ( ws_to_rf_bus   ),
    .es_forward_bus ( es_forward_bus ),
    .ms_forward_bus ( ms_forward_bus ),
    .ws_forward_bus ( ws_forward_bus ),
    .ra_data        ( ra_data        ),
    .flush          ( flush|pre_error)
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
    .data_wen       ( data_wen        ),
    .data_addr      ( data_addr       ),
    .data_wdata     ( data_wdata      ),
    .write_hit      ( write_hit       ),
    .flush          ( flush           ),
    .flush_pc       ( flush_pc        ),
    .int_t_i        ( int_t           ),
    .flush_pc_p4    ( flush_pc_p4     ),
    .bjpre_error    ( pre_error       )
`ifdef DPI_C
    ,
    .debug_es_bjpre_error(debug_es_bjpre_error),
    .dpi_csrs            ( dpi_csrs        ),
    .es_exp              ( debug_es_exp    ),
    .es_mret             ( debug_es_mret   ),
    .debug_es_bj_inst    ( debug_es_bj_inst),
    .debug_es_data_addr  ( debug_es_data_addr),
    .debug_es_out_of_mem ( debug_es_out_of_mem),
    .debug_es_data_ren   ( debug_es_data_ren),
    .debug_es_data_wen   ( debug_es_data_wen),
    .debug_es_data_wdata ( debug_es_data_wdata),
    .debug_es_pc         ( debug_es_pc     ),
    .debug_ds_inst       ( debug_ds_inst   ),
    .debug_es_inst       ( debug_es_inst   )
`endif
);

wire                                   clint_en    = data_en;
wire                                   clint_wen   = |data_wen ;
wire [`ysyx_22041752_DATA_ADDR_WD-1:0] clint_addr  = data_addr ;
wire [`ysyx_22041752_DATA_DATA_WD-1:0] clint_wdata = data_wdata;
wire [`ysyx_22041752_DATA_DATA_WD-1:0] clint_rdata;
wire                                   clint_rdat_v;

ysyx_22041752_clint U_CLINT_0(
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
    .data_rdata     ( clint_rdat_v ? clint_rdata : data_rdata ),
    .cache_miss     ( clint_rdat_v ? 0           : dcache_miss),
    .ms_forward_bus ( ms_forward_bus  )
`ifdef DPI_C
    ,
    .debug_es_inst  ( debug_es_inst   ),
    .debug_ms_inst  ( debug_ms_inst   ),
    .debug_ms_data_rdata    (debug_ms_data_rdata),
    .debug_es_out_of_mem    (debug_es_out_of_mem),
    .debug_ms_out_of_mem    (debug_ms_out_of_mem),
    .debug_ms_rdata_valid   (debug_ms_rdata_valid)
`endif
);

// WB stage
ysyx_22041752_WBU U_WBU_0(
    .clk                    ( clk               ),
    .reset                  ( reset             ),
    .ws_allowin             ( ws_allowin        ),
    .ms_to_ws_valid         ( ms_to_ws_valid    ),
    .ms_to_ws_bus           ( ms_to_ws_bus      ),
    .ws_to_rf_bus           ( ws_to_rf_bus      ),
    .ws_forward_bus         ( ws_forward_bus    )
`ifdef DPI_C
    ,
    .debug_ws_valid         ( debug_ws_valid    ),
    .debug_ms_inst          ( debug_ms_inst     ),
    .debug_ms_out_of_mem    (debug_ms_out_of_mem),
    .debug_ws_inst          ( debug_ws_inst     ),
    .debug_ws_out_of_mem    (debug_ws_out_of_mem),
    .debug_wb_pc	        ( debug_wb_pc	    ),
    .debug_wb_rf_wen        ( debug_wb_rf_wen   ),
    .debug_wb_rf_wnum       ( debug_wb_rf_wnum  ),
    .debug_wb_rf_wdata      ( debug_wb_rf_wdata )
`endif
);

wire                                   icache_req       ;
wire [`ysyx_22041752_DATA_ADDR_WD-1:0] icache_req_addr  ;
wire                                   icache_ready     ;
wire                                   icache_valid     ;
wire [`ysyx_22041752_DATA_DATA_WD-1:0] icache_rdata     ;
ysyx_22041752_ICACHE U_ICACHE_0(
    .clk                            ( clk                           ),
    .reset                          ( reset                         ),
    .flush                          ( flush|pre_error               ),
    .inst_en                        ( inst_en                       ),
    .inst_addr                      ( inst_addr                     ),
    .inst_rdata                     ( inst_rdata                    ),
    .cache_miss                     ( icache_miss                   ),
    .sram_req                       ( icache_req                    ),
    .sram_ready                     ( icache_ready                  ),
    .sram_addr                      ( icache_req_addr               ),
    .sram_rdata                     ( icache_rdata                  ),
    .sram_valid                     ( icache_valid                  )
);

wire                                   dcache_req   ;
wire                                   dcache_ready ;
wire                                   dcache_wen   ;
wire [`ysyx_22041752_DATA_ADDR_WD-1:0] dcache_addr  ;
wire [`ysyx_22041752_DATA_DATA_WD-1:0] dcache_wdata ;
wire [`ysyx_22041752_DATA_DATA_WD-1:0] dcache_rdata ;
wire                                   dcache_valid ;
ysyx_22041752_DCACHE U_DCACHE_0(
    .clk                            ( clk                           ),
    .reset                          ( reset                         ),
    .data_en                        ( data_en                       ),
    .data_wen                       ( data_wen                      ),
    .data_addr                      ( data_addr                     ),
    .data_wdata                     ( data_wdata                    ),
    .data_rdata                     ( data_rdata                    ),
    .cache_miss                     ( dcache_miss                   ),
    .write_hit                      ( write_hit                     ),
    .sram_req                       ( dcache_req                    ),
    .sram_ready                     ( dcache_ready                  ),
    .sram_wen                       ( dcache_wen                    ),
    .sram_addr                      ( dcache_addr                   ),
    .sram_wdata                     ( dcache_wdata                  ),
    .sram_rdata                     ( dcache_rdata                  ),
    .sram_valid                     ( dcache_valid                  )
);

ysyx_22041752_axiarbiter U_AXIARBITER_0(
    .clk                            ( clk                           ),
    .reset                          ( reset                         ),
    .inst_en                        ( icache_req                    ),
    .inst_ready                     ( icache_ready                  ),
    .inst_addr                      ( icache_req_addr               ),
    .inst_rdata                     ( icache_rdata                  ),
    .inst_valid                     ( icache_valid                  ),
    .data_en                        ( dcache_req                    ),
    .data_ready                     ( dcache_ready                  ),
    .data_wen                       ( dcache_wen                    ),
    .data_addr                      ( dcache_addr                   ),
    .data_wdata                     ( dcache_wdata                  ),
    .data_rdata                     ( dcache_rdata                  ),
    .data_valid                     ( dcache_valid                  ),
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

`ifdef DPI_C
dpi_c u_dpi_c(
    .clk                    (  clk                       ),
    .stop                   (  stop                      ),
    .ws_valid               (  debug_ws_valid            ),
    .dpi_regs               (  dpi_regs                  ),
    .dpi_csrs               (  dpi_csrs                  ),
    .debug_wb_pc            ( {32'd0,debug_wb_pc}        ),
    .debug_es_pc            ( {32'd0,debug_es_pc}        ),
    .debug_es_bjpre_error   ( debug_es_bjpre_error       ),
    .debug_es_bj_inst       ( debug_es_bj_inst           ),
    .debug_es_exp           ( debug_es_exp               ),
    .debug_es_mret          ( debug_es_mret              ),
    .debug_es_data_ren      ( debug_es_data_ren          ),
    .debug_es_data_wen      ( debug_es_data_wen          ),
    .debug_ms_rdata_valid   ( debug_ms_rdata_valid       ),
    .debug_ms_data_rdata    ( debug_ms_data_rdata        ),
    .debug_es_data_addr     ( {32'b0,debug_es_data_addr} ),
    .debug_es_data_wdata    ( debug_es_data_wdata        ),
    .debug_ws_inst          ( debug_ws_inst              ),
    .debug_ws_out_of_mem    ( debug_ws_out_of_mem        ),
    .debug_es_inst          ( debug_es_inst              ),
    .debug_wb_rf_wen        ( debug_wb_rf_wen            ),
    .debug_wb_rf_wnum       ( debug_wb_rf_wnum           ),
    .debug_wb_rf_wdata      ( debug_wb_rf_wdata          )
);
`endif

endmodule
