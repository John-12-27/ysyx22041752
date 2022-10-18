// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_regfiles.v
// Author        : Cw
// Created On    : 2022-10-17 21:21
// Last Modified : 2022-10-17 21:36
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
module ysyx_22041752_regfiles (
    input  wire clk,
    input  wire [ 4: 0] addr_r1,
    input  wire [ 4: 0] addr_r2,
    output wire [63: 0] data_r1,
    output wire [63: 0] data_r2,
    input  wire [ 4: 0] addr_w ,
    input  wire         we     ,
    input  wire [63: 0] data_w
);

reg [63:0] regs [31:0];

assign data_r1 = regs[addr_r1];
assign data_r2 = regs[addr_r2];

always @(*) begin
    regs[0] = 64'b0;
end

genvar i;
generate
    for (i = 1; i < 32; i++) begin
        :Write_Regs
        always @(posedge clk) begin
            if(we && (addr_w == i))
                regs[i] <= data_w;
        end
        
    end
endgenerate

endmodule
