`default_nettype none

module top(
    input  wire [7:0] a        ,
    input  wire [7:0] b        ,
    input  wire       cin      ,
    output reg  [7:0] s        ,
    output reg        overflow ,
    output reg        cout      
);

adder_p #(
    .DATA_LEN                       ( 8                             ))
u_adder_p_0(
    .a                              ( a                             ),
    .b                              ( b                             ),
    .cin                            ( cin                           ),
    .cout                           ( cout                          ),
    .sum                            ( s                             ),
    .overflow                       ( overflow                      )
);

endmodule
