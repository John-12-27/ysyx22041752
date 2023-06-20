// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_ICACHE_CMP.v
// Author        : Cw
// Created On    : 2023-06-17 11:07
// Last Modified : 2023-06-20 22:17
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_ICACHE_CMP (
    input  clk    ,
    input  reset  ,
    input  flush  ,

    output                                       cmp_allowin    ,
    input                                        rs_to_cs_valid ,
    input  [`ysyx_22041752_RS_TO_CS_BUS_WD-1:0]  rs_to_cs_bus   ,

    input  [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  tag0           ,
    input  [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  tag1           ,
    input  [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  tag2           ,
    input  [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  tag3           ,

    input  [128                           -1:0]  data0          ,
    input  [128                           -1:0]  data1          ,
    input  [128                           -1:0]  data2          ,
    input  [128                           -1:0]  data3          ,

    input  [`ysyx_22041752_ICACHE_EN_WD   -1:0]  valid          ,
    output [`ysyx_22041752_ICACHE_EN_WD   -1:0]  wen            ,

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
    output [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  wtag0          ,
    output [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  wtag1          ,
    output [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  wtag2          ,
    output [`ysyx_22041752_ICACHE_TAG_WD  -1:0]  wtag3          ,
    output                                       wv0            ,
    output                                       wv1            ,
    output                                       wv2            ,
    output                                       wv3            ,
    

    output [`ysyx_22041752_INST_WD        -1:0]  inst_rdata     ,
    output                                       cache_miss     ,

    output                                       sram_req       ,
    input                                        sram_ready     ,
    output [`ysyx_22041752_SRAM_ADDR_WD   -1:0]  sram_addr      ,
    input  [`ysyx_22041752_SRAM_DATA_WD   -1:0]  sram_rdata     ,
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
assign cs_ready_go = missfsm_pre==IDLE && !cache_miss || missfsm_pre==GET_1 || missfsm_pre==DROPED_1;

reg [`ysyx_22041752_RS_TO_CS_BUS_WD-1:0] rs_to_cs_bus_r;
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
wire [`ysyx_22041752_ICACHE_TAG_WD   -1:0] tag_cs   ;
wire [`ysyx_22041752_ICACHE_INDEX_WD -1:0] index_cs ;
wire [`ysyx_22041752_ICACHE_EN_WD    -1:0] rden_cs  ;
assign {tag_cs, index_cs, offset_cs, rden_cs} = rs_to_cs_bus_r;

wire hit_w0 = rden_cs[0]&valid[0] && tag0==tag_cs ||
              rden_cs[1]&valid[1] && tag1==tag_cs ;

wire hit_w1 = rden_cs[2]&valid[2] && tag2==tag_cs ||
              rden_cs[3]&valid[3] && tag3==tag_cs ;

wire [127:0] hit_line = hit_w0 ? rden_cs[0] ? data0 : data1 :
                                 rden_cs[2] ? data2 : data3 ;


assign cache_miss = cs_valid && !(hit_w0 || hit_w1 || missfsm_pre==GET_1);


reg  [3:0] missfsm_pre;
wire [3:0] missfsm_nxt;
parameter IDLE         =0;

parameter REQUEST_0    =1;
parameter RESPONSE_0   =2;
parameter GET_0        =3;
parameter DROP_REQ_0   =4;
parameter DROP_RESP_0  =5;
parameter DROPED_0     =6;

parameter REQUEST_1    =7;
parameter RESPONSE_1   =8;
parameter GET_1        =9;
parameter DROP_REQ_1   =10;
parameter DROP_RESP_1  =11;
parameter DROPED_1     =12;

always @(posedge clk) begin
    if (reset) begin
        missfsm_pre <= IDLE;
    end
    else begin
        missfsm_pre <= missfsm_nxt;
    end
end

assign missfsm_nxt = missfsm_pre==IDLE          && !flush && cache_miss ? REQUEST_0    :
                     missfsm_pre==REQUEST_0     && !flush && sram_ready ? RESPONSE_0   :
                     missfsm_pre==REQUEST_0     &&  flush &&!sram_ready ? DROP_REQ_0   :
                     missfsm_pre==REQUEST_0     &&  flush && sram_ready ? DROP_RESP_0  :
                     missfsm_pre==RESPONSE_0    && !flush && sram_valid ? GET_0        :
                     missfsm_pre==RESPONSE_0    &&  flush &&!sram_valid ? DROP_RESP_0  :
                     missfsm_pre==RESPONSE_0    &&  flush && sram_valid ? DROPED_0     :
                     missfsm_pre==GET_0         && !flush               ? REQUEST_1    :         
                     missfsm_pre==GET_0         &&  flush               ? DROP_REQ_1   :         
                     missfsm_pre==REQUEST_1     && !flush && sram_ready ? RESPONSE_1   :
                     missfsm_pre==REQUEST_1     &&  flush &&!sram_ready ? DROP_REQ_1   :
                     missfsm_pre==REQUEST_1     &&  flush && sram_ready ? DROP_RESP_1  :
                     missfsm_pre==RESPONSE_1    && !flush && sram_valid ? GET_1        :
                     missfsm_pre==RESPONSE_1    &&  flush &&!sram_valid ? DROP_RESP_1  :
                     missfsm_pre==RESPONSE_1    &&  flush && sram_valid ? DROPED_1     :
                     missfsm_pre==GET_1                                 ? IDLE         :
                     missfsm_pre==DROP_REQ_0    &&           sram_ready ? DROP_RESP_0  :
                     missfsm_pre==DROP_RESP_0   &&           sram_valid ? DROPED_0     :
                     missfsm_pre==DROPED_0                              ? DROP_REQ_1   :
                     missfsm_pre==DROP_REQ_1    &&           sram_ready ? DROP_RESP_1  :
                     missfsm_pre==DROP_RESP_1   &&           sram_valid ? DROPED_1     :
                     missfsm_pre==DROPED_1                              ? IDLE         :
                                                                          missfsm_pre;

/* verilator lint_off UNUSEDSIGNAL */
wire [`ysyx_22041752_PC_WD-1 :0] inst_addr_cs = {tag_cs, index_cs, offset_cs};
/* verilator lint_on UNUSEDSIGNAL */
assign sram_req = (missfsm_pre==REQUEST_0 || missfsm_pre==REQUEST_1 || missfsm_pre==DROP_REQ_0 || missfsm_pre==DROP_REQ_1) && !sram_ready;
assign sram_addr= (missfsm_pre==REQUEST_0 || missfsm_pre==DROP_REQ_0) ? {inst_addr_cs[`ysyx_22041752_PC_WD-1:4], 4'b0000} : {inst_addr_cs[`ysyx_22041752_PC_WD-1:4], 4'b1000};

reg [`ysyx_22041752_SRAM_DATA_WD-1:0] line_lower;
always @(posedge clk) begin
    if (reset) begin
        line_lower <= 0;
    end
    else if(missfsm_nxt==GET_0) begin
        line_lower <= sram_rdata;
    end
end
reg [`ysyx_22041752_SRAM_DATA_WD-1:0] line_upper;
always @(posedge clk) begin
    if (reset) begin
        line_upper <= 0;
    end
    else if(missfsm_nxt==GET_1) begin
        line_upper <= sram_rdata;
    end
end

wire [127:0] new_line = {line_upper, line_lower}; 

assign inst_rdata = missfsm_pre == GET_1 ?
                    offset_cs[`ysyx_22041752_ICACHE_OFFSET_WD-1:2] == 0 ? new_line[ 31: 0] : 
                    offset_cs[`ysyx_22041752_ICACHE_OFFSET_WD-1:2] == 1 ? new_line[ 63:32] : 
                    offset_cs[`ysyx_22041752_ICACHE_OFFSET_WD-1:2] == 2 ? new_line[ 95:64] : 
               /* offset_cs[`ysyx_22041752_ICACHE_OFFSET_WD-1:2] == 3 ?*/ new_line[127:96] 
                                        :
                    offset_cs[`ysyx_22041752_ICACHE_OFFSET_WD-1:2] == 0 ? hit_line[ 31: 0] : 
                    offset_cs[`ysyx_22041752_ICACHE_OFFSET_WD-1:2] == 1 ? hit_line[ 63:32] : 
                    offset_cs[`ysyx_22041752_ICACHE_OFFSET_WD-1:2] == 2 ? hit_line[ 95:64] : 
               /* offset_cs[`ysyx_22041752_ICACHE_OFFSET_WD-1:2] == 3 ?*/ hit_line[127:96] ;

reg replace;
always @(posedge clk) begin
    if (reset) begin
        replace <= 0;
    end
    else begin
        replace <= ~replace;
    end
end

assign wen[0] = ~(missfsm_nxt==GET_1 && rden_cs[0] && replace==0) ;
assign wen[1] = ~(missfsm_nxt==GET_1 && rden_cs[1] && replace==0) ;
assign wen[2] = ~(missfsm_nxt==GET_1 && rden_cs[2] && replace==1) ;
assign wen[3] = ~(missfsm_nxt==GET_1 && rden_cs[3] && replace==1) ;

assign bwen0  = 0;
assign bwen1  = 0;
assign bwen2  = 0;
assign bwen3  = 0;

assign wdata0 = {sram_rdata, line_lower};
assign wdata1 = {sram_rdata, line_lower};
assign wdata2 = {sram_rdata, line_lower};
assign wdata3 = {sram_rdata, line_lower};

assign wtag0  = tag_cs;
assign wtag1  = tag_cs;
assign wtag2  = tag_cs;
assign wtag3  = tag_cs;

assign wv0  = 1'b1;
assign wv1  = 1'b1;
assign wv2  = 1'b1;
assign wv3  = 1'b1;

assign waddr0 = index_cs[5:0];
assign waddr1 = index_cs[5:0];
assign waddr2 = index_cs[5:0];
assign waddr3 = index_cs[5:0];

endmodule

