// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_alu.v
// Author        : Cw
// Created On    : 2022-11-19 18:06
// Last Modified : 2023-05-29 15:44
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_alu(
`ifndef DPI_C
    input  wire        clk         ,
    input  wire        reset       , 
    input  wire        flush       ,
`endif
    input  wire        mul_u       ,
    input  wire        mul_su      ,
    input  wire        div_u       , 
    input  wire        mul_h       ,
    input  wire        op_mul      ,     
    input  wire        op_div      ,
    input  wire        op_rem      ,
    input  wire        op_add      ,
    input  wire        op_sub      ,
    input  wire        op_slt      ,
    input  wire        op_sltu     ,
    input  wire        op_and      ,
    input  wire        op_or       ,
    input  wire        op_xor      ,
    input  wire        op_sll      ,
    input  wire        op_srl      ,
    input  wire        op_sra      ,
    input  wire        res_sext    ,
    input  wire [63:0] alu_src1    ,
    input  wire [63:0] alu_src2    ,
    output wire [63:0] alu_result  ,
    output wire [63:0] mem_result  ,
    output wire        div_out_valid,
    output wire        mul_out_valid
    //output wire [63:0] mul_result
);

wire [63:0] mul_result;
wire [63:0] div_result;
wire [63:0] rem_result;
    
wire [ 63:0] r_slt; 
wire [ 63:0] r_and;
wire [ 63:0] r_or ;
wire [ 63:0] r_xor;
wire [ 63:0] r_sll; 
wire [ 63:0] r_srl; 
/* verilator lint_off UNUSEDSIGNAL */
wire [127:0] r_sra; 

// 64-bit adder
wire [63:0] adder_a;
wire [63:0] adder_b;
wire        adder_cin;
wire [63:0] adder_result;
wire        adder_cout;

assign adder_a   = alu_src1;
assign adder_b   = alu_src2;
assign adder_cin = op_sub | op_slt | op_sltu;
ysyx_22041752_aser U_ASER_0(
    .a          ( adder_a      ),
    .b          ( adder_b      ),
    .sub        ( adder_cin    ),
    .cout       ( adder_cout   ),
    .result     ( adder_result )
);

// SLT result
assign r_slt[63:1] = 63'b0;
assign r_slt[0]    = op_sltu ? ~adder_cout : adder_result[63];

// bitwise operation
assign r_and = alu_src1 &  alu_src2;
assign r_or  = alu_src1 |  alu_src2; 
assign r_xor = alu_src1 ^  alu_src2; 
assign r_sll = alu_src1 << alu_src2; 
assign r_srl = alu_src1 >> alu_src2; 
assign r_sra = (res_sext ? {{96{alu_src1[31]}}, alu_src1[31:0]} : {{64{alu_src1[63]}}, alu_src1}) >> alu_src2;

wire [63:0] res;
assign res = ({64{op_add|op_sub }}&{adder_result[63:0]})
            |({64{op_slt|op_sltu}}&{r_slt       [63:0]})
            |({64{op_and        }}&{r_and       [63:0]})
            |({64{op_or         }}&{r_or        [63:0]})
            |({64{op_xor        }}&{r_xor       [63:0]})
            |({64{op_sll        }}&{r_sll       [63:0]})
            |({64{op_srl        }}&{r_srl       [63:0]})
            |({64{op_sra        }}&{r_sra       [63:0]})
            |({64{op_mul        }}&{mul_result})
            |({64{op_div        }}&{div_result})
            |({64{op_rem        }}&{rem_result});
assign alu_result = res_sext ? {{32{res[31]}}, res[31:0]} : res;

assign mem_result = adder_result;

ysyx_22041752_mul U_MUL_0(
`ifndef DPI_C
    .clk            ( clk        ),
    .reset          ( reset      ),
    .flush          ( flush      ),
`endif
    .mul_u          ( mul_u      ),
    .mul_su         ( mul_su     ),
    .mul_h          ( mul_h      ),
    .mul_valid      ( op_mul     ),
    .multiplicand   ( alu_src1   ),
    .multiplier     ( alu_src2   ),
    .product        ( mul_result ),
    .out_valid      ( mul_out_valid)
);

ysyx_22041752_diver U_DIVER_0(
`ifndef DPI_C
    .clk        ( clk        ),
    .reset      ( reset      ),
    .flush      ( flush      ),
`endif
    .dividend   ( alu_src1   ),
    .divisor    ( alu_src2   ),
    .div_valid  ( op_div|op_rem ),
    .div_signed (~div_u      ),
    .out_valid  ( div_out_valid  ),
    .quotient   ( div_result ),
    .remainder  ( rem_result )
);

endmodule
