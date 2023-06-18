// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_ICACHE.v
// Author        : Cw
// Created On    : 2023-06-17 10:29
// Last Modified : 2023-06-17 23:00
// ---------------------------------------------------------------------------------
// Description   : 2-way set associative cache
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_ICACHE(
    input clk  ,
    input reset,
    input flush,

    input                                    inst_en    ,
    input  [`ysyx_22041752_PC_WD  -1:0]      inst_addr  ,
    output [`ysyx_22041752_INST_WD-1:0]      inst_rdata ,
    output                                   cache_miss ,

    output                                   sram_req   ,
    input                                    sram_ready ,
    output [`ysyx_22041752_SRAM_ADDR_WD-1:0] sram_addr  ,
    input  [`ysyx_22041752_SRAM_DATA_WD-1:0] sram_rdata ,
    input                                    sram_valid 
);
    
wire [`ysyx_22041752_ICACHE_EN_WD   -1:0] rden       ;
wire [                               5:0] raddr      ;

wire                                      cmp_allowin    ;
wire                                      rs_to_cs_valid ;
wire [`ysyx_22041752_RS_TO_CS_BUS_WD-1:0] rs_to_cs_bus   ;

ysyx_22041752_ICACHE_RDU U_ICACHE_RDU_0(
    .inst_en                ( inst_en                       ),
    .inst_addr              ( inst_addr                     ),
    .cmp_allowin            ( cmp_allowin                   ),
    .rs_to_cs_valid         ( rs_to_cs_valid                ),
    .rs_to_cs_bus           ( rs_to_cs_bus                  ),
    .rden                   ( rden                          ),
    .raddr                  ( raddr                         )
);

