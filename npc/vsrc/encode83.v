// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : encode83.v
// Author        : Rongye
// Created On    : 2022-08-18 20:47
// Last Modified : 2022-08-18 21:39
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
module encode83 (
    input  wire [7:0] s ,
    input  wire       en,
    output wire [2:0] r ,
    output reg        v
);
   
always @(s or en) begin
    if (!en) begin
       v = 1'b0; 
    end
    else begin
       v = |s;
    end    
end

reg [2:0] m;

always @(s or en) begin
    casez (s)
        8'b1???_????: m = 3'd7;
        8'b01??_????: m = 3'd6;
        8'b001?_????: m = 3'd5;
        8'b0001_????: m = 3'd4;
        8'b0000_1???: m = 3'd3;
        8'b0000_01??: m = 3'd2;
        8'b0000_001?: m = 3'd1;
        8'b0000_0001: m = 3'd0;
            
        default: begin
           m = 3'd0; 
        end
    endcase    
end

assign r = m & {3{en}};

endmodule
