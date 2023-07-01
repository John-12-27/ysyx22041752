// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_DCACHE.v
// Author        : Cw
// Created On    : 2023-06-17 10:29
// Last Modified : 2023-06-30 22:01
// ---------------------------------------------------------------------------------
// Description   : 4-way set associative cache
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_DCACHE(
    input clk  ,
    input reset,

    input                                    data_en    ,
    input  [`ysyx_22041752_DATA_WEN_WD -1:0] data_wen   ,
    input  [`ysyx_22041752_DATA_ADDR_WD-1:0] data_addr  ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0] data_wdata ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0] data_rdata ,
    output                                   cache_miss ,
    output                                   write_hit  ,

    output                                   sram_req   ,
    input                                    sram_ready ,
    output [`ysyx_22041752_DATA_WEN_WD -1:0] sram_wen   ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0] sram_addr  ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0] sram_wdata ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0] sram_rdata ,
    input                                    sram_valid 
);
    
wire [`ysyx_22041752_DCACHE_EN_WD     -1:0] rden           ;
wire [                                 5:0] raddr          ;
wire                                        cmp_allowin    ;
wire                                        rs_to_cs_valid ;
wire [`ysyx_22041752_DRS_TO_DCS_BUS_WD-1:0] rs_to_cs_bus   ;

ysyx_22041752_DCACHE_RDU U_DCACHE_RDU_0(
    .data_en                        ( data_en                       ),
    .data_wen                       ( data_wen                      ),
    .data_addr                      ( data_addr                     ),
    .data_wdata                     ( data_wdata                    ),
    .cmp_allowin                    ( cmp_allowin                   ),
    .rs_to_cs_valid                 ( rs_to_cs_valid                ),
    .rs_to_cs_bus                   ( rs_to_cs_bus                  ),
    .rden                           ( rden                          ),
    .raddr                          ( raddr                         )
);

wire [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag0 ;
wire [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag1 ;
wire [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag2 ;
wire [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag3 ;
wire [128                           -1:0]  data0;
wire [128                           -1:0]  data1;
wire [128                           -1:0]  data2;
wire [128                           -1:0]  data3;
wire                                       v0   ;
wire                                       v1   ;
wire                                       v2   ;
wire                                       v3   ;
wire                                       d0   ;
wire                                       d1   ;
wire                                       d2   ;
wire                                       d3   ;
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
wire [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  wtag0 ;
wire [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  wtag1 ;
wire [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  wtag2 ;
wire [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  wtag3 ;
wire                                       wv0   ;
wire                                       wv1   ;
wire                                       wv2   ;
wire                                       wv3   ;
wire                                       wd0   ;
wire                                       wd1   ;
wire                                       wd2   ;
wire                                       wd3   ;
wire [                               5:0]  waddr0;
wire [                               5:0]  waddr1;
wire [                               5:0]  waddr2;
wire [                               5:0]  waddr3;

ysyx_22041752_DCACHE_CMP U_DCACHE_CMP_0(
    .clk            ( clk   ),
    .reset          ( reset ),

    .cmp_allowin    ( cmp_allowin           ),
    .rs_to_cs_valid ( rs_to_cs_valid        ),
    .rs_to_cs_bus   ( rs_to_cs_bus          ),

    .tag0           ( tag0                  ),
    .tag1           ( tag1                  ),
    .tag2           ( tag2                  ),
    .tag3           ( tag3                  ),

    .data0          ( data0                 ),
    .data1          ( data1                 ),
    .data2          ( data2                 ),
    .data3          ( data3                 ),

    .valid          ( {v3,v2,v1,v0}         ),
    .dirty          ( {d3,d2,d1,d0}         ),
    .wen            ( {wen3,wen2,wen1,wen0} ),

    .bwen0          ( bwen0                 ),
    .wdata0         ( wdata0                ),
    .waddr0         ( waddr0                ),
    .bwen1          ( bwen1                 ),
    .wdata1         ( wdata1                ),
    .waddr1         ( waddr1                ),
    .bwen2          ( bwen2                 ),
    .wdata2         ( wdata2                ),
    .waddr2         ( waddr2                ),
    .bwen3          ( bwen3                 ),
    .wdata3         ( wdata3                ),
    .waddr3         ( waddr3                ),
    .wtag0          ( wtag0                 ),
    .wtag1          ( wtag1                 ),
    .wtag2          ( wtag2                 ),
    .wtag3          ( wtag3                 ),
    .wv0            ( wv0                   ),
    .wv1            ( wv1                   ),
    .wv2            ( wv2                   ),
    .wv3            ( wv3                   ),
    .wd0            ( wd0                   ),
    .wd1            ( wd1                   ),
    .wd2            ( wd2                   ),
    .wd3            ( wd3                   ),

    .data_rdata     ( data_rdata            ),
    .cache_miss     ( cache_miss            ),
    .write_hit      ( write_hit             ),

    .sram_req       ( sram_req              ),
    .sram_ready     ( sram_ready            ),
    .sram_wen       ( sram_wen              ),
    .sram_addr      ( sram_addr             ),
    .sram_wdata     ( sram_wdata            ),
    .sram_rdata     ( sram_rdata            ),
    .sram_valid     ( sram_valid            )
);

// the first way data
S011HD1P_X32Y2D128_BW U_S011HD1P_X32Y2D128_BW_0(
    .Q                              ( data0                 ),
    .CLK                            ( clk                   ),
    .CEN                            ( rden[0]&wen0          ),
    .WEN                            ( wen0                  ),
    .BWEN                           ( bwen0                 ),
    .A                              (!wen0 ? waddr0 : raddr ),
    .D                              ( wdata0                )
);

// the first way tag
S011HD1P_X32Y2D128 #(.Bits(`ysyx_22041752_DCACHE_TAG_WD))
U_S011HD1P_X32Y2D128_0(
    .Q                              ( tag0                  ),
    .CLK                            ( clk                   ),
    .CEN                            ( rden[0]&wen0          ),
    .WEN                            ( wen0                  ),
    .A                              (!wen0 ? waddr0 : raddr ),
    .D                              ( wtag0                 )
);

