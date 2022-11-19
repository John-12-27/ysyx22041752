// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_regfiles.v
// Author        : Cw
// Created On    : 2022-10-17 21:21
// Last Modified : 2022-11-18 21:44
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_rf (
    input  wire clk,
    input  wire [`RF_ADDR_WD-1 : 0] addr_r1,
    input  wire [`RF_ADDR_WD-1 : 0] addr_r2,
    output wire [`RF_DATA_WD-1 : 0] data_r1,
    output wire [`RF_DATA_WD-1 : 0] data_r2,
    input  wire [`RF_ADDR_WD-1 : 0] addr_w ,
    input  wire                     we     , 
    input  wire [`RF_DATA_WD-1 : 0] data_w ,

    output wire [`RF_DATA_WD-1 : 0] dpi_regs [`RF_NUM-1 : 0]
);

reg [`RF_DATA_WD-1 : 0] regs [`RF_NUM-1 : 0];

assign data_r1 = regs[addr_r1];
assign data_r2 = regs[addr_r2];

always @(*) begin
    regs[0] = `RF_DATA_WD'b0;
end

genvar i;
generate
    for (i = 1; i < `RF_NUM; i++) begin
        :Write_Regs
        always @(posedge clk) begin
            if(we && (addr_w == i))
                regs[i] <= data_w;
        end
        
    end
endgenerate

generate
    for(i = 0; i < `RF_NUM; i++) begin
        :DPI_C_REGS
        assign dpi_regs[i] = regs[i];
    end
endgenerate

endmodule
