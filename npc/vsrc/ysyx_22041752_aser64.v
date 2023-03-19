// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_aser64.v
// Author        : Cw
// Created On    : 2022-08-24 09:46
// Last Modified : 2023-03-18 16:20
// ---------------------------------------------------------------------------------
// Description   : 64-bit adder with 4 16-bit carry lookahead adders
//
//
// -FHDR----------------------------------------------------------------------------
module ysyx_22041752_aser64 (
    input  wire [63:0] a        ,
    input  wire [63:0] b        ,
    input  wire        sub      ,
    output reg         cout     ,
    output reg  [63:0] result   
);

parameter DATA_LEN = 16;

wire        c0 ;
wire        c1 ;
wire        c2 ;
wire        c3 ;
wire [63:0] r  ;
wire [63:0] x  ;
wire [63:0] y  ;

assign x = a;
assign y = sub ? ~b : b;

ysyx_22041752_adder_p16 #(
    .DATA_LEN                       ( DATA_LEN                     ))
u_adder_p_0(
    .a                              ( x[15:0]                       ),
    .b                              ( y[15:0]                       ),
    .cin                            ( sub                           ),
    .cout                           ( c0                            ),
    .sum                            ( r[15:0]                       )
);

ysyx_22041752_adder_p16 #(
    .DATA_LEN                       ( DATA_LEN                     ))
u_adder_p_1(
    .a                              ( x[31:16]                      ),
    .b                              ( y[31:16]                      ),
    .cin                            ( c0                            ),
    .cout                           ( c1                            ),
    .sum                            ( r[31:16]                      )
);

ysyx_22041752_adder_p16 #(
    .DATA_LEN                       ( DATA_LEN                     ))
u_adder_p_2(
    .a                              ( x[47:32]                      ),
    .b                              ( y[47:32]                      ),
    .cin                            ( c1                            ),
    .cout                           ( c2                            ),
    .sum                            ( r[47:32]                      )
);

ysyx_22041752_adder_p16 #(
    .DATA_LEN                       ( DATA_LEN                     ))
u_adder_p_3(
    .a                              ( x[63:48]                      ),
    .b                              ( y[63:48]                      ),
    .cin                            ( c2                            ),
    .cout                           ( c3                            ),
    .sum                            ( r[63:48]                      )
);

always @(*) begin
    cout = c3;    
end
always @(*) begin
    result = r; 
end

endmodule
