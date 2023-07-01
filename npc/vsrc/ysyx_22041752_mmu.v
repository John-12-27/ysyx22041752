// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_mmu.v
// Author        : Cw
// Created On    : 2023-06-23 19:24
// Last Modified : 2023-07-01 17:46
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_mmu (
    input                                      clk                  ,
    input                                      reset                ,

    //dcache_to_axiram    
    input                                          dcache_sram_req_i    ,
    output reg                                     dcache_sram_ready_o  ,
    input      [`ysyx_22041752_DATA_WEN_WD -1:0]   dcache_sram_wen_i    , 
    input      [`ysyx_22041752_DATA_ADDR_WD-1:0]   dcache_sram_addr_i   , 
    input      [`ysyx_22041752_DATA_DATA_WD-1:0]   dcache_sram_wdata_i  , 
    output reg [`ysyx_22041752_DATA_DATA_WD-1:0]   dcache_sram_rdata_o  ,
    output reg                                     dcache_sram_valid_o  ,

    //io_to_axiram    
    input                                          io_sram_req_i        ,
    output reg                                     io_sram_ready_o      ,
    input      [`ysyx_22041752_DATA_WEN_WD -1:0]   io_sram_wen_i        , 
    input      [`ysyx_22041752_DATA_ADDR_WD-1:0]   io_sram_addr_i       , 
    input      [`ysyx_22041752_DATA_DATA_WD-1:0]   io_sram_wdata_i      , 
    output reg [`ysyx_22041752_DATA_DATA_WD-1:0]   io_sram_rdata_o      ,
    output reg                                     io_sram_valid_o      ,

/*** connected to axi_arbiter ***/
    output                                         sram_req_o           ,
    input                                          sram_ready_i         ,
    output reg [`ysyx_22041752_DATA_WEN_WD -1:0]   sram_wen_o           , 
    output reg [`ysyx_22041752_DATA_ADDR_WD-1:0]   sram_addr_o          , 
    output reg [`ysyx_22041752_DATA_DATA_WD-1:0]   sram_wdata_o         , 
    input      [`ysyx_22041752_DATA_DATA_WD-1:0]   sram_rdata_i         ,
    input                                          sram_valid_i         
);
    
parameter IDLE    = 0;
parameter REQ_DC  = 1;
parameter REQ_IO  = 2;
parameter WAIT_DC = 3;
parameter WAIT_IO = 4;
parameter GET_DC  = 5;
parameter GET_IO  = 6;

reg  [2:0] mmufsm_pre;
wire [2:0] mmufsm_nxt;
always @(posedge clk) begin
    if (reset) begin
        mmufsm_pre <= IDLE;
    end
    else begin
        mmufsm_pre <= mmufsm_nxt;
    end
end

assign mmufsm_nxt = (mmufsm_pre==IDLE || mmufsm_pre==GET_DC || mmufsm_pre==GET_IO) && dcache_sram_req_i ? REQ_DC    :
                    (mmufsm_pre==IDLE || mmufsm_pre==GET_DC || mmufsm_pre==GET_IO) && io_sram_req_i     ? REQ_IO    :
                     mmufsm_pre==REQ_DC                                            && sram_ready_i      ? WAIT_DC   :
                     mmufsm_pre==WAIT_DC                                           && sram_valid_i      ? GET_DC    :
                     mmufsm_pre==REQ_IO                                            && sram_ready_i      ? WAIT_IO   :
                     mmufsm_pre==WAIT_IO                                           && sram_valid_i      ? GET_IO    :
                    (mmufsm_pre==GET_DC || mmufsm_pre==GET_IO)                                          ? IDLE      :
                                                                                                          mmufsm_pre;

always @(posedge clk)begin
    if (reset) begin
        dcache_sram_ready_o <= 0;
    end
    else begin
        dcache_sram_ready_o <= mmufsm_nxt==REQ_DC;
    end
end
always @(posedge clk) begin
    if (reset) begin
        io_sram_ready_o <= 0;
    end
    else begin
        io_sram_ready_o <= mmufsm_nxt==REQ_IO;
    end
end
always @(posedge clk) begin
    if (reset) begin
        dcache_sram_valid_o <= 0;
    end
    else begin
        dcache_sram_valid_o <= mmufsm_nxt==GET_DC;
    end
end
always @(posedge clk) begin
    if (reset) begin
        io_sram_valid_o <= 0;
    end
    else begin
        io_sram_valid_o <= mmufsm_nxt==GET_IO;
    end
end
always @(posedge clk) begin
    if (reset) begin
        dcache_sram_rdata_o <= 0;
    end
    else begin
        dcache_sram_rdata_o <= sram_rdata_i;
    end
end
always @(posedge clk) begin
    if (reset) begin
        io_sram_rdata_o <= 0;
    end
    else begin
        io_sram_rdata_o <= sram_rdata_i;
    end
end

assign sram_req_o = (mmufsm_pre==REQ_DC || mmufsm_pre==REQ_IO) && !sram_ready_i;

always @(posedge clk) begin
    if (reset) begin
        sram_wen_o <= 0;
    end
    else if(mmufsm_nxt==REQ_DC) begin
        sram_wen_o <= dcache_sram_wen_i;
    end
    else if(mmufsm_nxt==REQ_IO) begin
        sram_wen_o <= io_sram_wen_i;
    end
end
always @(posedge clk) begin
    if (reset) begin
        sram_addr_o <= 0;
    end
    else if(mmufsm_nxt==REQ_DC) begin
        sram_addr_o <= dcache_sram_addr_i;
    end
    else if(mmufsm_nxt==REQ_IO) begin
        sram_addr_o <= io_sram_addr_i;
    end
end
always @(posedge clk) begin
    if (reset) begin
        sram_wdata_o <= 0;
    end
    else if(mmufsm_nxt==REQ_DC) begin
        sram_wdata_o <= dcache_sram_wdata_i;
    end
    else if(mmufsm_nxt==REQ_IO) begin
        sram_wdata_o <= io_sram_wdata_i;
    end
end
endmodule

