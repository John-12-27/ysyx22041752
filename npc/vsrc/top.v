`default_nettype none

module top(
    input  wire       clk,
    input  wire       rst,
    output wire [7:0] q1 ,
    output wire [7:0] q2
);

//alu #(
    //.DATA_LEN                       ( 32                           ))
//u_alu_0(
    //.a                              ( x                             ),
    //.b                              ( y                             ),
    //.op                             ( op                            ),
    //.overflow                       ( overflow                      ),
    //.res                            ( res                           )
//);

count #(
    .MAX_COUNT                      ( 256                           ),
    .UP_COUNT                       ( 1                            ))
u_count_0(
    .rst                            ( rst                           ),
    .clk                            ( clk                           ),
    .q                              ( q1                            )
);

count #(
    .MAX_COUNT                      ( 256                           ),
    .UP_COUNT                       ( 0                            ))
u_count_1(
    .rst                            ( rst                           ),
    .clk                            ( clk                           ),
    .q                              ( q2                            )
);

endmodule
