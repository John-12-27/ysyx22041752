// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : encode42.v
// Author        : Rongye
// Created On    : 2022-08-18 17:36
// Last Modified : 2022-08-18 19:39
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------

module encode42 (
   input  wire       en,
   input  wire [3:0] x,
   output wire [1:0] y
);

/* 独热码编码器  */
   //always @(en or x) begin
      //if (en) begin
         //case (x)
             //4'b0001: y = 2'd0;
             //4'b0010: y = 2'd1;
             //4'b0100: y = 2'd2;
             //4'b1000: y = 2'd3;
             //default: begin
                //y = 2'dx;
             //end
         //endcase 
      //end
      //else begin
         //y = 2'd0; 
      //end 
   //end 

/* 优先编码器  */
//integer i;
//always @(x or en) begin
    //if (en) begin
       //y = 0;
       //for (i = 0; i < 4; i++) begin
          //if (x[i]==1) begin
             //y = i[1:0]; 
          //end 
       //end
    //end
    //else begin
       //y = 0; 
    //end  
//end

reg [1:0] m;

always @(en or x) begin
    casez (x)
        4'b1zzz: m = 2'd3;
        4'b01zz: m = 2'd2;
        4'b001z: m = 2'd1;
        4'b0001: m = 2'd0;
            
        default: begin
           m = 2'd0; 
        end
    endcase 
end

assign y = m & {2{en}};

endmodule
