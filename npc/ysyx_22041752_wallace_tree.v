// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_wallace_tree.v
// Author        : Cw
// Created On    : 2022-11-29 17:20
// Last Modified : 2022-11-29 21:33
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_wallace_tree(
    input  wire[`RF_DATA_WD/2:0] w_I,
    input  wire[13:0] cin,
    output wire       S  ,
    output wire       C  ,
    output wire[13:0] cout
);

//第0层华莱士树
wire [10:0] S_0_f;
genvar i;
generate
    for (i=0;i<=10;i++) begin
        :W0
        ysyx_22041752_full_adder full_adder0(
            .A  (w_I[i*3+2]),
            .B  (w_I[i*3+1]),
            .Ci (w_I[i*3  ]),
            .S  (S_0_f[i]),
            .Co (cout[i])
        );
    end
endgenerate

//第1层华莱士树
wire [7:0] S_1_f;
ysyx_22041752_full_adder full_adder1_0(
    .A  (),
    .B  (),
    .Ci (),
    .S  (S_1_f[0]),
    .Co (cout[11])
);


generate
    for (i=0;i<4;i++) begin
        :W1
        ysyx_22041752_full_adder full_adder1(
            .A  (S_0_f[i*3+2]),
            .B  (S_0_f[i*3+1]),
            .Ci (S_0_f[i*3  ]),
            .S  (S_1_f[i]),
            .Co (cout[i+11])
        );
    end
endgenerate

ysyx_22041752_full_adder full_adder10(
    .A  (cin[2]),
    .B  (cin[1]),
    .Ci (cin[0]),
    .S  (S_1_f[0]),
    .Co (cout[10])
);
ysyx_22041752_full_adder full_adder11(
    .A  (cin[4]),
    .B  (cin[3]),
    .Ci (w_I[0]),
    .S  (S_1_f[1]),
    .Co (cout[11])
);
ysyx_22041752_full_adder full_adder12(
    .A  (w_I[1]),
    .B  (S_0_f[0]),
    .Ci (S_0_f[1]),
    .S  (S_1_f[2]),
    .Co (cout[12])
);
ysyx_22041752_full_adder full_adder13(
    .A  (S_0_f[2]),
    .B  (S_0_f[3]),
    .Ci (S_0_f[4]),
    .S  (S_1_f[3]),
    .Co (cout[13])
);
ysyx_22041752_full_adder full_adder14(
    .A  (S_0_f[5]),
    .B  (S_0_f[6]),
    .Ci (S_0_f[7]),
    .S  (S_1_f[4]),
    .Co (cout[14])
);
ysyx_22041752_full_adder full_adder15(
    .A  (S_0_f[8]),
    .B  (S_0_f[9]),
    .Ci (),
    .S  (S_1_f[5]),
    .Co (cout[15])
);
ysyx_22041752_full_adder full_adder12(
    .A  (w_I[1]),
    .B  (S_0_f[0]),
    .Ci (S_0_f[1]),
    .S  (S_1_f[2]),
    .Co (cout[12])
);
ysyx_22041752_full_adder full_adder13(
    .A  (S_0_f[2]),
    .B  (S_0_f[3]),
    .Ci (S_0_f[4]),
    .S  (S_1_f[3]),
    .Co (cout[13])
);

//第2层华莱士树
wire [1:0] S_2_f;
full_adder_1 full_adder9(
    .A  (cin[6]),
    .B  (cin[5]),
    .Ci (S_1_f[0]),
    .S  (S_2_f[0]),
    .Co (cout[9])
);
full_adder_1 full_adder10(
    .A  (S_1_f[1]),
    .B  (S_1_f[2]),
    .Ci (S_1_f[3]),
    .S  (S_2_f[1]),
    .Co (cout[10])
);

//第3层华莱士树
wire [1:0] S_3_f;
full_adder_1 full_adder11(
    .A  (cin[9]),
    .B  (cin[8]),
    .Ci (cin[7]),
    .S  (S_3_f[0]),
    .Co (cout[11])
);
full_adder_1 full_adder12(
    .A  (cin[10]),
    .B  (S_2_f[0]),
    .Ci (S_2_f[1]),
    .S  (S_3_f[1]),
    .Co (cout[12])
);

//第4层华莱士树
wire S_4_f;
full_adder_1 full_adder13(
    .A  (cin[11]),
    .B  (S_3_f[0]),
    .Ci (S_3_f[1]),
    .S  (S_4_f),
    .Co (cout[13])
);

//第5层华莱士树
full_adder_1 full_adder14(
    .A  (cin[13]),
    .B  (cin[12]),
    .Ci (S_4_f),
    .S  (S),
    .Co (C)
);

endmodule //wallace_tree_17
