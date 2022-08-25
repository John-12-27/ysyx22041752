// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : alu.v
// Author        : Cw
// Created On    : 2022-08-24 18:45
// Last Modified : 2022-08-25 19:06
// ---------------------------------------------------------------------------------
// Description   : alu
//
//
// -FHDR----------------------------------------------------------------------------
module alu #(DATA_LEN=32)
(
    input  wire [DATA_LEN-1:0] a        ,
    input  wire [DATA_LEN-1:0] b        ,
    input  wire [2:0]          op       ,
    output wire                overflow ,
    output reg  [DATA_LEN-1:0] res
);
/* verilator lint_off UNUSED */
wire [7:0] aluop;
wire op_add;
wire op_sub;
wire op_not;
wire op_and;
wire op_or ;
wire op_xor;
wire op_less;
wire op_equ;

assign {op_add, op_sub, op_not, op_and, op_or, op_xor, op_less, op_equ} = aluop;

wire [DATA_LEN-1:0] adder_r;
reg  [DATA_LEN-1:0] not_r;
reg  [DATA_LEN-1:0] and_r;
reg  [DATA_LEN-1:0] or_r;
reg  [DATA_LEN-1:0] xor_r;
reg  [DATA_LEN-1:0] less_r;
wire [DATA_LEN-1:0] equ_r;

decode #(
    .INPUT_LEN                      ( 3                             ),
    .OUTPUT_LEN                     ( 8                             ))
u_decode_0(
    .x                              ( op                            ),
    .en                             ( 1'b1                          ),
    .y                              ( aluop                         )
);

/* verilator lint_off PINCONNECTEMPTY  */
AdderSuber32 u_addersuber32_0(
    .a                              ( a                             ),
    .b                              ( b                             ),
    .sub                            ( op_sub|op_equ|op_less         ),
    .cout                           (                               ),
    .result                         ( adder_r                       ),
    .zero                           ( equ_r[0]                      ),
    .overflow                       ( overflow                      )
);

always @(a or b or op) begin
    not_r = ~a;
end
always @(a or b or op) begin
    and_r = a&b;
end
always @(a or b or op) begin
    or_r  = a|b;
end
always @(a or b or op) begin
    xor_r = a^b;
end
always @(a or b or op) begin
    xor_r = a^b;
end
always @(a or b or op) begin
    less_r = {{DATA_LEN-1{1'b0}},overflow^adder_r[DATA_LEN-1]};
end
assign equ_r[DATA_LEN-1:1] = {DATA_LEN-1{1'b0}};
always @(a or b or op) begin
    res = adder_r&{DATA_LEN{op_add|op_sub}} | 
          not_r  &{DATA_LEN{op_not}}        |
          and_r  &{DATA_LEN{op_and}}        |
          or_r   &{DATA_LEN{op_or}}         |    
          xor_r  &{DATA_LEN{op_xor}}        |        
          less_r &{DATA_LEN{op_less}}       |    
          equ_r  &{DATA_LEN{op_equ}}        ;    
end
endmodule
