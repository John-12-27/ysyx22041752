// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_alu.v
// Author        : Cw
// Created On    : 2022-11-19 18:06
// Last Modified : 2023-06-06 09:02
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_alu(
`ifndef DPI_C
    input         clk         ,
    input         reset       , 
    input         flush       ,
`endif
    input         mul_u        ,
    input         mul_su       ,
    input         div_u        , 
    input         mul_h        ,
    input         beq          ,  
    input         bne          ,  
    input         blt          ,  
    input         bge          ,  
    input         bltu         ,  
    input         bgeu         ,  
    input         op_mul       ,     
    input         op_div       ,
    input         op_rem       ,
    input         op_add       ,
    input         op_sub       ,
    input         op_slt       ,
    input         op_sltu      ,
    input         op_and       ,
    input         op_or        ,
    input         op_xor       ,
    input         op_sll       ,
    input         op_srl       ,
    input         op_sra       ,
    input         res_sext     ,
    input  [63:0] alu_src1     ,
    input  [63:0] alu_src2     ,
    output [63:0] alu_result   ,
    output [63:0] mem_result   ,
    output        div_out_valid,
    output        mul_out_valid
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
/* verilator lint_on UNUSEDSIGNAL */

// 64-bit adder
wire [63:0] adder_a;
wire [63:0] adder_b;
wire        adder_cin;
wire [63:0] adder_result;
wire        adder_cout;

assign adder_a   = alu_src1;
assign adder_b   = alu_src2;
assign adder_cin = op_sub | op_slt | op_sltu;
ysyx_22041752_aser #(.WIDTH (64))
U_ASER_0(
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


wire rs1_eq_rs2 ;
wire rs1_l_rs2  ;
wire rs1u_l_rs2u;

assign rs1u_l_rs2u=~adder_cout;
assign rs1_l_rs2  = adder_result[63];
assign rs1_eq_rs2 = alu_src1==alu_src2;


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
            |({64{op_rem        }}&{rem_result})
            |({64{beq & rs1_eq_rs2}})
            |({64{bne &!rs1_eq_rs2}})
            |({64{blt & rs1_l_rs2}})
            |({64{bge &!rs1_l_rs2}})
            |({64{bltu& rs1u_l_rs2u}})
            |({64{bgeu&!rs1u_l_rs2u}});
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
