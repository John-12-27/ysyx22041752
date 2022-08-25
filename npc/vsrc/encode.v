// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : encode.v
// Author        : Cw 
// Created On    : 2022-08-18 20:47
// Last Modified : 2022-08-25 16:51
// ---------------------------------------------------------------------------------
// Description   : encoder with priority
//
//
// -FHDR----------------------------------------------------------------------------
module encode #(INPUT_LEN=8, DATA_LEN=3, HIGH_PRI=1)
(
    input  wire [INPUT_LEN-1:0] x     ,
    input  wire                 en    ,
    output reg  [DATA_LEN-1:0]  y     ,
    output reg                  valid
);

always @(x or en) begin
    y = {DATA_LEN{1'b0}};
    if(HIGH_PRI) begin
        for (int i = 0; i < INPUT_LEN; i++) begin
            if(x[i])
                y = i[DATA_LEN-1:0];
        end
    end 
    else begin
        for (int i = INPUT_LEN-1; i > -1; i--) begin
        if(x[i])
            y = i[DATA_LEN-1:0];
        end
    end 
end
always @(x or en) begin
    valid = en && |x;
end
endmodule
