// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_ICACHE_V.v
// Author        : Cw
// Created On    : 2023-06-17 16:46
// Last Modified : 2023-06-17 23:06
// ---------------------------------------------------------------------------------
// Description   : valid table for cache
//
//
// -FHDR----------------------------------------------------------------------------
module ysyx_22041752_ICACHE_V (
    input  clk  ,
    input  reset,

    input  [5:0] addr ,
    output reg   v_o  ,
    input        we   ,
    input        v_i
);
    
reg [63:0] valid;

genvar i;
generate
    for (i = 0; i < 64; i++) begin
        :Write_Regs
        always @(posedge clk) begin
            if (reset) begin
                valid[i] <= 0;
            end
            else if(we && (addr == i))
                valid[i] <= v_i;
        end
    end
endgenerate

always @(posedge clk) begin
    if (reset) begin
        v_o <= 0;
    end
    else begin
        v_o <= valid[addr];
    end
end
endmodule

