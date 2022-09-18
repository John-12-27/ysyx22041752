`default_nettype none

module top(
    input  wire clk     ,
    input  wire rst     ,
    input  wire ps2_clk ,
    input  wire ps2_data,
    output wire o
);

//melay u_melay_0(
    //.clk                            ( clk                           ),
    //.rst                            ( rst                           ),
    //.w                              ( w                             ),
    //.z                              ( z_melay                             )
//);

//moore u_moore_0(
    //.clk                            ( clk                           ),
    //.rst                            ( rst                           ),
    //.w                              ( w                             ),
    //.z                              ( z_moore                             )
//);

ps2_rev u_ps2_rev_0(
    .clk                            ( clk                           ),
    .rst                            ( rst                           ),
    .ps2_clk                        ( ps2_clk                       ),
    .ps2_data                       ( ps2_data                      ),
    .o                              ( o                             )
);

endmodule
