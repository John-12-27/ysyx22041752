// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : cntUp.v
// Author        : Cw
// Created On    : 2022-08-25 21:07
// Last Modified : 2022-10-11 15:37
// ---------------------------------------------------------------------------------
// Description   : a sync counter with T flip-flop
//
//
// -FHDR----------------------------------------------------------------------------
module cntUp #(MAX_COUNT=8)
(
    input  wire                         rst,
    input  wire                         clk,
    input  wire                         en ,
    output wire [$clog2(MAX_COUNT)-1:0] cnt  
);

wire clr;
assign clr = cnt == MAX_COUNT[$clog2(MAX_COUNT)-1:0];

genvar i;
generate
    for (i = 1; i < $clog2(MAX_COUNT); i++) begin
        :COUNT
        tff #(
            .RST_VALUE                      ( 0                            ))
        u_tff_0(
            .rst                            ( rst || clr                    ),
            .clk                            ( clk                           ),
            .t                              ( &cnt[i-1:0]                     ),
            .q                              ( cnt[i]                          )
        );
    end
endgenerate

tff #(
    .RST_VALUE                      ( 0                            ))
u_tff_0(
    .rst                            ( rst || clr                    ),
    .clk                            ( clk                           ),
    .t                              ( en                            ),
    .q                              ( cnt[0]                          )
);

endmodule
