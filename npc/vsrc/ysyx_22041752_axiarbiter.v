// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_axiarbiter.v
// Author        : Cw
// Created On    : 2023-05-27 17:57
// Last Modified : 2023-06-01 22:48
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_axiarbiter (
    input          clk     ,
    input          reset   ,

    //from IFU & LSU
    input                                    inst_en    ,
    output                                   inst_resp  ,
    input  [`ysyx_22041752_SRAM_ADDR_WD-1:0] inst_addr  ,
    output [`ysyx_22041752_SRAM_DATA_WD-1:0] inst_rdata ,
    input                                    data_en    ,
    output                                   data_resp  ,
    input  [`ysyx_22041752_SRAM_WEN_WD -1:0] data_wen   ,
    input  [`ysyx_22041752_SRAM_ADDR_WD-1:0] data_addr  ,
    input  [`ysyx_22041752_SRAM_DATA_WD-1:0] data_wdata ,
    output [`ysyx_22041752_SRAM_DATA_WD-1:0] data_rdata ,

    //axi_interface
    output [ 3:0] arid    ,
    output [31:0] araddr  ,
    output [ 7:0] arlen   ,
    output [ 2:0] arsize  ,
    output [ 1:0] arburst ,
    output        arvalid ,
    input         arready ,
                               
    input  [ 3:0] rid     ,
    input  [63:0] rdata   ,
    input  [ 1:0] rresp   ,
    input         rlast   ,
    input         rvalid  ,
    output        rready  ,
                               
    output [ 3:0] awid    ,
    output [31:0] awaddr  ,
    output [ 7:0] awlen   ,
    output [ 2:0] awsize  ,
    output [ 1:0] awburst ,
    output        awvalid ,
    input         awready ,
                          
    output [63:0] wdata   ,
    output [ 7:0] wstrb   ,
    output        wlast   ,
    output        wvalid  ,
    input         wready  ,
                               
    input  [ 3:0] bid     ,
    input  [ 1:0] bresp   ,
    input         bvalid  ,
    output        bready  
);
    
reg  [2:0] arfsm_pre;
wire [2:0] arfsm_nxt;
parameter AR_IDLE=3;
parameter AR_FETCH=1;
parameter AR_LOAD=2;
parameter AR_FETCH_OK=3;
parameter AR_LOAD_OK=4;
always @(posedge clk) begin
    if (reset) begin
        arfsm_pre <= AR_IDLE;
    end
    else begin
        arfsm_pre <= arfsm_nxt;
    end
end
wire data_ren = data_en && data_wen==0;
assign arfsm_nxt = (arfsm_pre==AR_IDLE || arfsm_pre==AR_FETCH_OK || arfsm_pre==AR_LOAD_OK) && data_ren? AR_LOAD     :
                   (arfsm_pre==AR_IDLE || arfsm_pre==AR_FETCH_OK || arfsm_pre==AR_LOAD_OK) && inst_en ? AR_FETCH    :  
                    arfsm_pre==AR_FETCH                                                    && arready ? AR_FETCH_OK :  
                    arfsm_pre==AR_LOAD                                                     && arready ? AR_LOAD_OK  :
                   (arfsm_pre==AR_FETCH_OK || arfsm_pre==AR_LOAD_OK)                                  ? AR_IDLE     :
                                                                                                        arfsm_pre   ;

reg  [2:0] rfsm_pre;
wire [2:0] rfsm_nxt;
parameter R_IDLE=3;
parameter R_WAIT_FETCH=1;
parameter R_WAIT_LOAD=2;
parameter R_GET_INST=3;
parameter R_GET_DATA=4;
always @(posedge clk) begin
    if (reset) begin
        rfsm_pre <= R_IDLE;
    end
    else begin
        rfsm_pre <= rfsm_nxt;
    end
end

assign rfsm_nxt = (rfsm_pre==R_IDLE || rfsm_pre==R_GET_INST || rfsm_pre==R_GET_DATA) && arfsm_pre==AR_FETCH_OK ? R_WAIT_FETCH :
                  (rfsm_pre==R_IDLE || rfsm_pre==R_GET_INST || rfsm_pre==R_GET_DATA) && arfsm_pre==AR_LOAD_OK  ? R_WAIT_LOAD  :
                   rfsm_pre==R_WAIT_FETCH                                            && rvalid&&rid==0         ? R_GET_INST   :
                   rfsm_pre==R_WAIT_LOAD                                             && rvalid&&rid==1         ? R_GET_DATA   :
                  (rfsm_pre==R_GET_INST || rfsm_pre==R_GET_DATA)                                               ? R_IDLE       :
                                                                                                                 rfsm_pre;

