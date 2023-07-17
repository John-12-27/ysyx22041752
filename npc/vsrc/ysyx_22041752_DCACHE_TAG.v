// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_DCACHE_TAG.v
// Author        : Cw
// Created On    : 2023-07-17 17:09
// Last Modified : 2023-07-17 17:27
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_DCACHE_TAG (
    input clk       ,
    input reset     ,

    input  [5:0]                              addr,
    input                                     en  ,
    input                                     wen ,
    input  [`ysyx_22041752_DCACHE_TAG_WD-1:0] in  ,
    output reg [`ysyx_22041752_DCACHE_TAG_WD-1:0] out
);
    
reg [`ysyx_22041752_DCACHE_TAG_WD-1:0] tag [63:0];

genvar i;
generate
    for (i = 0; i < 64; i++) begin
        :Write_Regs
        always @(posedge clk) begin
            if (reset) begin
                tag[i] <= 0;
            end
            else if(!wen && !en && (addr == i))
                tag[i] <= in;
        end
    end
endgenerate

always @(posedge clk) begin
    if (reset) begin
        out <= 0;
    end
    else if(!en && wen) begin
        out <= tag[addr];
    end
end

endmodule
