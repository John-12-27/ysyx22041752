// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : adder_p.v
// Author        : Rongye
// Created On    : 2022-08-22 23:10
// Last Modified : 2022-08-24 13:10
// ---------------------------------------------------------------------------------
// Description   : 8-bit carry lookahead adder
//
//
// -FHDR----------------------------------------------------------------------------
module adder_p #(DATA_LEN = 8) 
(
    input  wire [DATA_LEN-1:0] a        , 
    input  wire [DATA_LEN-1:0] b        , 
    input  wire                cin      , 
    output reg                 cout     ,
    output reg  [DATA_LEN-1:0] sum      ,
    output reg                 zero     , 
    output reg                 overflow  
);
  
wire [DATA_LEN-1:0] pn;
wire [DATA_LEN-1:0] gn;

genvar i;
generate
    for(i=0;i<DATA_LEN;i++)begin
        assign pn[i] = a[i] ^ b[i];
        assign gn[i] = a[i] & b[i];
    end
endgenerate

// 0 bit
always @(a or b or cin) begin
   sum[0] = pn[0] ^ cin;
end 
// 1 bit
always @(a or b or cin) begin
   sum[1] = pn[1] ^ (gn[0] | pn[0] & cin);
end 
// 2 bit
always @(a or b or cin) begin
   sum[2] = pn[2] ^ (gn[1] | pn[1] & (gn[0] | pn[0] & cin));
end 
// 3 bit
always @(a or b or cin) begin
   sum[3] = pn[3] ^ (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] & cin)));
end 
// 4 bit
always @(a or b or cin) begin
   sum[4] = pn[4] ^ (gn[3] | pn[3] & (gn[2] | pn[2] & 
                    (gn[1] | pn[1] & (gn[0] | pn[0] & cin))));
end 
// 5 bit
always @(a or b or cin) begin
   sum[5] = pn[5] ^ (gn[4] | pn[4] & (gn[3] | pn[3] & (gn[2] | pn[2] & 
                    (gn[1] | pn[1] & (gn[0] | pn[0] & cin)))));
end 
// 6 bit
always @(a or b or cin) begin
   sum[6] = pn[6] ^ (gn[5] | pn[5] & (gn[4] | pn[4] & (gn[3] | pn[3] &
                    (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] & 
                                                            cin))))));
end 
// 7 bit
always @(a or b or cin) begin
   sum[7] = pn[7] ^ (gn[6] | pn[6] & (gn[5] | pn[5] & (gn[4] | pn[4] & (gn[3] | pn[3] &
                    (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] &                  
                                                            cin)))))));                 
end 
always @(a or b or cin) begin
   cout =  (gn[7] | pn[7] & (gn[6] | pn[6] & (gn[5] | pn[5] & (gn[4] | pn[4] &
           (gn[3] | pn[3] & (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] &                                                                                   cin))))))));                
end
always @(a or b or cin) begin
   overflow = (a[DATA_LEN-1]==b[DATA_LEN-1])&&(sum[DATA_LEN-1]!=a[DATA_LEN-1]);
end
always @(a or b or cin) begin
   zero = sum == {DATA_LEN{1'b0}};
end
endmodule
