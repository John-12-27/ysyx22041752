// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_IDU.v
// Author        : Cw
// Created On    : 2022-10-17 21:00
// Last Modified : 2022-11-12 11:18
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
module ysyx_22041752_IDU (
    input  wire [31: 0] inst_i,
    output wire [ 4: 0] addr_reg1,
    output wire         add_op,
    output wire [ 4: 0] addr_dest,
    output wire [63: 0] imm_src
);

wire [ 6: 0] opcode; //0010011
wire [ 4: 0] rd;
wire [ 4: 0] rs1;
wire [ 2: 0] funct3;//000
wire [11: 0] imm;

assign {imm, rs1, funct3, rd, opcode} = inst_i;
assign add_op = (opcode == 7'b0010011) && (funct3 == 3'b000);
assign addr_dest = rd;
assign addr_reg1 = rs1;
assign imm_src = {{52{imm[11]}},imm};

endmodule
