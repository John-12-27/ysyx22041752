// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_DCACHE_VD.v
// Author        : Cw
// Created On    : 2023-06-17 16:46
// Last Modified : 2023-06-26 20:59
// ---------------------------------------------------------------------------------
// Description   : valid/dirty table for cache
//
//
// -FHDR----------------------------------------------------------------------------
module ysyx_22041752_DCACHE_VD (
    input  clk  ,
    input  reset,

    input  [5:0] addr ,
    output reg   o    ,
    input        en   ,
    input        we   ,
    input        in
);
    
reg [63:0] dat;

genvar i;
generate
    for (i = 0; i < 64; i++) begin
        :Write_Regs
        always @(posedge clk) begin
            if (reset) begin
                dat[i] <= 0;
            end
            else if(!we && (addr == i))
                dat[i] <= in;
        end
    end
endgenerate

always @(posedge clk) begin
    if (reset) begin
        o <= 0;
    end
    else if(!en) begin
        o <= dat[addr];
    end
end

endmodule

