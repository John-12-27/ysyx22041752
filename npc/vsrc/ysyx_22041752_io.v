// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_io.v
// Author        : Cw
// Created On    : 2023-06-28 15:14
// Last Modified : 2023-06-28 22:09
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_io (
    input  clk   ,
    input  reset ,

    input                                      io_en         , 
    input                                      io_wen        , 
    input  [`ysyx_22041752_DATA_ADDR_WD-1:0]   io_data_addr  , 
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   io_data_wdata , 
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   io_data_rdata , 
    output                                     io_miss       ,  

    output                                     sram_req      ,
    input                                      sram_ready    ,
    output                                     sram_wen      ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0]   sram_addr     ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   sram_wdata    ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   sram_rdata    ,
    input                                      sram_valid    
);
    
reg  [2:0] iofsm_pre;
wire [2:0] iofsm_nxt;
parameter IDLE       = 0;
parameter WRITE_REQ  = 1;
parameter WRITE_RESP = 2;
parameter WRITE_DONE = 3;
parameter READ_REQ   = 4;
parameter READ_RESP  = 5;
parameter READ_DONE  = 6;
always @(posedge clk) begin
    if (reset) begin
        iofsm_pre <= 0;
    end
    else begin
        iofsm_pre <= iofsm_nxt;
    end
end

assign iofsm_nxt = (iofsm_pre==IDLE||iofsm_pre==READ_DONE||iofsm_pre==WRITE_DONE) && io_en   &&!io_wen ? READ_REQ  :
                    iofsm_pre==READ_REQ                                           && sram_ready        ? READ_RESP :
                    iofsm_pre==READ_RESP                                          && sram_valid        ? READ_DONE :
                   (iofsm_pre==READ_DONE||iofsm_pre==WRITE_DONE)                                       ? IDLE      :
                   (iofsm_pre==IDLE||iofsm_pre==READ_DONE||iofsm_pre==WRITE_DONE) && io_en   && io_wen ? WRITE_REQ :
                    iofsm_pre==WRITE_REQ                                          && sram_ready        ? WRITE_RESP:
                    iofsm_pre==WRITE_RESP                                         && sram_valid        ? WRITE_DONE:
                                                                                                         iofsm_pre ;

assign sram_req = (iofsm_pre==READ_REQ||iofsm_pre==WRITE_REQ) && !sram_ready;
assign sram_wen = iofsm_pre==WRITE_REQ;
reg [`ysyx_22041752_DATA_ADDR_WD-1:0]   sram_addr_r  ;
reg [`ysyx_22041752_DATA_DATA_WD-1:0]   sram_wdata_r ;
always @(posedge clk) begin
    if (reset) begin
        sram_addr_r <=0;
    end
    else if(io_en) begin
        sram_addr_r <= io_data_addr;
    end
end
always @(posedge clk) begin
    if (reset) begin
        sram_wdata_r <= 0;
    end
    else if(io_en) begin
        sram_wdata_r <= io_data_wdata;
    end
end
assign sram_addr     = sram_addr_r;
assign sram_wdata    = sram_wdata_r;
assign io_data_rdata = sram_rdata;

reg io_miss_r;
always @(posedge clk) begin
    if (reset) begin
        io_miss_r <= 0;
    end
    else begin
        io_miss_r <= !(iofsm_nxt==READ_DONE || iofsm_nxt==WRITE_DONE || iofsm_nxt==IDLE);
    end
end
assign io_miss = io_miss_r;

endmodule

