`default_nettype none

module top(
    input  wire [31:0] a        ,
    input  wire [31:0] b        ,
    input  wire        sub      ,
    output wire [31:0] result   ,
    output wire        zero     ,
    output wire        overflow ,
    output wire        cout      
);

AdderSuber32 u_addersuber32_0(
    .a                              ( a                             ),
    .b                              ( b                             ),
    .sub                            ( sub                           ),
    .cout                           ( cout                          ),
    .result                         ( result                        ),
    .zero                           ( zero                          ),
    .overflow                       ( overflow                      )
);

endmodule
