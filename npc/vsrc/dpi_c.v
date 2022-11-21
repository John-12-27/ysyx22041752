// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : dpi_c.v
// Author        : Cw
// Created On    : 2022-11-12 11:04
// Last Modified : 2022-11-21 21:54
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module dpi_c (
    input  wire                  stop           ,
    input  wire                  reset          ,
    input  wire[`RF_DATA_WD-1:0] dpi_regs [31:0],
    input  wire[`PC_WD     -1:0] pc
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

import "DPI-C" context function void halt(input logic [63:0] s[]);
import "DPI-C" context function void set_gpr_ptr(input logic [63:0] a[]);
import "DPI-C" context function void set_pc_ptr(input logic [63:0] a[]);
initial set_gpr_ptr(rf);
initial set_pc_ptr(pc);
initial halt(stop);

endmodule
