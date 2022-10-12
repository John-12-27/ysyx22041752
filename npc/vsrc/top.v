`default_nettype none

module top(
    input  wire       clk,
    input  wire       rst,
    input  wire       ps2_clk,
    input  wire       ps2_data
);

ps2_keyboard u_ps2_keyboard_0(
    .clk                            ( clk                           ),
    .rst                            (rst                            ),
    .ps2_clk                        ( ps2_clk                       ),
    .ps2_data                       ( ps2_data                      )
);

endmodule
