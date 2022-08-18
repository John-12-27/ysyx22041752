// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : decode24.v
// Author        : cw
// Created On    : 2022-08-18 16:54
// Last Modified : 2022-08-18 17:21
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
module decode24(
    input  wire [1:0] x ,
    input  wire       en,
    output reg  [3:0] y
);

always @(x or en) begin
    if (en) begin
       case (x)
           2'd0: y = 4'b0001; 
           2'd1: y = 4'b0010; 
           2'd2: y = 4'b0100; 
           2'd3: y = 4'b1000; 
                
           default: begin
               y = 4'b0000;
           end
       endcase 
    end
    else begin
        y = 4'b0000;
    end  
end

endmodule