wire [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  tag0 ;
wire [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  tag1 ;
wire [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  tag2 ;
wire [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  tag3 ;
wire [128                           -1:0]  data0;
wire [128                           -1:0]  data1;
wire [128                           -1:0]  data2;
wire [128                           -1:0]  data3;
wire                                       v0   ;
wire                                       v1   ;
wire                                       v2   ;
wire                                       v3   ;
wire                                       wen0 ;
wire                                       wen1 ;
wire                                       wen2 ;
wire                                       wen3 ;
wire [128                           -1:0]  bwen0;
wire [128                           -1:0]  bwen1;
wire [128                           -1:0]  bwen2;
wire [128                           -1:0]  bwen3;
wire [128                           -1:0]  wdata0;         
wire [128                           -1:0]  wdata1;         
wire [128                           -1:0]  wdata2;         
wire [128                           -1:0]  wdata3;         
wire [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  wtag0 ;
wire [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  wtag1 ;
wire [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  wtag2 ;
wire [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  wtag3 ;
wire                                       wv0   ;
wire                                       wv1   ;
wire                                       wv2   ;
wire                                       wv3   ;
wire [                               5:0]  waddr0;
wire [                               5:0]  waddr1;
wire [                               5:0]  waddr2;
wire [                               5:0]  waddr3;

ysyx_22041752_ICACHE_CMP U_ICACHE_CMP_0(
    .clk    ( clk   ),
    .reset  ( reset ),
    .flush  ( flush ),

    .cmp_allowin    ( cmp_allowin    ),
    .rs_to_cs_valid ( rs_to_cs_valid ),
    .rs_to_cs_bus   ( rs_to_cs_bus   ),

    .tag0           ( tag0           ),
    .tag1           ( tag1           ),
    .tag2           ( tag2           ),
    .tag3           ( tag3           ),

    .data0          ( data0          ),
    .data1          ( data1          ),
    .data2          ( data2          ),
    .data3          ( data3          ),

    .valid          ( {v3,v2,v1,v0}  ),
    .wen            ( {wen3,wen2,wen1,wen0}),

    .bwen0          ( bwen0          ),
    .wdata0         ( wdata0         ),
    .waddr0         ( waddr0         ),
    .bwen1          ( bwen1          ),
    .wdata1         ( wdata1         ),
    .waddr1         ( waddr1         ),
    .bwen2          ( bwen2          ),
    .wdata2         ( wdata2         ),
    .waddr2         ( waddr2         ),
    .bwen3          ( bwen3          ),
    .wdata3         ( wdata3         ),
    .waddr3         ( waddr3         ),
    .wtag0          ( wtag0          ),
    .wtag1          ( wtag1          ),
    .wtag2          ( wtag2          ),
    .wtag3          ( wtag3          ),
    .wv0            ( wv0            ),
    .wv1            ( wv1            ),
    .wv2            ( wv2            ),
    .wv3            ( wv3            ),

    .inst_rdata     ( inst_rdata     ),
    .cache_miss     ( cache_miss     ),

    .sram_req       ( sram_req       ),
    .sram_ready     ( sram_ready     ),
    .sram_addr      ( sram_addr      ),
    .sram_rdata     ( sram_rdata     ),
    .sram_valid     ( sram_valid     )
);

// the first way data
S011HD1P_X32Y2D128_BW U_S011HD1P_X32Y2D128_BW_0(
    .Q                              ( data0                 ),
    .CLK                            ( clk                   ),
    .CEN                            ( rden[0]|wen0          ),
    .WEN                            ( wen0                  ),
    .BWEN                           ( bwen0                 ),
    .A                              ( wen0 ? waddr0 : raddr ),
    .D                              ( wdata0                )
);

S011HD1P_X32Y2D128_BW U_S011HD1P_X32Y2D128_BW_1(
    .Q                              ( data1                 ),
    .CLK                            ( clk                   ),
    .CEN                            ( rden[1]|wen1          ),
    .WEN                            ( wen1                  ),
    .BWEN                           ( bwen1                 ),
    .A                              ( wen1 ? waddr1 : raddr ),
    .D                              ( wdata1                )
);

// the first way tag
S011HD1P_X32Y2D128 #(.Bits(`ysyx_22041752_ICACHE_TAG_WD))
U_S011HD1P_X32Y2D128_0(
    .Q                              ( tag0                  ),
    .CLK                            ( clk                   ),
    .CEN                            ( rden[0]|wen0          ),
    .WEN                            ( wen0                  ),
    .A                              ( wen0 ? waddr0 : raddr ),
    .D                              ( wtag0                 )
);

S011HD1P_X32Y2D128 #(.Bits(`ysyx_22041752_ICACHE_TAG_WD))
U_S011HD1P_X32Y2D128_1(
    .Q                              ( tag1                  ),
    .CLK                            ( clk                   ),
    .CEN                            ( rden[1]|wen1          ),
    .WEN                            ( wen1                  ),
    .A                              ( wen1 ? waddr1 : raddr ),
    .D                              ( wtag1                 )
);

// the first way valid 
ysyx_22041752_ICACHE_V U_YSYX_22041752_ICACHE_V_0(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           ( wen0 ? waddr0 : raddr     ),
    .v_o                            ( v0                        ),
    .we                             ( wen0                      ),
    .v_i                            ( wv0                       )
);
ysyx_22041752_ICACHE_V U_YSYX_22041752_ICACHE_V_1(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           ( wen1 ? waddr1 : raddr     ),
    .v_o                            ( v1                        ),
    .we                             ( wen1                      ),
    .v_i                            ( wv1                       )
);


/*=================================================================================*/
/*=================================================================================*/
/*=================================================================================*/

// the second way data
S011HD1P_X32Y2D128_BW U_S011HD1P_X32Y2D128_BW_2(
    .Q                              ( data2                     ),
    .CLK                            ( clk                       ),
    .CEN                            ( rden[2]|wen2              ),
    .WEN                            ( wen2                      ),
    .BWEN                           ( bwen2                     ),
    .A                              ( wen2 ? waddr2 : raddr     ),
    .D                              ( wdata2                    )
);

S011HD1P_X32Y2D128_BW U_S011HD1P_X32Y2D128_BW_3(
    .Q                              ( data3                     ),
    .CLK                            ( clk),
    .CEN                            ( rden[3]|wen3              ),
    .WEN                            ( wen3                      ),
    .BWEN                           ( bwen3                     ),
    .A                              ( wen3 ? waddr3 : raddr     ),
    .D                              ( wdata3                    )
);

// the second way tag
S011HD1P_X32Y2D128 #(.Bits(`ysyx_22041752_ICACHE_TAG_WD))
U_S011HD1P_X32Y2D128_2(
    .Q                              ( tag2                      ),
    .CLK                            ( clk                       ),
    .CEN                            ( rden[2]|wen2              ),
    .WEN                            ( wen2                      ),
    .A                              ( wen2 ? waddr2 : raddr     ),
    .D                              ( wtag2                     )
);

S011HD1P_X32Y2D128 #(.Bits(`ysyx_22041752_ICACHE_TAG_WD))
U_S011HD1P_X32Y2D128_3(
    .Q                              ( tag3                      ),
    .CLK                            ( clk                       ),
    .CEN                            ( rden[3]|wen3              ),
    .WEN                            ( wen3                      ),
    .A                              ( wen3 ? waddr3 : raddr     ),
    .D                              ( wtag3                     )
);

// the second way valid 
ysyx_22041752_ICACHE_V U_YSYX_22041752_ICACHE_V_2(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           ( wen2 ? waddr2 : raddr     ),
    .v_o                            ( v2                        ),
    .we                             ( wen2                      ),
    .v_i                            ( wv2                       )
);
ysyx_22041752_ICACHE_V U_YSYX_22041752_ICACHE_V_3(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           ( wen3 ? waddr3 : raddr     ),
    .v_o                            ( v3                        ),
    .we                             ( wen3                      ),
    .v_i                            ( wv3                       )
);

endmodule

