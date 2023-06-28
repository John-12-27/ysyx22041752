// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_mmu.v
// Author        : Cw
// Created On    : 2023-06-23 19:24
// Last Modified : 2023-06-28 22:19
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_mmu (
    input                                      clk                  ,
    input                                      reset                ,

/*** connected to es ***/
    input                                      es_data_en_i         ,
    input  [`ysyx_22041752_DATA_WEN_WD -1:0]   es_data_wen_i        ,
    input  [`ysyx_22041752_DATA_ADDR_WD-1:0]   es_data_addr_i       ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   es_data_wdata_i      ,
    output                                     es_write_hit_o       ,
/*** connected to ms ***/
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   ms_data_rdata_o      ,
    output                                     ms_miss_o            ,

/*** connected to clint ***/
    output                                     clint_en_o           ,
    output                                     clint_wen_o          ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0]   clint_data_addr_o    ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   clint_data_wdata_o   ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   clint_data_rdata_i   ,

/*** connected to dcache ***/
    output                                     dcache_en_o          ,
    output [`ysyx_22041752_DATA_WEN_WD -1:0]   dcache_wen_o         ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0]   dcache_data_addr_o   ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   dcache_data_wdata_o  ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   dcache_data_rdata_i  ,
    input                                      dcache_miss_i        , 
    input                                      dcache_write_hit_i   ,
    //dcache_to_axiram    
    input                                      dcache_sram_req_i    ,
    output                                     dcache_sram_ready_o  ,
    input                                      dcache_sram_wen_i    , 
    input  [`ysyx_22041752_DATA_ADDR_WD-1:0]   dcache_sram_addr_i   , 
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   dcache_sram_wdata_i  , 
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   dcache_sram_rdata_o  ,
    output                                     dcache_sram_valid_o  ,

/*** connected to io ***/
    output                                     io_en_o              ,
    output                                     io_wen_o             ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0]   io_data_addr_o       ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   io_data_wdata_o      ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   io_data_rdata_i      ,
    input                                      io_miss_i            , 
    //io_to_axiram    
    input                                      io_sram_req_i        ,
    output                                     io_sram_ready_o      ,
    input                                      io_sram_wen_i        , 
    input  [`ysyx_22041752_DATA_ADDR_WD-1:0]   io_sram_addr_i       , 
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   io_sram_wdata_i      , 
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   io_sram_rdata_o      ,
    output                                     io_sram_valid_o      ,

/*** connected to axi_arbiter ***/
    output                                     sram_req_o           ,
    input                                      sram_ready_i         ,
    output                                     sram_wen_o           , 
    output [`ysyx_22041752_DATA_ADDR_WD-1:0]   sram_addr_o          , 
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   sram_wdata_o         , 
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   sram_rdata_i         ,
    input                                      sram_valid_i         
);
    
wire access_clint= ((es_data_addr_i == `ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIME_OFFSET) || (es_data_addr_i == `ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIMECMP_OFFSET));
reg access_clint_r;
always @(posedge clk) begin
    if (reset) begin
        access_clint_r <= 0;
    end
    else if(es_data_en_i) begin
        access_clint_r <= access_clint;
    end
end
wire access_mem  = (es_data_addr_i >= `ysyx_22041752_MEM_BASEADDR) && (es_data_addr_i <= (`ysyx_22041752_MEM_BASEADDR+`ysyx_22041752_MEM_SIZE));
reg access_mem_r;
always @(posedge clk) begin
    if (reset) begin
        access_mem_r <= 0;
    end
    else if(es_data_en_i) begin
        access_mem_r <= access_mem;
    end
end
wire access_io   = !(access_clint || access_mem);
reg access_io_r;
always @(posedge clk) begin
    if (reset) begin
        access_io_r <= 0;
    end
    else if(es_data_en_i) begin
        access_io_r <= access_io;
    end
end

assign es_write_hit_o  = access_mem_r && dcache_write_hit_i;
assign ms_data_rdata_o = {64{access_mem_r  }} & dcache_data_rdata_i |
                         {64{access_clint_r}} & clint_data_rdata_i  |
                         {64{access_io_r   }} & io_data_rdata_i     ;
assign ms_miss_o       = access_mem_r && dcache_miss_i ||
                         access_io_r  && io_miss_i     ;

assign clint_en_o         = es_data_en_i && access_clint;
assign clint_wen_o        = clint_en_o & |es_data_wen_i;
assign clint_data_addr_o  = es_data_addr_i;
assign clint_data_wdata_o = es_data_wdata_i;

assign dcache_en_o        = es_data_en_i && access_mem;
assign dcache_wen_o       = {64{dcache_en_o}} & es_data_wen_i;
assign dcache_data_addr_o = es_data_addr_i;
assign dcache_data_wdata_o= es_data_wdata_i;
assign dcache_sram_ready_o= access_mem_r && sram_ready_i;
assign dcache_sram_rdata_o= sram_rdata_i;
assign dcache_sram_valid_o= access_mem_r && sram_valid_i;

assign io_en_o            = es_data_en_i && access_io;
assign io_wen_o           = io_en_o & |es_data_wen_i;
assign io_data_addr_o     = es_data_addr_i;
assign io_data_wdata_o    = es_data_wdata_i;
assign io_sram_ready_o    = access_io_r && sram_ready_i;
assign io_sram_rdata_o    = sram_rdata_i;
assign io_sram_valid_o    = access_io_r && sram_valid_i;

assign sram_req_o  = io_sram_req_i || dcache_sram_req_i;
assign sram_wen_o  = io_sram_wen_i || dcache_sram_wen_i;
assign sram_addr_o = {32{io_sram_req_i}} & io_sram_addr_i | {32{dcache_sram_req_i}} & dcache_sram_addr_i;
assign sram_wdata_o= {64{io_sram_wen_i}} & io_sram_wdata_i| {64{dcache_sram_wen_i}} & dcache_sram_wdata_i;

endmodule

