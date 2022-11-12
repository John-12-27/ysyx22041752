// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : dpi_c.v
// Author        : Cw
// Created On    : 2022-11-12 11:04
// Last Modified : 2022-11-12 19:42
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
module dpi_c (
    input  wire[31: 0] inst_i,
    input  wire[63: 0] dpi_regs [31:0],
    input  wire[63: 0] pc
);

reg [63:0] rf[31:0];
genvar i;
generate
    for (i = 0; i < 32; i++) begin
        :regfiles
        always @(*) begin
            rf[i] = dpi_regs[i];
        end
    end
endgenerate

wire [0:0] ebreak;    
assign ebreak = inst_i == 32'b0000000_00001_00000_000_00000_1110011;

import "DPI-C" context function void halt(input logic [0:0] s[]);
import "DPI-C" context function void set_gpr_ptr(input logic [63:0] a[]);
import "DPI-C" context function void set_pc_ptr(input logic [63:0] a[]);
initial set_gpr_ptr(rf);
initial set_pc_ptr(pc);
initial halt(ebreak);

endmodule
