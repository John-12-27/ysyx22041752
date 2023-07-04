// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_memspace.v
// Author        : Cw
// Created On    : 2023-07-01 16:22
// Last Modified : 2023-07-04 19:39
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_memspace (
    input   clk  ,
    input   reset,

    input                                      es_data_en_i         ,
    input  [`ysyx_22041752_DATA_WEN_WD -1:0]   es_data_wen_i        ,
    input  [`ysyx_22041752_DATA_ADDR_WD-1:0]   es_data_addr_i       ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   es_data_wdata_i      ,
    output                                     es_write_hit_o       ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   ms_data_rdata_o      ,
    output                                     ms_miss_o            ,

    output                                     clint_en_o           ,
    output                                     clint_wen_o          ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0]   clint_data_addr_o    ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   clint_data_wdata_o   ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   clint_data_rdata_i   ,

    output                                     dcache_en_o          ,
    output [`ysyx_22041752_DATA_WEN_WD -1:0]   dcache_wen_o         ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0]   dcache_data_addr_o   ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   dcache_data_wdata_o  ,
    input                                      dcache_miss_i        , 
    input                                      dcache_write_hit_i   ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   dcache_data_rdata_i  ,

    input                                      io_miss_i            , 
    input  [`ysyx_22041752_DATA_DATA_WD-1:0]   io_data_rdata_i      ,
    output                                     io_en_o              ,
    output [`ysyx_22041752_DATA_WEN_WD -1:0]   io_wen_o             ,
    output [`ysyx_22041752_DATA_ADDR_WD-1:0]   io_data_addr_o       ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0]   io_data_wdata_o      
`ifdef DPI_C
    ,
    output                                     debug_dcache_en
`endif
);
    
wire access_clint= ((es_data_addr_i == `ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIME_OFFSET) || (es_data_addr_i == `ysyx_22041752_CLINT_BASE_ADDR+`ysyx_22041752_MTIMECMP_OFFSET));

wire access_mem  = (es_data_addr_i >= `ysyx_22041752_MEM_BASEADDR) && (es_data_addr_i <= (`ysyx_22041752_MEM_BASEADDR+`ysyx_22041752_MEM_SIZE));

wire access_io   = !(access_clint || access_mem);

assign clint_en_o = es_data_en_i & access_clint;
assign dcache_en_o= es_data_en_i & access_mem  ;
assign io_en_o    = es_data_en_i & access_io   ;

assign clint_wen_o  = |es_data_wen_i;
assign dcache_wen_o =  es_data_wen_i;
assign io_wen_o     =  es_data_wen_i;

assign clint_data_addr_o  = es_data_addr_i;
assign dcache_data_addr_o = es_data_addr_i;
assign io_data_addr_o     = es_data_addr_i;

assign clint_data_wdata_o = es_data_wdata_i;
assign dcache_data_wdata_o= es_data_wdata_i;
assign io_data_wdata_o    = es_data_wdata_i;

/* ================================ to ms ===============================*/
reg mem_r, io_r, clint_r;
always @(posedge clk) begin
    if (reset) begin
        mem_r   <= 0;
    end
    else if (dcache_en_o) begin
        mem_r   <= 1'b1;
    end
    else if (mem_r && !dcache_miss_i) begin
        mem_r   <= 1'b0;
    end
end
always @(posedge clk) begin
    if (reset) begin
        io_r    <= 0;
    end
    else if (io_en_o) begin
        io_r    <= 1'b1;
    end
    else if (io_r && !io_miss_i) begin
        io_r    <= 1'b0;
    end
end
always @(posedge clk) begin
    if (reset) begin
        clint_r <= 0;
    end
    else begin
        clint_r <= clint_en_o;
    end
end

assign es_write_hit_o  = mem_r & dcache_write_hit_i;
assign ms_data_rdata_o = {`ysyx_22041752_DATA_DATA_WD{mem_r}}   & dcache_data_rdata_i | 
                         {`ysyx_22041752_DATA_DATA_WD{io_r}}    & io_data_rdata_i     |
                         {`ysyx_22041752_DATA_DATA_WD{clint_r}} & clint_data_rdata_i  ;
assign ms_miss_o       = mem_r   & dcache_miss_i ||
                         io_r    & io_miss_i     ;

`ifdef DPI_C
assign debug_dcache_en = dcache_en_o;
`endif
endmodule

