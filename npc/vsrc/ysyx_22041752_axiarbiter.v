// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_axiarbiter.v
// Author        : Cw
// Created On    : 2023-05-27 17:57
// Last Modified : 2023-05-27 22:23
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"
module ysyx_22041752_axiarbiter (
    input  wire        clk     ,
    input  wire        reset   ,

    //from IFU & LSU
    input  wire                     inst_en    ,
    output wire                     inst_resp  ,
/* verilator lint_off UNUSEDSIGNAL */
    input  wire [`SRAM_ADDR_WD-1:0] inst_addr  ,
/* verilator lint_on UNUSEDSIGNAL */
    output wire [`SRAM_DATA_WD-1:0] inst_rdata ,
    input  wire                     data_en    ,
    output wire                     data_resp  ,
    input  wire [`SRAM_WEN_WD -1:0] data_wen   ,
/* verilator lint_off UNUSEDSIGNAL */
    input  wire [`SRAM_ADDR_WD-1:0] data_addr  ,
/* verilator lint_on UNUSEDSIGNAL */
    input  wire [`SRAM_DATA_WD-1:0] data_wdata ,
    output wire [`SRAM_ADDR_WD-1:0] data_rdata ,

    //axi_interface
    output wire [ 3:0] arid    ,
    output wire [31:0] araddr  ,
    output wire [ 7:0] arlen   ,
    output wire [ 2:0] arsize  ,
    output wire [ 1:0] arburst ,
    output wire [ 1:0] arlock  ,
    output wire [ 3:0] arcache ,
    output wire [ 2:0] arprot  ,
    output wire        arvalid ,
    input  wire        arready ,
                               
    input  wire [ 3:0] rid     ,
    input  wire [63:0] rdata   ,
/* verilator lint_off UNUSEDSIGNAL */
    input  wire [ 1:0] rresp   ,
    input  wire        rlast   ,
/* verilator lint_on UNUSEDSIGNAL */
    input  wire        rvalid  ,
    output wire        rready  ,
                               
    output wire [ 3:0] awid    ,
    output wire [31:0] awaddr  ,
    output wire [ 7:0] awlen   ,
    output wire [ 2:0] awsize  ,
    output wire [ 1:0] awburst ,
    output wire [ 1:0] awlock  ,
    output wire [ 3:0] awcache ,
    output wire [ 2:0] awprot  ,
    output wire        awvalid ,
    input  wire        awready ,
                               
    output wire [ 3:0] wid     ,
    output wire [63:0] wdata   ,
    output wire [ 7:0] wstrb   ,
    output wire        wlast   ,
    output wire        wvalid  ,
    input  wire        wready  ,
                               
    input  wire [ 3:0] bid     ,
/* verilator lint_off UNUSEDSIGNAL */
    input  wire [ 1:0] bresp   ,
/* verilator lint_on UNUSEDSIGNAL */
    input  wire        bvalid  ,
    output wire        bready  
);
    
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
assign araddr  = arbfsm_nxt==FETCH ? inst_addr[31:0] : data_addr[31:0];
assign arlen   = 8'h1;
assign arsize  = 3'h7;
assign arburst = 2'b01;
assign arlock  = 0;
assign arcache = 0;
assign arprot  = 0;
assign arvalid = arbfsm_pre==FETCH || arbfsm_pre==LOAD;

assign rready  = arbfsm_pre==WAIT_FETCH || arbfsm_pre==WAIT_LOAD;

assign awid    = 4'h1;
assign awaddr  = data_addr[31:0];
assign awlen   = 8'h1;
assign awsize  = 3'h7;
assign awburst = 2'b01;
assign awlock  = 0;
assign awcache = 0;
assign awprot  = 0;
assign awvalid = arbfsm_pre==STORE;

assign wid     = 4'h1;
assign wdata   = data_wdata;
assign wstrb   = data_wen;
assign wlast   = 1'b1;
assign wvalid  = arbfsm_pre==STORE;

assign bready  = arbfsm_pre==WAIT_STORE;

assign inst_rdata = rdata;
assign data_rdata = rdata;
assign inst_resp  = arbfsm_pre==WAIT_FETCH && arbfsm_nxt==IDLE;
assign data_resp  = arbfsm_pre==WAIT_LOAD  && arbfsm_nxt==IDLE       ||
                    arbfsm_pre==STORE      && arbfsm_nxt==WAIT_STORE ;

endmodule

