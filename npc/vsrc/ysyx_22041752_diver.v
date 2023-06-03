// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_diver.v
// Author        : Cw
// Created On    : 2022-12-14 14:01
// Last Modified : 2023-06-03 20:30
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_diver (
`ifndef DPI_C
    input                                       clk        ,
    input                                       reset      ,
    input                                       flush      ,
`endif
    input  [`ysyx_22041752_RF_DATA_WD-1:0]      dividend   ,
    input  [`ysyx_22041752_RF_DATA_WD-1:0]      divisor    ,
    input                                       div_valid  ,
    input                                       div_signed ,
    output                                      out_valid  ,
    output reg  [`ysyx_22041752_RF_DATA_WD-1:0] quotient   ,
    output reg  [`ysyx_22041752_RF_DATA_WD-1:0] remainder
);
    
`ifndef DPI_C
reg [7:0] count;
wire count_en = ~reset & ~flush & div_valid;
always @(posedge clk) begin
    if(!count_en || out_valid)
        count <= 0;
    else
        count <= count + 1;
end

wire dividend_s  = div_signed & dividend[`ysyx_22041752_RF_DATA_WD-1];
wire divisor_s   = div_signed & divisor[`ysyx_22041752_RF_DATA_WD-1];
wire remainder_s = dividend_s;
wire quotient_s  = div_signed & (dividend_s ^ divisor_s);

wire [`ysyx_22041752_RF_DATA_WD-1:0]   dividend_abs       ;
wire [`ysyx_22041752_RF_DATA_WD-1:0]   divisor_abs        ;
wire [2*`ysyx_22041752_RF_DATA_WD-1:0] dividend_abs_128   = {64'b0, dividend_abs};
wire [`ysyx_22041752_RF_DATA_WD:0]     divisor_abs_65     = {1'b0, divisor_abs};
reg  [2*`ysyx_22041752_RF_DATA_WD-1:0] result_abs_buffer  ;

wire [`ysyx_22041752_RF_DATA_WD-1:0] not_p1_i_1 = out_valid ? result_abs_buffer[2*`ysyx_22041752_RF_DATA_WD-1:`ysyx_22041752_RF_DATA_WD] : dividend;
wire [`ysyx_22041752_RF_DATA_WD-1:0] not_p1_i_2 = out_valid ? result_abs_buffer[`ysyx_22041752_RF_DATA_WD-1:0] : divisor;
wire [`ysyx_22041752_RF_DATA_WD-1:0] not_p1_o_1 = ~not_p1_i_1 + 1;
wire [`ysyx_22041752_RF_DATA_WD-1:0] not_p1_o_2 = ~not_p1_i_2 + 1;

assign dividend_abs = dividend_s ? not_p1_o_1 : dividend;
assign divisor_abs  = divisor_s  ? not_p1_o_2 : divisor;

wire [`ysyx_22041752_RF_DATA_WD:0]     sub_result = result_abs_buffer[2*`ysyx_22041752_RF_DATA_WD-1:`ysyx_22041752_RF_DATA_WD-1] - divisor_abs_65;
wire [2*`ysyx_22041752_RF_DATA_WD-1:0] update_result = {(sub_result[`ysyx_22041752_RF_DATA_WD] ? result_abs_buffer[2*`ysyx_22041752_RF_DATA_WD-2:`ysyx_22041752_RF_DATA_WD-1] : sub_result[`ysyx_22041752_RF_DATA_WD-1:0]),result_abs_buffer[`ysyx_22041752_RF_DATA_WD-2:0],(sub_result[`ysyx_22041752_RF_DATA_WD] ? 1'b0 : 1'b1)};

always @(posedge clk) begin
    if (reset) begin
        result_abs_buffer <= 0;
    end
    else if (count == 0)
        result_abs_buffer <= dividend_abs_128;
    else
        result_abs_buffer <= update_result;
end

assign out_valid = div_valid && ((count == `ysyx_22041752_RF_DATA_WD+1)                                                        || 
                   divisor == 0                                                                                  || 
                   (div_signed && (dividend == 64'h8000_0000_0000_0000) && (divisor == 64'hffff_ffff_ffff_ffff)));

always @(*) begin
    if (divisor == 0) begin
        quotient = 64'hffff_ffff_ffff_ffff;        
    end
    else if (div_signed && (dividend == 64'h8000_0000_0000_0000) && (divisor == 64'hffff_ffff_ffff_ffff)) begin
        quotient = dividend;
    end
    else if (quotient_s) begin
        quotient = not_p1_o_2;
    end
    else begin
        quotient = result_abs_buffer[`ysyx_22041752_RF_DATA_WD-1:0];
    end
end

always @(*) begin
    if (divisor == 0) begin
        remainder = dividend;        
    end
    else if (div_signed && (dividend == 64'h8000_0000_0000_0000) && (divisor == 64'hffff_ffff_ffff_ffff)) begin
        remainder = 0;
    end
    else if (remainder_s) begin
        remainder = not_p1_o_1;
    end
    else begin
        remainder = result_abs_buffer[2*`ysyx_22041752_RF_DATA_WD-1:`ysyx_22041752_RF_DATA_WD];
    end
end

/**************************************************************************************/
/**************************************************************************************/
/**************************************************************************************/
`else

wire dividend_s  = div_signed & dividend[`ysyx_22041752_RF_DATA_WD-1];
wire divisor_s   = div_signed & divisor [`ysyx_22041752_RF_DATA_WD-1];
wire remainder_s = dividend_s;
wire quotient_s  = div_signed & (dividend_s ^ divisor_s);

wire [`ysyx_22041752_RF_DATA_WD-1:0]   dividend_abs       ;
wire [`ysyx_22041752_RF_DATA_WD-1:0]   divisor_abs        ;

wire [`ysyx_22041752_RF_DATA_WD-1:0] not_p1_i_1 = dividend;
wire [`ysyx_22041752_RF_DATA_WD-1:0] not_p1_i_2 = divisor;
wire [`ysyx_22041752_RF_DATA_WD-1:0] not_p1_o_1 = ~not_p1_i_1 + 1;
wire [`ysyx_22041752_RF_DATA_WD-1:0] not_p1_o_2 = ~not_p1_i_2 + 1;

assign dividend_abs = dividend_s ? not_p1_o_1 : dividend;
assign divisor_abs  = divisor_s  ? not_p1_o_2 : divisor;

wire [`ysyx_22041752_RF_DATA_WD-1:0] quotient_abs  = dividend_abs / divisor_abs;
wire [`ysyx_22041752_RF_DATA_WD-1:0] remainder_abs = dividend_abs % divisor_abs;

assign out_valid = div_valid;

always @(*) begin
    if (divisor == 0) begin
        quotient = 64'hffff_ffff_ffff_ffff;        
    end
    else if (div_signed && (dividend == 64'h8000_0000_0000_0000) && (divisor == 64'hffff_ffff_ffff_ffff)) begin
        quotient = dividend;
    end
    else if (quotient_s) begin
        quotient = ~quotient_abs + 1;
    end
    else begin
        quotient = quotient_abs;
    end
end

always @(*) begin
    if (divisor == 0) begin
        remainder = dividend;        
    end
    else if (div_signed && (dividend == 64'h8000_0000_0000_0000) && (divisor == 64'hffff_ffff_ffff_ffff)) begin
        remainder = 0;
    end
    else if (remainder_s) begin
        remainder = ~remainder_abs + 1;
    end
    else begin
        remainder = remainder_abs;
    end
end
`endif

endmodule

