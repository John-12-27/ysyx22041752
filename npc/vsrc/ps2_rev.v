// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ps2_rev.v
// Author        : Cw
// Created On    : 2022-09-02 09:31
// Last Modified : 2022-09-02 12:36
// ---------------------------------------------------------------------------------
// Description   : ps/2 receive
//
//
// -FHDR----------------------------------------------------------------------------
module ps2_rev(
    input  wire clk     ,
    input  wire rst     ,
    input  wire ps2_clk ,
    input  wire ps2_data,
    output reg  o
);

reg [9:0] buffer;        // ps2_data bits
wire [3:0] cnt;         // count ps2_data bits
reg [2:0] ps2_clk_sync;
wire sampling;

always @(posedge clk) begin
    ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
end

assign sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

always @(posedge clk) begin
    if(sampling)
        buffer[cnt] <= ps2_data;
end

always @(posedge clk) begin
    if (!buffer[0] && ps2_data) begin
        if(^buffer[9:1])
            o <= 1'b1;
    end
end

count #(
    .MAX_COUNT                      ( 10                             ),
    .UP_COUNT                       ( 1                             ))
u_count_0(
    .rst                            ( rst || cnt==4'd9               ),
    .en                             ( sampling                       ),
    .clk                            ( clk                            ),
    .q                              ( cnt                            )
);


endmodule
