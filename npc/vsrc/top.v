`default_nettype none

module top(
    input  wire [7:0] din       ,
    input  wire [2:0] shamt     ,
    input  wire       left      ,
    input  wire       arithmetic,
    output wire [7:0] dout      
);

barrel_shifter #(
    .DATA_LEN                       ( 8                             ))
u_barrel_shifter_0(
    .din                            ( din                           ),
    .shamt                          ( shamt                         ),
    .left                           ( left                          ),
    .arithmetic                     ( arithmetic                    ),
    .dout                           ( dout                          )
);


endmodule
