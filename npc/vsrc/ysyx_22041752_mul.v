// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_mul.v
// Author        : Cw
// Created On    : 2022-11-29 16:07
// Last Modified : 2023-05-23 21:27
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_mul(
    input  wire                    clk           ,
    input  wire                    reset         ,
    input  wire                    flush         ,
    input  wire                    mul_u         ,
    input  wire                    mul_su        ,
    input  wire                    mul_h         ,
    input  wire                    mul_valid     ,
    input  wire [`RF_DATA_WD-1:0]  multiplicand  ,
    input  wire [`RF_DATA_WD-1:0]  multiplier    ,
    output reg  [`RF_DATA_WD-1:0]  product       ,
    output reg                     out_valid
);

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

reg [2*`RF_DATA_WD-1:0] pdt_r;
reg [2*`RF_DATA_WD-1:0] up_pdt;
always @(posedge clk) begin
    if (count_en && (count==0)) begin
        pdt_r <= {64'b0, multiplier};
    end
    else begin
        pdt_r <= up_pdt;
    end
end

wire adder_cout;
wire [`RF_DATA_WD-1:0] adder_res;
wire sub_en = !mul_su && !mul_u && count==`RF_DATA_WD;

always @(*) begin
    if (mul_u) begin
        if(pdt_r[0]) begin
            up_pdt = {adder_cout, adder_res, pdt_r[`RF_DATA_WD-1:1]};
        end
        else begin
            up_pdt = {1'b0, pdt_r[2*`RF_DATA_WD-1:`RF_DATA_WD], pdt_r[`RF_DATA_WD-1:1]};
        end
    end
    else begin
        if(pdt_r[0]) begin
            up_pdt = {adder_res[`RF_DATA_WD-1], adder_res, pdt_r[`RF_DATA_WD-1:1]};
        end
        else begin
            up_pdt = {pdt_r[2*`RF_DATA_WD-1], pdt_r[2*`RF_DATA_WD-1:`RF_DATA_WD], pdt_r[`RF_DATA_WD-1:1]};
        end
    end
end

ysyx_22041752_aser U_YSYX_22041752_ASER_0(
    .a                              ( pdt_r[2*`RF_DATA_WD-1:`RF_DATA_WD] ), 
    .b                              ( multiplicand                       ),
    .sub                            ( sub_en                             ),
    .cout                           ( adder_cout                         ),
    .result                         ( adder_res                          )
);

assign out_valid = mul_valid && ((count==`RF_DATA_WD+1) ||
                   (multiplicand==0) || (multiplier==0));

always @(*) begin
    if ((multiplicand==0) || (multiplier==0)) begin
        product = 0;
    end
    else if (mul_h) begin
        product = pdt_r[2*`RF_DATA_WD-1:`RF_DATA_WD];
    end
    else begin
        product = pdt_r[`RF_DATA_WD-1:0];
    end
end

//always @(*) begin
    //if (!mul_u && !mul_su && multiplier[`RF_DATA_WD-1]) begin
        //if (mul_h) begin
            //product = pdt_r[2*`RF_DATA_WD-1:`RF_DATA_WD];
        //end
        //else begin
            //product = pdt_r[`RF_DATA_WD-1:0];
        //end
    //end
    //else begin
        //if (mul_h) begin
            //product = pdt_r[2*`RF_DATA_WD-1:`RF_DATA_WD];
        //end
        //else begin
            //product = pdt_r[`RF_DATA_WD-1:0];
        //end
    //end
//end





















/*
wire [`RF_DATA_WD-1:0] not_p1_x = ~multiplicand+1;
wire [`RF_DATA_WD-1:0] not_p1_y = ~multiplier+1;

wire [`RF_DATA_WD-1:0] src1 = !mul_u && multiplicand[`RF_DATA_WD-1] ? not_p1_x : multiplicand;
wire [`RF_DATA_WD-1:0] src2 = !(mul_u|mul_su) && multiplier[`RF_DATA_WD-1] ? not_p1_y : multiplier;

wire [2*`RF_DATA_WD-1:0] r_abs = src1 * src2;
wire [2*`RF_DATA_WD-1:0] r_abs_not_p1 = ~r_abs + 1;

always @(*) begin
    if (!mul_u && !mul_su && (multiplicand[`RF_DATA_WD-1] ^ multiplier[`RF_DATA_WD-1])) begin
        if (mul_h) begin
            product = r_abs_not_p1[2*`RF_DATA_WD-1:`RF_DATA_WD];
        end
        else begin
            product = r_abs_not_p1[`RF_DATA_WD-1:0];
        end
    end
    else if (mul_su && multiplicand[`RF_DATA_WD-1]) begin
        if (mul_h) begin
            product = r_abs_not_p1[2*`RF_DATA_WD-1:`RF_DATA_WD];
        end
        else begin
            product = r_abs_not_p1[`RF_DATA_WD-1:0];
        end
    end
    else begin
        if (mul_h) begin
            product = r_abs[2*`RF_DATA_WD-1:`RF_DATA_WD];
        end
        else begin
            product = r_abs[`RF_DATA_WD-1:0];
        end
    end
end
*/

endmodule

