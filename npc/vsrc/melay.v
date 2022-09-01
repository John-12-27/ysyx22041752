// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : melay.v
// Author        : Cw
// Created On    : 2022-09-01 18:05
// Last Modified : 2022-09-01 19:03
// ---------------------------------------------------------------------------------
// Description   : Melay FSM
//
//
// -FHDR----------------------------------------------------------------------------
module melay (
    input  wire clk,
    input  wire rst,
    input  wire w ,
    output reg  z
);
   
localparam S0 = 0;
localparam S1 = 1;
localparam S2 = 2;
localparam S3 = 3;
localparam S4 = 4;
localparam S5 = 5;
localparam S6 = 6;
localparam S7 = 7;
localparam S8 = 8;

reg [3:0] pre_state;
reg [3:0] nxt_state;

always @(posedge clk) begin
    if (rst) begin
        pre_state <= S0;
    end
    else begin
        pre_state <= nxt_state;
    end
end

always @(*) begin
    case (pre_state)
        S0:
            if (!w) begin
                nxt_state = S1;
            end
            else begin
                nxt_state = S5;
            end
        S1:
            if (!w) begin
                nxt_state = S2;
            end
            else begin
                nxt_state = S5;
            end
        S2:
            if (!w) begin
                nxt_state = S3;
            end
            else begin
                nxt_state = S5;
            end
        S3:
            if (!w) begin
                nxt_state = S4;
            end
            else begin
                nxt_state = S5;
            end
        S4:
            if (!w) begin
                nxt_state = S4;
            end
            else begin
                nxt_state = S5;
            end
        S5:
            if (!w) begin
                nxt_state = S1;
            end
            else begin
                nxt_state = S6;
            end
        S6:
            if (!w) begin
                nxt_state = S1;
            end
            else begin
                nxt_state = S7;
            end
        S7:
            if (!w) begin
                nxt_state = S1;
            end
            else begin
                nxt_state = S8;
            end
        S8:
            if (!w) begin
                nxt_state = S1;
            end
            else begin
                nxt_state = S8;
            end
        default: begin
            nxt_state = S0;
        end
    endcase
end

always @(*) begin
    if (pre_state==S4) begin
        z = !w;
    end
    else if (pre_state==S8) begin
        z = w;
    end
    else begin
        z = 1'b0;
    end
end

endmodule
