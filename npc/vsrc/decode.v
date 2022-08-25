// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : decode.v
// Author        : Cw
// Created On    : 2022-08-18 16:54
// Last Modified : 2022-08-25 15:56
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
module decode #(INPUT_LEN = 3, OUTPUT_LEN = 8)
(
    input  wire [INPUT_LEN-1:0]  x ,
    input  wire                  en,
    output reg  [OUTPUT_LEN-1:0] y
);

always @(x or en) begin
    for (int i = 0; i < OUTPUT_LEN; i++) begin
        y[i] = x==i[INPUT_LEN-1:0] && en;
    end
end

endmodule
