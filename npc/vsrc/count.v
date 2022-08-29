// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : count.v
// Author        : Cw
// Created On    : 2022-08-25 21:07
// Last Modified : 2022-08-26 00:06
// ---------------------------------------------------------------------------------
// Description   : a sync counter with T flip-flop
//
//
// -FHDR----------------------------------------------------------------------------
module count #(MAX_COUNT=8, UP_COUNT=1)
(
    input  wire                         rst,
    input  wire                         clk,
    output wire [$clog2(MAX_COUNT)-1:0] q
);

genvar i;
generate
    if(UP_COUNT)begin
        for (i = 1; i < $clog2(MAX_COUNT); i++) begin
            :COUNT
            tff #(
                .RST_VALUE                      ( 0                            ))
            u_tff_0(
                .rst                            ( rst                           ),
                .clk                            ( clk                           ),
                .t                              ( &q[i-1:0]                     ),
                .q                              ( q[i]                          )
            );
        end
    end
    else begin
        for (i = 1; i < $clog2(MAX_COUNT); i++) begin
            :COUNT
            tff #(
                .RST_VALUE                      ( 1                            ))
            u_tff_0(
                .rst                            ( rst                           ),
                .clk                            ( clk                           ),
                .t                              ( ~|q[i-1:0]                    ),
                .q                              ( q[i]                          )
            );
        end
    end
endgenerate

tff #(
    .RST_VALUE                      ( 0                            ))
u_tff_0(
    .rst                            ( rst                           ),
    .clk                            ( clk                           ),
    .t                              ( 1'b1                          ),
    .q                              ( q[0]                          )
);

endmodule
