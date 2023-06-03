// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_mul.v
// Author        : Cw
// Created On    : 2022-11-29 16:07
// Last Modified : 2023-06-03 20:31
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_mul(
`ifndef DPI_C
    input                          clk           ,
    input                          reset         ,
    input                          flush         ,
`endif
    input                          mul_u         ,
    input                          mul_su        ,
    input                          mul_h         ,
    input                          mul_valid     ,
    input       [`ysyx_22041752_RF_DATA_WD-1:0]  multiplicand  ,
    input       [`ysyx_22041752_RF_DATA_WD-1:0]  multiplier    ,
    output reg  [`ysyx_22041752_RF_DATA_WD-1:0]  product       ,
    output                                       out_valid
);

`ifndef DPI_C
reg [6:0] count;
wire count_en = ~reset & ~flush & mul_valid;
always @(posedge clk) begin
    if (!count_en || out_valid) begin
        count <= 0;
    end
    else begin
        count <= count + 1;
    end
end

reg [2*`ysyx_22041752_RF_DATA_WD-1:0] pdt_r;
reg [2*`ysyx_22041752_RF_DATA_WD-1:0] up_pdt;
always @(posedge clk) begin
    if (reset) begin
        pdt_r <= 0;
    end
    else if (count_en && (count==0)) begin
        pdt_r <= {64'b0, multiplier};
    end
    else begin
        pdt_r <= up_pdt;
    end
end

wire adder_cout;
wire [`ysyx_22041752_RF_DATA_WD-1:0] adder_res;
wire sub_en = !mul_su && !mul_u && count==`ysyx_22041752_RF_DATA_WD;

always @(*) begin
    if (mul_u) begin
        if(pdt_r[0]) begin
            up_pdt = {adder_cout, adder_res, pdt_r[`ysyx_22041752_RF_DATA_WD-1:1]};
        end
        else begin
            up_pdt = {1'b0, pdt_r[2*`ysyx_22041752_RF_DATA_WD-1:`ysyx_22041752_RF_DATA_WD], pdt_r[`ysyx_22041752_RF_DATA_WD-1:1]};
        end
    end
    else begin
        if(pdt_r[0]) begin
            up_pdt = {adder_res[`ysyx_22041752_RF_DATA_WD-1], adder_res, pdt_r[`ysyx_22041752_RF_DATA_WD-1:1]};
        end
        else begin
            up_pdt = {pdt_r[2*`ysyx_22041752_RF_DATA_WD-1], pdt_r[2*`ysyx_22041752_RF_DATA_WD-1:`ysyx_22041752_RF_DATA_WD], pdt_r[`ysyx_22041752_RF_DATA_WD-1:1]};
        end
    end
end

ysyx_22041752_aser #(.WIDTH (64))
U_YSYX_22041752_ASER_0(
    .a                              ( pdt_r[2*`ysyx_22041752_RF_DATA_WD-1:`ysyx_22041752_RF_DATA_WD] ), 
    .b                              ( multiplicand                       ),
    .sub                            ( sub_en                             ),
    .cout                           ( adder_cout                         ),
    .result                         ( adder_res                          )
);

assign out_valid = mul_valid && ((count==`ysyx_22041752_RF_DATA_WD+1) ||
                   (multiplicand==0) || (multiplier==0));

always @(*) begin
    if ((multiplicand==0) || (multiplier==0)) begin
        product = 0;
    end
    else if (mul_h) begin
        product = pdt_r[2*`ysyx_22041752_RF_DATA_WD-1:`ysyx_22041752_RF_DATA_WD];
    end
    else begin
        product = pdt_r[`ysyx_22041752_RF_DATA_WD-1:0];
    end
end

/**************************************************************************/
/**************************************************************************/
/**************************************************************************/
`else

wire [`ysyx_22041752_RF_DATA_WD-1:0] not_p1_x = ~multiplicand+1;
wire [`ysyx_22041752_RF_DATA_WD-1:0] not_p1_y = ~multiplier+1;

wire [`ysyx_22041752_RF_DATA_WD-1:0] src1 = !mul_u && multiplicand[`ysyx_22041752_RF_DATA_WD-1] ? not_p1_x : multiplicand;
wire [`ysyx_22041752_RF_DATA_WD-1:0] src2 = !(mul_u|mul_su) && multiplier[`ysyx_22041752_RF_DATA_WD-1] ? not_p1_y : multiplier;

wire [2*`ysyx_22041752_RF_DATA_WD-1:0] r_abs = src1 * src2;
wire [2*`ysyx_22041752_RF_DATA_WD-1:0] r_abs_not_p1 = ~r_abs + 1;

always @(*) begin
    out_valid = mul_valid;
end
always @(*) begin
    if (!mul_u && !mul_su && (multiplicand[`ysyx_22041752_RF_DATA_WD-1] ^ multiplier[`ysyx_22041752_RF_DATA_WD-1])) begin
        if (mul_h) begin
            product = r_abs_not_p1[2*`ysyx_22041752_RF_DATA_WD-1:`ysyx_22041752_RF_DATA_WD];
        end
        else begin
            product = r_abs_not_p1[`ysyx_22041752_RF_DATA_WD-1:0];
        end
    end
    else if (mul_su && multiplicand[`ysyx_22041752_RF_DATA_WD-1]) begin
        if (mul_h) begin
            product = r_abs_not_p1[2*`ysyx_22041752_RF_DATA_WD-1:`ysyx_22041752_RF_DATA_WD];
        end
        else begin
            product = r_abs_not_p1[`ysyx_22041752_RF_DATA_WD-1:0];
        end
    end
    else begin
        if (mul_h) begin
            product = r_abs[2*`ysyx_22041752_RF_DATA_WD-1:`ysyx_22041752_RF_DATA_WD];
        end
        else begin
            product = r_abs[`ysyx_22041752_RF_DATA_WD-1:0];
        end
    end
end
`endif

endmodule

