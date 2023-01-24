// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_adder_p16.v
// Author        : Cw
// Created On    : 2022-08-22 23:10
// Last Modified : 2022-11-19 11:13
// ---------------------------------------------------------------------------------
// Description   : 16-bit carry lookahead adder
//
//
// -FHDR----------------------------------------------------------------------------
module ysyx_22041752_adder_p16 #(DATA_LEN = 16) 
(
    input  wire [DATA_LEN-1:0] a        , 
    input  wire [DATA_LEN-1:0] b        , 
    input  wire                cin      , 
    output reg                 cout     ,
    output reg  [DATA_LEN-1:0] sum      
    //output reg                 zero     , 
    //output reg                 overflow  
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
// 8 bit
always @(a or b or cin) begin
   sum[8] = pn[8] ^ (gn[7] | pn[7] & (gn[6] | pn[6] & (gn[5] | pn[5] & (gn[4] | pn[4] & (gn[3] | pn[3] &
                    (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] &                  
                                                       cin))))))));                 
end 
// 9 bit
always @(a or b or cin) begin
   sum[9] = pn[9] ^ (gn[8] | pn[8] & (gn[7] | pn[7] & (gn[6] | pn[6] & 
                    (gn[5] | pn[5] & (gn[4] | pn[4] & (gn[3] | pn[3] &
                    (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] &                  
                                                       cin)))))))));                 
end 
// 10 bit
always @(a or b or cin) begin
   sum[10] = pn[10] ^ (gn[9] | pn[9] & (gn[8] | pn[8] & (gn[7] | pn[7] & (gn[6] | pn[6] & 
                      (gn[5] | pn[5] & (gn[4] | pn[4] & (gn[3] | pn[3] &
                      (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] &                  
                                                          cin))))))))));                 
end 
// 11 bit
always @(a or b or cin) begin
   sum[11] = pn[11] ^ (gn[10]| pn[10]& (gn[9] | pn[9] & (gn[8] | pn[8] & (gn[7] | pn[7] & (gn[6] | pn[6] & 
                      (gn[5] | pn[5] & (gn[4] | pn[4] & (gn[3] | pn[3] &
                      (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] &                  
                                                          cin)))))))))));                 
end 
// 12 bit
always @(a or b or cin) begin
   sum[12] = pn[12] ^ (gn[11]| pn[11]& (gn[10]| pn[10]& (gn[9] | pn[9] & 
                      (gn[8] | pn[8] & (gn[7] | pn[7] & (gn[6] | pn[6] & 
                      (gn[5] | pn[5] & (gn[4] | pn[4] & (gn[3] | pn[3] &
                      (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] &                  
                                                          cin))))))))))));                 
end 
// 13 bit
always @(a or b or cin) begin
   sum[13] = pn[13] ^ (gn[12]| pn[12]& (gn[11]| pn[11]& (gn[10]| pn[10]& (gn[9] | pn[9] & 
                      (gn[8] | pn[8] & (gn[7] | pn[7] & (gn[6] | pn[6] & 
                      (gn[5] | pn[5] & (gn[4] | pn[4] & (gn[3] | pn[3] &
                      (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] &                  
                                                          cin)))))))))))));                 
end 
// 14 bit
always @(a or b or cin) begin
   sum[14] = pn[14] ^ (gn[13]| pn[13]& (gn[12]| pn[12]& (gn[11]| pn[11]& (gn[10]| pn[10]& (gn[9] | pn[9] & 
                      (gn[8] | pn[8] & (gn[7] | pn[7] & (gn[6] | pn[6] & 
                      (gn[5] | pn[5] & (gn[4] | pn[4] & (gn[3] | pn[3] &
                      (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] &                  
                                                          cin))))))))))))));                 
end 
// 15 bit
always @(a or b or cin) begin
   sum[15] = pn[15] ^ (gn[14]| pn[14]& (gn[13]| pn[13]& (gn[12]| pn[12]& 
                      (gn[11]| pn[11]& (gn[10]| pn[10]& (gn[9] | pn[9] & 
                      (gn[8] | pn[8] & (gn[7] | pn[7] & (gn[6] | pn[6] & 
                      (gn[5] | pn[5] & (gn[4] | pn[4] & (gn[3] | pn[3] &
                      (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] &                  
                                                          cin)))))))))))))));                 
end 

always @(a or b or cin) begin
   cout =  (gn[15]| pn[15]& (gn[14]| pn[14]& (gn[13]| pn[13]& (gn[12]| pn[12]& 
           (gn[11]| pn[11]& (gn[10]| pn[10]& (gn[9] | pn[9] & (gn[8] | pn[8] & 
           (gn[7] | pn[7] & (gn[6] | pn[6] & (gn[5] | pn[5] & (gn[4] | pn[4] &
           (gn[3] | pn[3] & (gn[2] | pn[2] & (gn[1] | pn[1] & (gn[0] | pn[0] &                                                                                                      cin))))))))))))))));
end

//always @(a or b or cin) begin
   //overflow = (a[DATA_LEN-1]==b[DATA_LEN-1])&&(sum[DATA_LEN-1]!=a[DATA_LEN-1]);
//end
//always @(a or b or cin) begin
   //zero = sum == {DATA_LEN{1'b0}};
//end

endmodule