// the first way valid 
ysyx_22041752_DCACHE_VD U_DCACHE_V_0(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           (!wen0 ? waddr0 : raddr     ),
    .o                              ( v0                        ),
    .en                             ( rden[0]&wen0              ),
    .we                             ( wen0                      ),
    .in                             ( wv0                       )
);

// the first way dirty
ysyx_22041752_DCACHE_VD U_DCACHE_D_0(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           (!wen0 ? waddr0 : raddr     ),
    .o                              ( d0                        ),
    .en                             ( rden[0]&wen0              ),
    .we                             ( wen0                      ),
    .in                             ( wd0                       )
);

// the second way data
S011HD1P_X32Y2D128_BW U_S011HD1P_X32Y2D128_BW_1(
    .Q                              ( data1                 ),
    .CLK                            ( clk                   ),
    .CEN                            ( rden[1]&wen1          ),
    .WEN                            ( wen1                  ),
    .BWEN                           ( bwen1                 ),
    .A                              (!wen1 ? waddr1 : raddr ),
    .D                              ( wdata1                )
);

// the second way tag
S011HD1P_X32Y2D128 #(.Bits(`ysyx_22041752_DCACHE_TAG_WD))
U_S011HD1P_X32Y2D128_1(
    .Q                              ( tag1                  ),
    .CLK                            ( clk                   ),
    .CEN                            ( rden[1]&wen1          ),
    .WEN                            ( wen1                  ),
    .A                              (!wen1 ? waddr1 : raddr ),
    .D                              ( wtag1                 )
);

// the second way valid
ysyx_22041752_DCACHE_VD U_DCACHE_V_1(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           (!wen1 ? waddr1 : raddr     ),
    .o                              ( v1                        ),
    .en                             ( rden[1]&wen1              ),
    .we                             ( wen1                      ),
    .in                             ( wv1                       )
);

// the second way dirty
ysyx_22041752_DCACHE_VD U_DCACHE_D_1(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           (!wen1 ? waddr1 : raddr     ),
    .o                              ( d1                        ),
    .en                             ( rden[1]&wen1              ),
    .we                             ( wen1                      ),
    .in                             ( wd1                       )
);

// the third way data
S011HD1P_X32Y2D128_BW U_S011HD1P_X32Y2D128_BW_2(
    .Q                              ( data2                     ),
    .CLK                            ( clk                       ),
    .CEN                            ( rden[2]&wen2              ),
    .WEN                            ( wen2                      ),
    .BWEN                           ( bwen2                     ),
    .A                              (!wen2 ? waddr2 : raddr     ),
    .D                              ( wdata2                    )
);

// the third way tag
S011HD1P_X32Y2D128 #(.Bits(`ysyx_22041752_DCACHE_TAG_WD))
U_S011HD1P_X32Y2D128_2(
    .Q                              ( tag2                      ),
    .CLK                            ( clk                       ),
    .CEN                            ( rden[2]&wen2              ),
    .WEN                            ( wen2                      ),
    .A                              (!wen2 ? waddr2 : raddr     ),
    .D                              ( wtag2                     )
);

// the third way valid 
ysyx_22041752_DCACHE_VD U_DCACHE_V_2(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           (!wen2 ? waddr2 : raddr     ),
    .o                              ( v2                        ),
    .en                             ( rden[2]&wen2              ),
    .we                             ( wen2                      ),
    .in                             ( wv2                       )
);

// the third way dirty
ysyx_22041752_DCACHE_VD U_DCACHE_D_2(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           (!wen2 ? waddr2 : raddr     ),
    .o                              ( d2                        ),
    .en                             ( rden[2]&wen2              ),
    .we                             ( wen2                      ),
    .in                             ( wd2                       )
);

// the fourth way data
S011HD1P_X32Y2D128_BW U_S011HD1P_X32Y2D128_BW_3(
    .Q                              ( data3                     ),
    .CLK                            ( clk),
    .CEN                            ( rden[3]&wen3              ),
    .WEN                            ( wen3                      ),
    .BWEN                           ( bwen3                     ),
    .A                              (!wen3 ? waddr3 : raddr     ),
    .D                              ( wdata3                    )
);

// the fourth way tag
S011HD1P_X32Y2D128 #(.Bits(`ysyx_22041752_DCACHE_TAG_WD))
U_S011HD1P_X32Y2D128_3(
    .Q                              ( tag3                      ),
    .CLK                            ( clk                       ),
    .CEN                            ( rden[3]&wen3              ),
    .WEN                            ( wen3                      ),
    .A                              (!wen3 ? waddr3 : raddr     ),
    .D                              ( wtag3                     )
);

// the fourth way valid 
ysyx_22041752_DCACHE_VD U_DCACHE_V_3(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           (!wen3 ? waddr3 : raddr     ),
    .o                              ( v3                        ),
    .en                             ( rden[3]&wen3              ),
    .we                             ( wen3                      ),
    .in                             ( wv3                       )
);

// the fourth way dirty
ysyx_22041752_DCACHE_VD U_DCACHE_D_3(
    .clk                            ( clk                       ),
    .reset                          ( reset                     ),
    .addr                           (!wen3 ? waddr3 : raddr     ),
    .o                              ( d3                        ),
    .en                             ( rden[3]&wen3              ),
    .we                             ( wen3                      ),
    .in                             ( wd3                       )
);
endmodule

