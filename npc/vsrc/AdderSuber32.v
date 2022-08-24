// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : adder32.v
// Author        : Rongye
// Created On    : 2022-08-24 09:46
// Last Modified : 2022-08-24 18:30
// ---------------------------------------------------------------------------------
// Description   : 32-bit adder with 4 8-bit carry lookahead adder
//
//
// -FHDR----------------------------------------------------------------------------
module AdderSuber32 (
    input  wire [31:0] a        ,
    input  wire [31:0] b        ,
    input  wire        sub      ,
    output reg         cout     ,
    output reg  [31:0] result   ,
    output reg         zero     ,
    output reg         overflow
);

parameter DATA_LEN = 8;

wire        c0 ;
wire        c1 ;
wire        c2 ;
wire        c3 ;
wire        ov ;
wire [31:0] r  ;
reg  [31:0] x  ;
reg  [31:0] y  ;
wire [32/DATA_LEN-1 :0] z  ;
always @(a or b or sub) begin
    x = a;
end
always @(a or b or sub) begin
    if(sub)
        y = ~b;
    else
        y = b;
end

/* verilator lint_off PINCONNECTEMPTY */
adder_p #(
    .DATA_LEN                       ( DATA_LEN                     ))
u_adder_p_0(
    .a                              ( x[7:0]                        ),
    .b                              ( y[7:0]                        ),
    .cin                            ( sub                           ),
    .cout                           ( c0                            ),
    .sum                            ( r[7:0]                        ),
    .zero                           ( z[0]                          ),
    .overflow                       (                               )
);

/* verilator lint_off PINCONNECTEMPTY */
adder_p #(
    .DATA_LEN                       ( DATA_LEN                     ))
u_adder_p_1(
    .a                              ( x[15:8]                       ),
    .b                              ( y[15:8]                       ),
    .cin                            ( c0                            ),
    .cout                           ( c1                            ),
    .sum                            ( r[15:8]                       ),
    .zero                           ( z[1]                          ),
    .overflow                       (                               )
);

/* verilator lint_off PINCONNECTEMPTY */
adder_p #(
    .DATA_LEN                       ( DATA_LEN                     ))
u_adder_p_2(
    .a                              ( x[23:16]                      ),
    .b                              ( y[23:16]                      ),
    .cin                            ( c1                            ),
    .cout                           ( c2                            ),
    .sum                            ( r[23:16]                      ),
    .zero                           ( z[2]                          ),
    .overflow                       (                               )
);

adder_p #(
    .DATA_LEN                       ( DATA_LEN                     ))
u_adder_p_3(
    .a                              ( x[31:24]                      ),
    .b                              ( y[31:24]                      ),
    .cin                            ( c2                            ),
    .cout                           ( c3                            ),
    .sum                            ( r[31:24]                      ),
    .zero                           ( z[3]                          ),
    .overflow                       ( ov                            )
);

always @(a or b or sub) begin
    zero = z[3];
end
always @(a or b or sub) begin
    cout = c3;    
end
always @(a or b or sub) begin
    result = r; 
end
always @(a or b or sub) begin
    overflow = ov;
end
always @(a or b or sub) begin
    zero = &z;
end
endmodule
