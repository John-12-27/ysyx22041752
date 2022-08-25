`default_nettype none

module top(
    input  wire [31:0] x,       
    input  wire [31:0] y,       
    input  wire [2 :0] op,      
    output wire        overflow,
    output wire [31:0] res      
);

alu #(
    .DATA_LEN                       ( 32                           ))
u_alu_0(
    .a                              ( x                             ),
    .b                              ( y                             ),
    .op                             ( op                            ),
    .overflow                       ( overflow                      ),
    .res                            ( res                           )
);

//seg u_seg_0(
    //.num                            ( num                           ),
    //.seg_en                         ( seg_en                        ),
    //.o_seg0                         ( o_seg0                        ),
    //.o_seg1                         ( o_seg1                        ),
    //.o_seg2                         ( o_seg2                        ),
    //.o_seg3                         ( o_seg3                        ),
    //.o_seg4                         ( o_seg4                        ),
    //.o_seg5                         ( o_seg5                        ),
    //.o_seg6                         ( o_seg6                        ),
    //.o_seg7                         ( o_seg7                        )
//);

endmodule
