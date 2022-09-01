`default_nettype none

module top(
    input  wire       clk,
    input  wire       rst,
    input  wire w  ,
    output wire z_moore,
    output wire z_melay
);

melay u_melay_0(
    .clk                            ( clk                           ),
    .rst                            ( rst                           ),
    .w                              ( w                             ),
    .z                              ( z_melay                             )
);

moore u_moore_0(
    .clk                            ( clk                           ),
    .rst                            ( rst                           ),
    .w                              ( w                             ),
    .z                              ( z_moore                             )
);

endmodule
