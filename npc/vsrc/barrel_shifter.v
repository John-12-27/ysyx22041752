// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : barrel_shifter.v
// Author        : Cw
// Created On    : 2022-08-30 17:45
// Last Modified : 2022-11-19 10:03
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
module barrel_shifter # (DATA_LEN = 8)
(
    input  wire [DATA_LEN-1:0]         din,
    input  wire [$clog2(DATA_LEN)-1:0] shamt,
    input  wire                        left,
    input  wire                        arithmetic,
    output reg  [DATA_LEN-1:0]         dout
);
/* verilator lint_off UNOPTFLAT */  
reg [DATA_LEN-1:0] d_r [$clog2(DATA_LEN)-1:-1];
always @(din or shamt or left or arithmetic) begin
    d_r[-1] = din;
end

always @(din or shamt or left or arithmetic) begin
    dout = d_r[$clog2(DATA_LEN)-1];
end

always @(din or shamt or left or arithmetic) begin
    for (int i = 0; i < $clog2(DATA_LEN); i++) begin
        for (int j = 0; j < DATA_LEN; j++) begin
            if (j>=DATA_LEN-2**i) begin

                //mux4_1
                if (shamt[i] && left) begin
                    d_r[i][j] = d_r[i-1][j-2**i];    
                end
                else if (shamt[i] && ~left) begin
                    d_r[i][j] = arithmetic && d_r[i-1][DATA_LEN-1];    
                end 
                else begin
                    d_r[i][j] = d_r[i-1][j];
                end
            end
            else if (j<2**i) begin
                
                //mux4_1
                if (shamt[i] && left) begin
                    d_r[i][j] = 1'b0;    
                end
                else if (shamt[i] && ~left) begin
                    d_r[i][j] = d_r[i-1][j+2**i];    
                end 
                else begin
                    d_r[i][j] = d_r[i-1][j];
                end
                
            end
            else begin
                
                //mux4_1
                if (shamt[i] && left) begin
                    d_r[i][j] = d_r[i-1][j-2**i];    
                end
                else if (shamt[i] && ~left) begin
                    d_r[i][j] = d_r[i-1][j+2**i];    
                end 
                else begin
                    d_r[i][j] = d_r[i-1][j];
                end
                
            end
        end
    end
end

endmodule
