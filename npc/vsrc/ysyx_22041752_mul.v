// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_mul.v
// Author        : Cw
// Created On    : 2022-11-29 16:07
// Last Modified : 2022-11-29 21:34
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_mul(
    input  wire                    mul_clk    ,
    input  wire                    reset      ,
    input  wire                    mul_u      ,
    input  wire                    mul_su     ,
    input  wire                    mul_h      ,
    input  wire [`RF_DATA_WD-1:0]  x          ,
    input  wire [`RF_DATA_WD-1:0]  y          ,
    output wire [`RF_DATA_WD-1:0]  result
);

wire [`RF_DATA_WD+1:-1] Y;
wire [2*`RF_DATA_WD-1:0] X;

assign Y = {{2{y[`RF_DATA_WD-1]&(~(mul_u | mul_su))}}, y , 1'b0};
assign X = {{`RF_DATA_WD{x[`RF_DATA_WD-1]&(~mul_u)}} , x};

//booth2算法模块批量例化
wire [`RF_DATA_WD/2:0] booth_c;
wire [2*`RF_DATA_WD-1:0] booth_p [`RF_DATA_WD/2:0];
genvar i;
generate
    for(i=0;i<=`RF_DATA_WD/2;i=i+1)begin
        :booth2_encoder
        ysyx_22041752_booth2 booth2(
            .X(X<<(2*i)),
            .y(Y[2*i+1:2*i-1]),
            .p(booth_p[i]),
            .c(booth_c[i])
        );
    end
endgenerate

//输入到华莱士数的部分积转置
wire [`RF_DATA_WD/2:0] w_I [2*`RF_DATA_WD-1:0];
genvar j;
generate
    for(j=0;j<2*`RF_DATA_WD;j=j+1)begin //: wallace_trees_input
        for(i=0;i<=`RF_DATA_WD/2;i=i+1)begin 
            : wallace_trees_input
            assign w_I[j][i] = booth_p[i][j];
        end
    end
endgenerate

//华莱士树阵列
wire [13:0] w_cout [31:0];
wire [31:0] w_C;
wire [31:0] w_S;
wallace_tree_17 wallace_tree0(
            .w_I  (w_I[0][16:0]),               //input  wire[16:0] 
            .cin  (booth_c[13:0]),              //input  wire[13:0] 
            .S    (w_S[0]),                     //output wire       
            .C    (w_C[0]),                     //output wire           
            .cout (w_cout[0][13:0])             //output wire[13:0]        
        );

generate
    for(i=1;i<32;i=i+1)begin
        :wallace_tree1
        wallace_tree_17 wallace_trees(
            .w_I  (w_I[i][16:0]),               //input  wire[16:0] 
            .cin  (w_cout[i-1][13:0]),          //input  wire[13:0] 
            .S    (w_S[i]),                     //output wire       
            .C    (w_C[i]),                     //output wire           
            .cout (w_cout[i][13:0])             //output wire[13:0]        
        );
    end
endgenerate

//华莱士树阵列用寄存器切分为2级流水线
reg booth_c14_r;
always @(posedge mul_clk) begin
    booth_c14_r <= booth_c[14];
end

reg booth_c15_r;
always @(posedge mul_clk) begin
    booth_c15_r <= booth_c[15];
end

integer  n;
reg [16:0] w_I_2 [31:0];
always @(posedge mul_clk)begin
    for(n=0;n<32;n=n+1)begin
        w_I_2[n] <= w_I[n+32];
    end
end

reg [31:0] w_C_1;
always @(posedge mul_clk)begin
    w_C_1 <= w_C;
end

reg [31:0] w_S_1;
always @(posedge mul_clk)begin
    w_S_1 <= w_S;
end

reg [13:0] w_cin_2;
always @(posedge mul_clk)begin
    w_cin_2 <= w_cout[31];
end

wire [13:0] w_cout_2 [31:0];
wire [31:0] w_C_2;
wire [31:0] w_S_2;
wallace_tree_17 wallace_tree32(
            .w_I  (w_I_2[0][16:0]),               //input  wire[16:0] 
            .cin  (w_cin_2),                      //input  wire[13:0] 
            .S    (w_S_2[0]),                     //output wire       
            .C    (w_C_2[0]),                     //output wire           
            .cout (w_cout_2[0][13:0])             //output wire[13:0]        
        );

generate
    for(i=1;i<32;i=i+1)begin
        :wallace_tree2
        wallace_tree_17 wallace_trees(
            .w_I  (w_I_2[i][16:0]),               //input  wire[16:0] 
            .cin  (w_cout_2[i-1][13:0]),          //input  wire[13:0] 
            .S    (w_S_2[i]),                     //output wire       
            .C    (w_C_2[i]),                     //output wire           
            .cout (w_cout_2[i][13:0])             //output wire[13:0]        
        );
    end
endgenerate

wire [63:0] Carry_singals;
assign Carry_singals = {w_C_2[30:0],w_C_1,booth_c14_r};


assign result = {w_S_2,w_S_1} + Carry_singals + booth_c15_r;

endmodule
