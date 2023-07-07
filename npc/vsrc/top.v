// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : top.v
// Author        : Cw
// Created On    : 2022-10-17 21:44
// Last Modified : 2023-07-07 12:39
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module top (
    input         clk  ,
    input         reset,

    output                                   sram_ren   ,
    output [							7:0] sram_wen   ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0] sram_waddr ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0] sram_raddr ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0] sram_wdata ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0] sram_rdata
    
);

wire         awready ;
wire         awvalid ;
wire [3:0]   awid    ;
wire [31:0]  awaddr  ;
wire [7:0]   awlen   ;
wire [2:0]   awsize  ;
wire [1:0]   awburst ;
wire         wready  ;
wire         wvalid  ;
wire [63:0]  wdata   ;
wire [7:0]   wstrb   ;
wire         wlast   ;
wire         bready  ;
wire         bvalid  ;
wire [3:0]   bid     ;
wire [1:0]   bresp   ;
wire         arready ;
wire         arvalid ;
wire [3:0]   arid    ;
wire [31:0]  araddr  ;
wire [7:0]   arlen   ;
wire [2:0]   arsize  ;
wire [1:0]   arburst ;
wire         rready  ;
wire         rvalid  ;
wire [3:0]   rid     ;
wire [63:0]  rdata   ;
wire [1:0]   rresp   ;
wire         rlast   ;

ysyx_22041752 U_YSYX_22041752_0(
    .clock                          ( clk                 ),
    .reset                          ( reset               ),
    .io_master_awready              ( awready             ),
    .io_master_awvalid              ( awvalid             ),
    .io_master_awid                 ( awid                ),
    .io_master_awaddr               ( awaddr              ),
    .io_master_awlen                ( awlen               ),
    .io_master_awsize               ( awsize              ),
    .io_master_awburst              ( awburst             ),
    .io_master_wready               ( wready              ),
    .io_master_wvalid               ( wvalid              ),
    .io_master_wdata                ( wdata               ),
    .io_master_wstrb                ( wstrb               ),
    .io_master_wlast                ( wlast               ),
    .io_master_bready               ( bready              ),
    .io_master_bvalid               ( bvalid              ),
    .io_master_bid                  ( bid                 ),
    .io_master_bresp                ( bresp               ),
    .io_master_arready              ( arready             ),
    .io_master_arvalid              ( arvalid             ),
    .io_master_arid                 ( arid                ),
    .io_master_araddr               ( araddr              ),
    .io_master_arlen                ( arlen               ),
    .io_master_arsize               ( arsize              ),
    .io_master_arburst              ( arburst             ),
    .io_master_rready               ( rready              ),
    .io_master_rvalid               ( rvalid              ),
    .io_master_rid                  ( rid                 ),
    .io_master_rdata                ( rdata               ),
    .io_master_rresp                ( rresp               ),
    .io_master_rlast                ( rlast               )
);

axi_ram U_RAM_0(
    .clk                            ( clk     ),
    .s_axi_awid                     ( awid    ),
    .s_axi_awaddr                   ( awaddr  ),
    .s_axi_awlen                    ( awlen   ),
    .s_axi_awsize                   ( awsize  ),
    .s_axi_awburst                  ( awburst ),
    .s_axi_awvalid                  ( awvalid ),
    .s_axi_awready                  ( awready ),
    .s_axi_wdata                    ( wdata   ),
    .s_axi_wstrb                    ( wstrb   ),
    .s_axi_wlast                    ( wlast   ),
    .s_axi_wvalid                   ( wvalid  ),
    .s_axi_wready                   ( wready  ),
    .s_axi_bid                      ( bid     ),
    .s_axi_bresp                    ( bresp   ),
    .s_axi_bvalid                   ( bvalid  ),
    .s_axi_bready                   ( bready  ),
    .s_axi_arid                     ( arid    ),
    .s_axi_araddr                   ( araddr  ),
    .s_axi_arlen                    ( arlen   ),
    .s_axi_arsize                   ( arsize  ),
    .s_axi_arburst                  ( arburst ),
    .s_axi_arvalid                  ( arvalid ),
    .s_axi_arready                  ( arready ),
    .s_axi_rid                      ( rid     ),
    .s_axi_rdata                    ( rdata   ),
    .s_axi_rresp                    ( rresp   ),
    .s_axi_rlast                    ( rlast   ),
    .s_axi_rvalid                   ( rvalid  ),
    .s_axi_rready                   ( rready  ),
    .sram_ren                       ( sram_ren   ),
    .sram_wen                       ( sram_wen   ),
    .sram_waddr                     ( sram_waddr ),
    .sram_raddr                     ( sram_raddr ),
    .sram_wdata                     ( sram_wdata ),
    .sram_rdata                     ( sram_rdata ) 
);

endmodule

