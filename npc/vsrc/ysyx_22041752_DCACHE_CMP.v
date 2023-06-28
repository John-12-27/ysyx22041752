// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_DCACHE_CMP.v
// Author        : Cw
// Created On    : 2023-06-17 11:07
// Last Modified : 2023-06-28 20:21
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_DCACHE_CMP (
    input  clk    ,
    input  reset  ,

    output                                         cmp_allowin    ,
    input                                          rs_to_cs_valid ,
    input  [`ysyx_22041752_DRS_TO_DCS_BUS_WD-1:0]  rs_to_cs_bus   ,

    input  [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag0           ,
    input  [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag1           ,
    input  [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag2           ,
    input  [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag3           ,

    input  [128                           -1:0]  data0          ,
    input  [128                           -1:0]  data1          ,
    input  [128                           -1:0]  data2          ,
    input  [128                           -1:0]  data3          ,

    input  [`ysyx_22041752_DCACHE_EN_WD   -1:0]  valid          ,
    input  [`ysyx_22041752_DCACHE_EN_WD   -1:0]  dirty          ,
    output [`ysyx_22041752_DCACHE_EN_WD   -1:0]  wen            ,

    output [128                           -1:0]  bwen0          ,
    output [128                           -1:0]  wdata0         ,
    output [                               5:0]  waddr0         ,
    output [128                           -1:0]  bwen1          ,
    output [128                           -1:0]  wdata1         ,
    output [                               5:0]  waddr1         ,
    output [128                           -1:0]  bwen2          ,
    output [128                           -1:0]  wdata2         ,
    output [                               5:0]  waddr2         ,
    output [128                           -1:0]  bwen3          ,
    output [128                           -1:0]  wdata3         ,
    output [                               5:0]  waddr3         ,
    output [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  wtag0          ,
    output [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  wtag1          ,
    output [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  wtag2          ,
    output [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  wtag3          ,
    output                                       wv0            ,
    output                                       wv1            ,
    output                                       wv2            ,
    output                                       wv3            ,
    output                                       wd0            ,
    output                                       wd1            ,
    output                                       wd2            ,
    output                                       wd3            ,

    output [`ysyx_22041752_DATA_DATA_WD   -1:0]  data_rdata     ,
    output                                       cache_miss     ,
    output                                       write_hit      ,

    output                                       sram_req       ,
    input                                        sram_ready     ,
    output                                       sram_wen       ,
    output [`ysyx_22041752_DATA_ADDR_WD   -1:0]  sram_addr      ,
    output [`ysyx_22041752_DATA_DATA_WD   -1:0]  sram_wdata     ,
    input  [`ysyx_22041752_DATA_DATA_WD   -1:0]  sram_rdata     ,
    input                                        sram_valid     
);
    
wire cs_ready_go;
reg  cs_valid   ;
always @(posedge clk) begin
    if (reset) begin
        cs_valid <= 1'b0;
    end
    else if (cmp_allowin) begin
        cs_valid <= rs_to_cs_valid;
    end
end

assign cmp_allowin = !cs_valid || cs_ready_go;
assign cs_ready_go = missfsm_pre==IDLE && !cache_miss || missfsm_pre==READ_DONE_1;

reg [`ysyx_22041752_DRS_TO_DCS_BUS_WD-1:0] rs_to_cs_bus_r;
always @(posedge clk) begin
    if (reset) begin
        rs_to_cs_bus_r <= 0;
    end
    else if (rs_to_cs_valid && cmp_allowin) begin
        rs_to_cs_bus_r <= rs_to_cs_bus;
    end
end

/* verilator lint_off UNUSEDSIGNAL */
wire [`ysyx_22041752_ICACHE_OFFSET_WD-1:0] offset_cs;
/* verilator lint_on UNUSEDSIGNAL */
wire [`ysyx_22041752_DCACHE_TAG_WD   -1:0] tag_cs   ;
wire [`ysyx_22041752_DCACHE_INDEX_WD -1:0] index_cs ;
wire [`ysyx_22041752_DCACHE_EN_WD    -1:0] rden_cs  ;
wire [`ysyx_22041752_DATA_DATA_WD    -1:0] data_wdata;
wire [`ysyx_22041752_DATA_WEN_WD     -1:0] data_wen ;
assign {tag_cs, index_cs, offset_cs, data_wdata, data_wen, rden_cs} = rs_to_cs_bus_r;

wire hit_w0 = missfsm_pre==IDLE && (rden_cs[0]&valid[0] && tag0==tag_cs);
wire hit_w1 = missfsm_pre==IDLE && (rden_cs[1]&valid[1] && tag1==tag_cs);
wire hit_w2 = missfsm_pre==IDLE && (rden_cs[2]&valid[2] && tag2==tag_cs);
wire hit_w3 = missfsm_pre==IDLE && (rden_cs[3]&valid[3] && tag3==tag_cs);

wire [127:0] hit_line = {128{hit_w0}} & data0 | 
                        {128{hit_w1}} & data1 |
                        {128{hit_w2}} & data2 |
                        {128{hit_w3}} & data3 ;

assign write_hit = (hit_w0||hit_w1||hit_w2||hit_w3) && data_wen!=0;

assign cache_miss = |rden_cs && cs_valid && !(hit_w0 || hit_w1 || hit_w2 || hit_w3 || missfsm_pre==READ_DONE_1);
wire   miss_write = cache_miss &&|data_wen;
wire   miss_read  = cache_miss &&!miss_write;

reg  [3:0] missfsm_pre;
wire [3:0] missfsm_nxt;
parameter IDLE         = 0;

parameter MISS         = 1; 
parameter WRITE_REQ_0  = 2;
parameter WRITE_RESP_0 = 3;
parameter WRITE_DONE_0 = 4;
parameter WRITE_REQ_1  = 5;
parameter WRITE_RESP_1 = 6;
parameter WRITE_DONE_1 = 7;

parameter READ_REQ_0   = 8;
parameter READ_RESP_0  = 9;
parameter READ_DONE_0  =10;
parameter READ_REQ_1   =11;
parameter READ_RESP_1  =12;
parameter READ_DONE_1  =13;

always @(posedge clk) begin
    if (reset) begin
        missfsm_pre <= IDLE;
    end
    else begin
        missfsm_pre <= missfsm_nxt;
    end
end

reg[1:0] random;
always @(posedge clk) begin
    if (reset) begin
        random <= 0;
    end
    else begin
        random <= random+1;
    end
end
reg [1:0] replace;
always @(posedge clk) begin
    if (reset) begin
        replace <= 0;
    end
    else if(missfsm_nxt==MISS) begin
        casez (valid)
            4'b???0: begin
                replace <= 0;
            end
            4'b??01: begin
                replace <= 1;
            end
            4'b?011: begin
                replace <= 2;
            end
            4'b0111: begin
                replace <= 3;
            end
            default: begin
                replace <= random;
            end
        endcase
    end
end

assign missfsm_nxt =(missfsm_pre==IDLE||missfsm_pre==READ_DONE_1) &&  cache_miss     ? MISS         :
                     missfsm_pre==MISS                            &&  dirty[replace] ? WRITE_REQ_0  :
                     missfsm_pre==MISS                            && !dirty[replace] ? READ_REQ_0   :
                     missfsm_pre==WRITE_REQ_0                     &&  sram_ready     ? WRITE_RESP_0 :
                     missfsm_pre==WRITE_RESP_0                    &&  sram_valid     ? WRITE_DONE_0 :
                     missfsm_pre==WRITE_DONE_0                                       ? WRITE_REQ_1  :
                     missfsm_pre==WRITE_REQ_1                     &&  sram_ready     ? WRITE_RESP_1 :
                     missfsm_pre==WRITE_RESP_1                    &&  sram_valid     ? WRITE_DONE_1 :
                     missfsm_pre==WRITE_DONE_1                                       ? READ_REQ_0   :
                     missfsm_pre==READ_REQ_0                      &&  sram_ready     ? READ_RESP_0  :
                     missfsm_pre==READ_RESP_0                     &&  sram_valid     ? READ_DONE_0  :
                     missfsm_pre==READ_DONE_0                                        ? READ_REQ_1   :
                     missfsm_pre==READ_REQ_1                      &&  sram_ready     ? READ_RESP_1  :
                     missfsm_pre==READ_RESP_1                     &&  sram_valid     ? READ_DONE_1  :
                     missfsm_pre==READ_DONE_1                                        ? IDLE         :
                                                                                       missfsm_pre  ;

/* verilator lint_off UNUSEDSIGNAL */
wire [`ysyx_22041752_PC_WD-1 :0] data_addr_cs = {tag_cs, index_cs, offset_cs};

reg [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag0_r;
always @(posedge clk) begin
    if (reset) begin
        tag0_r <= 0;
    end
    else if(missfsm_nxt==MISS) begin
        tag0_r <= tag0;
    end
end
reg [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag1_r;
always @(posedge clk) begin
    if (reset) begin
        tag1_r <= 0;
    end
    else if(missfsm_nxt==MISS) begin
        tag1_r <= tag1;
    end
end
reg [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag2_r;
always @(posedge clk) begin
    if (reset) begin
        tag2_r <= 0;
    end
    else if(missfsm_nxt==MISS) begin
        tag2_r <= tag2;
    end
end
reg [`ysyx_22041752_DCACHE_TAG_WD  -1:0]  tag3_r;
always @(posedge clk) begin
    if (reset) begin
        tag3_r <= 0;
    end
    else if(missfsm_nxt==MISS) begin
        tag3_r <= tag3;
    end
end

reg [127:0] data0_r;
always @(posedge clk) begin
    if (reset) begin
        data0_r <= 0;
    end
    else if(missfsm_nxt==MISS) begin
        data0_r <= data0;
    end
end
reg [127:0] data1_r;
always @(posedge clk) begin
    if (reset) begin
        data1_r <= 0;
    end
    else if(missfsm_nxt==MISS) begin
        data1_r <= data1;
    end
end
reg [127:0] data2_r;
always @(posedge clk) begin
    if (reset) begin
        data2_r <= 0;
    end
    else if(missfsm_nxt==MISS) begin
        data2_r <= data2;
    end
end
reg [127:0] data3_r;
always @(posedge clk) begin
    if (reset) begin
        data3_r <= 0;
    end
    else if(missfsm_nxt==MISS) begin
        data3_r <= data3;
    end
end

wire [`ysyx_22041752_DCACHE_TAG_WD  -1:0] tag = {`ysyx_22041752_DCACHE_TAG_WD{replace==0}} & tag0_r |
                                                {`ysyx_22041752_DCACHE_TAG_WD{replace==1}} & tag1_r |
                                                {`ysyx_22041752_DCACHE_TAG_WD{replace==2}} & tag2_r |
                                                {`ysyx_22041752_DCACHE_TAG_WD{replace==3}} & tag3_r ;
wire [`ysyx_22041752_PC_WD-1 :0] replace_addr = {tag, index_cs, offset_cs};
/* verilator lint_on UNUSEDSIGNAL */
assign sram_req = (missfsm_pre==WRITE_REQ_0 || missfsm_pre==WRITE_REQ_1 || 
                   missfsm_pre==READ_REQ_0  || missfsm_pre==READ_REQ_1  ) && !sram_ready;
assign sram_addr= missfsm_pre==READ_REQ_0 ? {data_addr_cs[`ysyx_22041752_DATA_ADDR_WD-1:4], 4'b0000} :
                  missfsm_pre==READ_REQ_1 ? {data_addr_cs[`ysyx_22041752_DATA_ADDR_WD-1:4], 4'b1000} :
                  missfsm_pre==WRITE_REQ_0? {replace_addr[`ysyx_22041752_DATA_ADDR_WD-1:4], 4'b0000} :
            /* missfsm_pre==WRITE_REQ_1? */ {replace_addr[`ysyx_22041752_DATA_ADDR_WD-1:4], 4'b1000} ;
                  
assign sram_wen   = (missfsm_pre==WRITE_REQ_0 || missfsm_pre==WRITE_REQ_1);
wire [127:0] writeback = {128{replace==0}} & data0_r |
                         {128{replace==1}} & data1_r |
                         {128{replace==2}} & data2_r |
                         {128{replace==3}} & data3_r ;
assign sram_wdata = missfsm_pre==WRITE_REQ_0 ? writeback[63:0] : writeback[127:64];


reg [`ysyx_22041752_DATA_DATA_WD-1:0] line_lower;
always @(posedge clk) begin
    if (reset) begin
        line_lower <= 0;
    end
    else if(missfsm_nxt==READ_DONE_0) begin
        line_lower <= sram_rdata;
    end
end
reg [`ysyx_22041752_DATA_DATA_WD-1:0] line_upper;
always @(posedge clk) begin
    if (reset) begin
        line_upper <= 0;
    end
    else if(missfsm_nxt==READ_DONE_1) begin
        line_upper <= sram_rdata;
    end
end

wire [127:0] new_line = {line_upper, line_lower}; 

assign data_rdata = missfsm_pre == READ_DONE_1 ?
                    offset_cs[`ysyx_22041752_DCACHE_OFFSET_WD-1] ? new_line[127:64] : 
                                                                   new_line[ 63: 0]
                                               :
                    offset_cs[`ysyx_22041752_DCACHE_OFFSET_WD-1] ? hit_line[127:64] : 
                                                                   hit_line[ 63: 0] ;

assign wen[0] = ~(missfsm_nxt==READ_DONE_1 && replace==0 || write_hit && hit_w0) ;
assign wen[1] = ~(missfsm_nxt==READ_DONE_1 && replace==1 || write_hit && hit_w1) ;
assign wen[2] = ~(missfsm_nxt==READ_DONE_1 && replace==2 || write_hit && hit_w2) ;
assign wen[3] = ~(missfsm_nxt==READ_DONE_1 && replace==3 || write_hit && hit_w3) ;

assign bwen0  = ~(missfsm_nxt==READ_DONE_1 && replace==0 ? {128{1'b1}} : offset_cs[`ysyx_22041752_DCACHE_OFFSET_WD-1] ? {data_wen,64'b0} : {64'b0,data_wen});
assign bwen1  = ~(missfsm_nxt==READ_DONE_1 && replace==1 ? {128{1'b1}} : offset_cs[`ysyx_22041752_DCACHE_OFFSET_WD-1] ? {data_wen,64'b0} : {64'b0,data_wen});
assign bwen2  = ~(missfsm_nxt==READ_DONE_1 && replace==2 ? {128{1'b1}} : offset_cs[`ysyx_22041752_DCACHE_OFFSET_WD-1] ? {data_wen,64'b0} : {64'b0,data_wen});
assign bwen3  = ~(missfsm_nxt==READ_DONE_1 && replace==3 ? {128{1'b1}} : offset_cs[`ysyx_22041752_DCACHE_OFFSET_WD-1] ? {data_wen,64'b0} : {64'b0,data_wen});

reg [127:0] write_newline; 
always @(*) begin
    if (offset_cs[`ysyx_22041752_DCACHE_OFFSET_WD-1]) begin
        write_newline = {(sram_rdata& ~data_wen) | (data_wen&data_wdata),line_lower};
    end
    else begin
        write_newline = {sram_rdata,(line_lower& ~data_wen)|(data_wen&data_wdata)};
    end
end

assign wdata0 = write_hit ? {2{data_wdata}} : miss_read ? {sram_rdata, line_lower} : write_newline;
assign wdata1 = write_hit ? {2{data_wdata}} : miss_read ? {sram_rdata, line_lower} : write_newline;
assign wdata2 = write_hit ? {2{data_wdata}} : miss_read ? {sram_rdata, line_lower} : write_newline;
assign wdata3 = write_hit ? {2{data_wdata}} : miss_read ? {sram_rdata, line_lower} : write_newline;

assign wtag0  = tag_cs;
assign wtag1  = tag_cs;
assign wtag2  = tag_cs;
assign wtag3  = tag_cs;

assign wv0  = 1'b1;
assign wv1  = 1'b1;
assign wv2  = 1'b1;
assign wv3  = 1'b1;

assign wd0  = write_hit || miss_write;
assign wd1  = write_hit || miss_write;
assign wd2  = write_hit || miss_write;
assign wd3  = write_hit || miss_write;

assign waddr0 = index_cs;
assign waddr1 = index_cs;
assign waddr2 = index_cs;
assign waddr3 = index_cs;

endmodule

