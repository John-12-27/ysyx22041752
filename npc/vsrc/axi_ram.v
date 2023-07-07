// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : axi_ram.v
// Author        : Cw
// Created On    : 2023-06-06 21:04
// Last Modified : 2023-07-07 11:03
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------

module axi_ram #
(
    parameter DATA_WIDTH = 64,
    parameter ADDR_WIDTH = 32,
    parameter STRB_WIDTH = (DATA_WIDTH/8),
    parameter ID_WIDTH   = 4
)
(
    input                    clk       ,
    input                    rst       ,

    input  [ADDR_WIDTH-1:0]  s_axi_awaddr  ,
    input                    s_axi_awvalid ,
    output                   s_axi_awready ,
    input  [DATA_WIDTH-1:0]  s_axi_wdata   ,
    input  [STRB_WIDTH-1:0]  s_axi_wstrb   ,
    input                    s_axi_wvalid  ,
    output                   s_axi_wready  ,
    /* verilator lint_off UNUSEDSIGNAL */
    input                    s_axi_wlast   ,
    input  [ID_WIDTH-1:0]    s_axi_awid    ,
    input  [7:0]             s_axi_awlen   ,
    input  [2:0]             s_axi_awsize  ,
    input  [1:0]             s_axi_awburst ,
    input  [7:0]             s_axi_arlen   ,
    input  [2:0]             s_axi_arsize  ,
    input  [1:0]             s_axi_arburst ,
    /* verilator lint_on UNUSEDSIGNAL */
    input                    s_axi_bready  ,
    output [ID_WIDTH-1:0]    s_axi_bid     ,
    output [1:0]             s_axi_bresp   ,
    output                   s_axi_bvalid  ,
    input  [ID_WIDTH-1:0]    s_axi_arid    ,
    input  [ADDR_WIDTH-1:0]  s_axi_araddr  ,
    input                    s_axi_arvalid ,
    output                   s_axi_arready ,
    input                    s_axi_rready  , 
    output [ID_WIDTH-1:0]    s_axi_rid     ,
    output [DATA_WIDTH-1:0]  s_axi_rdata   ,
    output [1:0]             s_axi_rresp   ,
    output                   s_axi_rlast   ,
    output                   s_axi_rvalid  ,
    output                   sram_ren      ,
    output [ 7:0]            sram_wen      ,
    output [31:0]            sram_waddr    ,
    output [31:0]            sram_raddr    ,
    output [63:0]            sram_wdata    ,
    input  [63:0]            sram_rdata    
);

reg [ADDR_WIDTH-1:0] awaddr_r;
always @(posedge clk) begin
    if (rst) begin
        awaddr_r <= 0;
    end
    else begin
        awaddr_r <= s_axi_awaddr;
    end
end
reg [STRB_WIDTH-1:0]  wstrb_r;
always @(posedge clk) begin
    if (rst) begin
        wstrb_r <= 0;
    end
    else begin
        wstrb_r <= s_axi_wstrb;
    end
end
reg [DATA_WIDTH-1:0]  wdata_r;
always @(posedge clk) begin
    if (rst) begin
        wdata_r <= 0;
    end
    else begin
        wdata_r <= s_axi_wdata;
    end
end
reg mem_wen;
always @(posedge clk) begin
    if (rst) begin
        mem_wen <= 0;
    end
    else begin
        mem_wen <= s_axi_wvalid & s_axi_awvalid;
    end
end

reg bvalid_r;
always @(posedge clk) begin
    if (rst) begin
        bvalid_r <= 0;
    end
    else if (|sram_wen) begin
        bvalid_r <= 1;
    end
    else if (s_axi_bready) begin
        bvalid_r <= 0;
    end
end

assign sram_wen   = {8{mem_wen}} & wstrb_r;
assign sram_waddr = awaddr_r;
assign sram_wdata = wdata_r;

assign s_axi_bid    = 1;
assign s_axi_bresp  = 0;
assign s_axi_bvalid = bvalid_r;
assign s_axi_awready= 1;
assign s_axi_wready = 1;

reg [ADDR_WIDTH-1:0] araddr_r;
always @(posedge clk) begin
    if (rst) begin
        araddr_r <= 0;
    end
    else begin
        araddr_r <= s_axi_araddr;
    end
end
reg [ID_WIDTH-1:0] arid_r;
always @(posedge clk) begin
    if (rst) begin
        arid_r <= 0;
    end
    else begin
        arid_r <= s_axi_arid;
    end
end
reg mem_rden;
always @(posedge clk) begin
    if (rst) begin
        mem_rden <= 0;
    end
    else begin
        mem_rden <= s_axi_arvalid;
    end
end

assign sram_ren   = mem_rden;
assign sram_raddr = araddr_r;

reg rvalid_r;
always @(posedge clk) begin
    if (rst) begin
        rvalid_r <= 0;
    end
    else if (sram_ren) begin
        rvalid_r <= 1;
    end
    else if (s_axi_rready) begin
        rvalid_r <= 0;
    end
end
reg [DATA_WIDTH-1:0] sram_rdata_r;
always @(posedge clk) begin
    if (rst) begin
        sram_rdata_r <= 0;
    end
    else if (sram_ren) begin
        sram_rdata_r <= sram_rdata;
    end
end

assign s_axi_arready = 1;
assign s_axi_rid     = arid_r;
assign s_axi_rdata   = sram_rdata_r;
assign s_axi_rvalid  = rvalid_r;
assign s_axi_rresp   = 0;
assign s_axi_rlast   = 1;

endmodule

