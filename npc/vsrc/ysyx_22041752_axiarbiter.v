// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2023 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_axiarbiter.v
// Author        : Cw
// Created On    : 2023-05-27 17:57
// Last Modified : 2023-06-30 16:35
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
    output                                   inst_ready ,
    input  [`ysyx_22041752_DATA_ADDR_WD-1:0] inst_addr  ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0] inst_rdata ,
    output                                   inst_valid ,
    input                                    data_en    ,
    output                                   data_ready ,
    input  [`ysyx_22041752_DATA_WEN_WD -1:0] data_wen   ,
    input  [`ysyx_22041752_DATA_ADDR_WD-1:0] data_addr  ,
    input  [`ysyx_22041752_DATA_DATA_WD-1:0] data_wdata ,
    output [`ysyx_22041752_DATA_DATA_WD-1:0] data_rdata ,
    output                                   data_valid ,

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
/* verilator lint_off UNUSEDSIGNAL */
    input  [ 1:0] rresp   ,
    input         rlast   ,
/* verilator lint_on UNUSEDSIGNAL */
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
                               
/* verilator lint_off UNUSEDSIGNAL */
    input  [ 3:0] bid     ,
    input  [ 1:0] bresp   ,
/* verilator lint_on UNUSEDSIGNAL */
    input         bvalid  ,
    output        bready  
);
    
reg  [2:0] arfsm_pre;
wire [2:0] arfsm_nxt;
parameter AR_IDLE=0;
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
assign arfsm_nxt = (arfsm_pre==AR_IDLE || arfsm_pre==AR_FETCH_OK || arfsm_pre==AR_LOAD_OK) && data_ren ? AR_LOAD     :
                   (arfsm_pre==AR_IDLE || arfsm_pre==AR_FETCH_OK || arfsm_pre==AR_LOAD_OK) && inst_en  ? AR_FETCH    :  
                    arfsm_pre==AR_FETCH                                                    && arready  ? AR_FETCH_OK :  
                    arfsm_pre==AR_LOAD                                                     && arready  ? AR_LOAD_OK  :
                   (arfsm_pre==AR_FETCH_OK || arfsm_pre==AR_LOAD_OK)                                   ? AR_IDLE     :
                                                                                                         arfsm_pre   ;

reg  [2:0] rfsm_pre;
wire [2:0] rfsm_nxt;
parameter R_IDLE=0;
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
parameter AW_WAIT=1;
parameter AW_WAIT_W=2;
parameter AW_WAIT_AW=3;
parameter AW_OK=4;
always @(posedge clk) begin
    if (reset) begin
        awfsm_pre <= AW_IDLE;
    end
    else begin
        awfsm_pre <= awfsm_nxt;
    end
end

assign awfsm_nxt = (awfsm_pre==AW_IDLE || awfsm_pre==AW_OK) &&  data_en&&|data_wen      ? AW_WAIT    :
                    awfsm_pre==AW_WAIT                      &&  awready&&wready ? AW_OK      :
                    awfsm_pre==AW_WAIT                      &&  awready         ? AW_WAIT_W  :
                    awfsm_pre==AW_WAIT                      &&  wready          ? AW_WAIT_AW :
                    awfsm_pre==AW_WAIT_AW                   &&  awready         ? AW_OK      :
                    awfsm_pre==AW_WAIT_W                    &&  wready          ? AW_OK      :
                    awfsm_pre==AW_OK                                            ? AW_IDLE    :
                                                                                  awfsm_pre  ;
reg  [1:0] bfsm_pre;
wire [1:0] bfsm_nxt;
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

reg                                   inst_ready_r ;
reg [`ysyx_22041752_DATA_DATA_WD-1:0] inst_rdata_r ;
reg                                   inst_valid_r ;
reg                                   data_ready_r ;
reg [`ysyx_22041752_DATA_DATA_WD-1:0] data_rdata_r ;
reg                                   data_valid_r ;
assign inst_ready = inst_ready_r;
assign inst_rdata = inst_rdata_r;
assign inst_valid = inst_valid_r;
assign data_ready = data_ready_r;
assign data_rdata = data_rdata_r;
assign data_valid = data_valid_r;

always @(posedge clk) begin
    if (reset) begin
        inst_ready_r <= 0;
    end
    else begin
        inst_ready_r <= arfsm_nxt==AR_FETCH;
    end
end

always @(posedge clk) begin
    if (reset) begin
        inst_rdata_r <= 0;
    end
    else if (rfsm_nxt==R_GET_INST) begin
        inst_rdata_r <= rdata;
    end
end

always @(posedge clk) begin
    if (reset) begin
        inst_valid_r <= 0;
    end
    else begin
        inst_valid_r <= rfsm_nxt==R_GET_INST;
    end
end

always @(posedge clk) begin
    if (reset) begin
        data_ready_r <= 0;
    end
    else begin
        data_ready_r <= data_en && data_wen==0 && arfsm_nxt==AR_LOAD || 
                        data_en && data_wen!=0 && awfsm_nxt==AW_WAIT ;
    end
end

always @(posedge clk) begin
    if (reset) begin
        data_rdata_r <= 0;
    end
    else if (rfsm_nxt==R_GET_DATA) begin
        data_rdata_r <= rdata;
    end
end

always @(posedge clk) begin
    if (reset) begin
        data_valid_r <= 0;
    end
    else begin
        data_valid_r <= rfsm_nxt==R_GET_DATA || 
                        bfsm_nxt==B_GET      ;
    end
end

reg [ 3:0] arid_r   ; 
reg [31:0] araddr_r ; 
reg [ 7:0] arlen_r  ; 
reg [ 2:0] arsize_r ; 
reg [ 1:0] arburst_r; 
reg        arvalid_r; 

assign arid    = arid_r   ; 
assign araddr  = araddr_r ; 
assign arlen   = arlen_r  ; 
assign arsize  = arsize_r ; 
assign arburst = arburst_r; 
assign arvalid = arvalid_r; 

always @(posedge clk) begin
    if (reset) begin
        arid_r <= 0;
    end
    else begin
        if (arfsm_nxt==AR_FETCH) begin
            arid_r <= 0;
        end
        else if (arfsm_nxt==AR_LOAD) begin
            arid_r <= 1;
        end
    end
end

always @(posedge clk) begin
    if (reset) begin
        araddr_r <= 0;
    end
    else begin
        if (arfsm_nxt==AR_FETCH) begin
            araddr_r <= inst_addr;
        end
        else if (arfsm_nxt==AR_LOAD) begin
            araddr_r <= data_addr;
        end
    end
end

always @(posedge clk) begin
    if (reset) begin
        arlen_r <= 0;
    end
    else begin
        arlen_r <= 0;
    end
end

always @(*) begin
    arsize_r = 3'b011; // 8 bytes
end

always @(posedge clk) begin
    if (reset) begin
        arburst_r <= 0;
    end
    else begin
        arburst_r <= 2'b01;
    end
end

always @(posedge clk) begin
    if (reset) begin
        arvalid_r <= 0;
    end
    else begin
        if (arfsm_nxt==AR_FETCH || arfsm_nxt==AR_LOAD) begin
            arvalid_r <= 1;
        end
        else begin
            arvalid_r <= 0;
        end
    end
end

reg rready_r;
assign rready = rready_r;

always @(posedge clk) begin
    if (reset) begin
        rready_r <= 0;
    end
    else begin
        if (rfsm_nxt==R_WAIT_FETCH || rfsm_nxt==R_WAIT_LOAD) begin
            rready_r <= 1;
        end      
        else begin
            rready_r <= 0;
        end
    end
end

reg [ 3:0] awid_r   ; 
reg [31:0] awaddr_r ; 
reg [ 7:0] awlen_r  ; 
reg [ 2:0] awsize_r ; 
reg [ 1:0] awburst_r; 
reg        awvalid_r; 

assign awid    = awid_r   ; 
assign awaddr  = awaddr_r ; 
assign awlen   = awlen_r  ; 
assign awsize  = awsize_r ; 
assign awburst = awburst_r; 
assign awvalid = awvalid_r; 

always @(*) begin
    awid_r = 1;
end

always @(posedge clk) begin
    if (reset) begin
        awaddr_r <= 0;
    end
    else if (awfsm_nxt==AW_WAIT) begin
        awaddr_r <= data_addr;
    end
end

always @(posedge clk) begin
    if (reset) begin
        awlen_r <= 0;
    end
    else begin
        awlen_r <= 0;
    end
end

always @(*) begin
    awsize_r = 3'b011; //8 bytes
end

always @(posedge clk) begin
    if (reset) begin
        awburst_r <= 0;
    end
    else begin
        awburst_r <= 2'b01;
    end
end

always @(posedge clk) begin
    if (reset) begin
        awvalid_r <= 0;
    end
    else begin
        if (awfsm_nxt==AW_WAIT || awfsm_nxt==AW_WAIT_AW) begin
            awvalid_r <= 1;
        end
        else begin
            awvalid_r <= 0;
        end
    end
end

reg [63:0] wdata_r ;  
reg [ 7:0] wstrb_r ;  
reg        wlast_r ;  
reg        wvalid_r;  
assign wdata  = wdata_r ;  
assign wstrb  = wstrb_r ;  
assign wlast  = wlast_r ;  
assign wvalid = wvalid_r;  

always @(posedge clk) begin
    if (reset) begin
        wdata_r <= 0;
    end
    else if (awfsm_nxt==AW_WAIT || awfsm_nxt==AW_WAIT_W) begin
        wdata_r <= data_wdata;
    end
end

always @(posedge clk) begin
    if (reset) begin
        wstrb_r <= 0;
    end
    else if (awfsm_nxt==AW_WAIT || awfsm_nxt==AW_WAIT_W) begin
        wstrb_r <= data_wen;
    end
end

always @(posedge clk) begin
    if (reset) begin
        wlast_r <= 0;
    end
    else begin
        wlast_r <= 1;
    end
end

always @(posedge clk) begin
    if (reset) begin
        wvalid_r <= 0;
    end
    else begin
        if (awfsm_nxt==AW_WAIT || awfsm_nxt==AW_WAIT_W) begin
            wvalid_r <= 1;
        end
        else begin
            wvalid_r <= 0;
        end
    end
end

reg bready_r;
assign bready = bready_r;
always @(posedge clk) begin
    if (reset) begin
        bready_r <= 0;
    end
    else begin
        if (bfsm_nxt==B_WAIT_STORE) begin
            bready_r <= 1;
        end
        else begin
            bready_r <= 0;
        end
    end
end

endmodule

