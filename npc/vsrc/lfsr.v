// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : lfsr.v
// Author        : Cw
// Created On    : 2022-08-31 23:46
// Last Modified : 2022-09-01 11:54
// ---------------------------------------------------------------------------------
// Description   : Linear-feedback shift register
//
//
// -FHDR----------------------------------------------------------------------------
module lfsr #(DATA_LEN = 8)
(
    input  wire clk,
    input  wire rst,
    output reg  [DATA_LEN-1:0] q,
    output wire qo
);


always @(posedge clk) begin
    if (rst) begin
        q[DATA_LEN-1] <= 1'b1;
    end
    else begin
        q[DATA_LEN-1] <= q[7]^q[5]^q[2]^q[0];
    end
end

always @(posedge clk) begin
    for (int i = 0; i < DATA_LEN-1; i++) begin
        q[i] <= q[i+1];
    end
end

assign qo = q[0];

endmodule
