// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_IFU.v
// Author        : Cw
// Created On    : 2022-10-17 20:50
// Last Modified : 2022-11-12 12:58
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
module ysyx_22041752_IFU (
    input  wire        clk,
    input  wire        rst,
    output wire [63:0] addr,
    input  wire [31:0] inst_i,
    output wire [31:0] inst_o
);

reg [63:0] pc;

always @(posedge clk) begin
    if (rst) begin
        pc <= 64'h80000000;
    end
    else begin
        pc <= pc + 4;
    end
end
assign addr = pc;

assign inst_o = inst_i;

endmodule
