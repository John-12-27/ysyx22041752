// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_mmu.v
// Author        : Cw
// Created On    : 2023-06-23 19:24
// Last Modified : 2023-06-23 22:25
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_mmu (
    input                                         clk           ,
    input                                         reset         ,
    input [`ysyx_22041752_SRAM_ADDR_WD-1:0]       data_addr     ,
    input                                         data_en       ,
    output reg                                    out_of_mem 
);
    
wire access_mem = (data_addr >= `ysyx_22041752_MEM_BASEADDR) && (data_addr <= (`ysyx_22041752_MEM_BASEADDR+`ysyx_22041752_MEM_SIZE));

always @(posedge clk) begin
    if (reset) begin
        out_of_mem <= 0;
    end
    else if(data_en) begin
        out_of_mem <= !access_mem;
    end
end
endmodule