reg  [2:0] awfsm_pre;
wire [2:0] awfsm_nxt;
parameter AW_IDLE=0;
parameter AW_STORE=1;
parameter AW_OK=2;
always @(posedge clk) begin
    if (reset) begin
        awfsm_pre <= AW_IDLE;
    end
    else begin
        awfsm_pre <= awfsm_nxt;
    end
end

assign awfsm_nxt = (awfsm_pre==AW_IDLE || awfsm_pre==AW_OK) && (|data_wen)     ? AW_STORE :
                    awfsm_pre==AW_STORE                     &&  awready&wready ? AW_OK    :
                    awfsm_pre==AW_OK                                           ? AW_IDLE  :
                                                                                 awfsm_pre;

reg  [2:0] bfsm_pre;
wire [2:0] bfsm_nxt;
parameter B_IDLE=0;
parameter B_WAIT_STORE=1;
parameter B_GET=2;
always @(posedge clk) begin
    if (reset) begin
        bfsm_pre <= B_IDLE;
    end
    else begin
        bfsm_pre <= bfsm_nxt;
    end
end

assign bfsm_nxt = (bfsm_pre==B_IDLE || bfsm_pre==B_GET) && awfsm_pre==AW_OK ? B_WAIT_STORE :
                   bfsm_pre==B_WAIT_STORE               && bvalid           ? B_GET        :
                   bfsm_pre==B_GET                                          ? B_IDLE       :
                                                                              bfsm_pre     ;

/*
reg  [2:0] arbfsm_pre;
wire [2:0] arbfsm_nxt;
parameter IDLE        = 0;
parameter FETCH       = 1;
parameter LOAD        = 2;
parameter STORE       = 3;
parameter WAIT_FETCH  = 4;
parameter WAIT_LOAD   = 5;
parameter WAIT_STORE  = 6;

always @(posedge clk) begin
    if (reset) begin
        arbfsm_pre <= IDLE;
    end
    else begin
        arbfsm_pre <= arbfsm_nxt;
    end
end
assign arbfsm_nxt = arbfsm_pre==IDLE  && !data_en&&  inst_en  ? FETCH      :
                    arbfsm_pre==IDLE  &&  data_en&&!|data_wen ? LOAD       :
                    arbfsm_pre==IDLE  && !data_en&& |data_wen ? STORE      :
                    arbfsm_pre==FETCH &&  arready             ? WAIT_FETCH :
                    arbfsm_pre==LOAD  &&  arready             ? WAIT_LOAD  :
                    arbfsm_pre==STORE &&  awready&&wready     ? WAIT_STORE :
                    arbfsm_pre==WAIT_FETCH &&  rvalid&&rid==0 ? IDLE       :
                    arbfsm_pre==WAIT_LOAD  &&  rvalid&&rid==1 ? IDLE       :
                    arbfsm_pre==WAIT_STORE &&  bvalid&&bid==1 ? IDLE       :
                                                                arbfsm_pre ;

assign arid    = arbfsm_nxt==FETCH ? 4'h0 : 4'h1;
assign araddr  = arbfsm_nxt==FETCH ? inst_addr : data_addr;
assign arlen   = 8'h1;
assign arsize  = 3'h7;
assign arburst = 2'b01;
assign arvalid = arbfsm_pre==FETCH || arbfsm_pre==LOAD;

assign rready  = arbfsm_pre==WAIT_FETCH || arbfsm_pre==WAIT_LOAD;

assign awid    = 4'h1;
assign awaddr  = data_addr[31:0];
assign awlen   = 8'h1;
assign awsize  = 3'h7;
assign awburst = 2'b01;
assign awvalid = arbfsm_pre==STORE;

assign wdata   = data_wdata;
assign wstrb   = data_wen;
assign wlast   = 1'b1;
assign wvalid  = arbfsm_pre==STORE;

assign bready  = arbfsm_pre==WAIT_STORE;

assign inst_rdata = rdata;
assign data_rdata = rdata;
assign inst_resp  = arbfsm_pre==WAIT_FETCH && rvalid&&rid==0;
assign data_resp  = arbfsm_pre==WAIT_LOAD  && rvalid&&rid==1 ||
                    arbfsm_pre==STORE      && bvalid&&bid==1 ;

*/

endmodule

