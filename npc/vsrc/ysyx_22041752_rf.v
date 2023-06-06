// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_regfiles.v
// Author        : Cw
// Created On    : 2022-10-17 21:21
// Last Modified : 2023-06-06 09:18
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_rf (
    input                                    clk,
    input                                    reset,
    input  [`ysyx_22041752_RF_ADDR_WD-1 : 0] addr_r1,
    input  [`ysyx_22041752_RF_ADDR_WD-1 : 0] addr_r2,
    output [`ysyx_22041752_RF_DATA_WD-1 : 0] data_r1,
    output [`ysyx_22041752_RF_DATA_WD-1 : 0] data_r2,
    input  [`ysyx_22041752_RF_ADDR_WD-1 : 0] addr_w ,
    input                                    we     , 
    input  [`ysyx_22041752_RF_DATA_WD-1 : 0] data_w ,

    output [`ysyx_22041752_PC_WD     -1 : 0] ra_data
`ifdef DPI_C
        ,
    output [`ysyx_22041752_RF_DATA_WD-1 : 0] dpi_regs [`ysyx_22041752_RF_NUM-1 : 0]
`endif
);

reg [`ysyx_22041752_RF_DATA_WD-1 : 0] regs [`ysyx_22041752_RF_NUM-1 : 0];

assign data_r1 = regs[addr_r1];
assign data_r2 = regs[addr_r2];

always @(*) begin
    regs[0] = `ysyx_22041752_RF_DATA_WD'b0;
end

genvar i;
generate
    for (i = 1; i < `ysyx_22041752_RF_NUM; i++) begin
        :Write_Regs
        always @(posedge clk) begin
            if (reset) begin
                regs[i] <= 0;
            end
            else if(we && (addr_w == i))
                regs[i] <= data_w;
        end
        
    end
endgenerate

assign ra_data = regs[1][31:0];

`ifdef DPI_C
generate
    for(i = 0; i < `ysyx_22041752_RF_NUM; i++) begin
        :DPI_C_REGS
        assign dpi_regs[i] = regs[i];
    end
endgenerate
`endif

endmodule

