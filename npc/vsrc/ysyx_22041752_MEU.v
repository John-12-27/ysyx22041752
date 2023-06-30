// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_MEU.v
// Author        : Cw
// Created On    : 2022-11-21 15:40
// Last Modified : 2023-06-30 16:38
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_MEU (
    input                                        clk           ,
    input                                        reset         ,
    
    input                                        ws_allowin    ,
    output                                       ms_allowin    ,
    
    input                                        es_to_ms_valid,
    input  [`ysyx_22041752_ES_TO_MS_BUS_WD -1:0] es_to_ms_bus  ,
   
    output                                       ms_to_ws_valid,
    output [`ysyx_22041752_MS_TO_WS_BUS_WD -1:0] ms_to_ws_bus  ,
    
    input  [`ysyx_22041752_DATA_DATA_WD    -1:0] data_rdata    ,
    input                                        rdata_valid   ,
    //input                                        cache_miss    ,
	
	output [`ysyx_22041752_FORWARD_BUS_WD-1:0]   ms_forward_bus
`ifdef DPI_C
    ,
    input                                        debug_es_out_of_mem    ,
    input  [`ysyx_22041752_INST_WD         -1:0] debug_es_inst          ,
    output reg [`ysyx_22041752_INST_WD     -1:0] debug_ms_inst          ,
    output reg                                   debug_ms_out_of_mem    ,

    output [`ysyx_22041752_DATA_DATA_WD    -1:0] debug_ms_data_rdata    ,
    output                                       debug_ms_rdata_valid   
`endif

);

reg         ms_valid;
wire        ms_ready_go;

reg [`ysyx_22041752_ES_TO_MS_BUS_WD -1:0] es_to_ms_bus_r;

wire                   res_sext    ;
wire                   res_zext    ;
wire [            1:0] ms_mem_bytes;
/* verilator lint_off UNUSEDSIGNAL */
wire [            2:0] ms_addr_offset;
/* verilator lint_on UNUSEDSIGNAL */
wire            	   ms_mem_re   ;  
wire            	   ms_mem_we   ;  
wire                   ms_rf_we    ;
wire [`ysyx_22041752_RF_ADDR_WD-1:0]    rd          ;
wire [`ysyx_22041752_RF_DATA_WD-1:0]    alu_result  ;
wire [`ysyx_22041752_PC_WD     -1:0]    ms_pc       ;

assign {res_sext        ,
		res_zext        ,
        ms_addr_offset  ,
		ms_mem_bytes    ,        
	    ms_mem_re       ,  
        ms_mem_we       ,
        ms_rf_we        ,
        rd              ,
        alu_result      ,
        ms_pc           
       } = es_to_ms_bus_r;

wire [`ysyx_22041752_RF_DATA_WD-1:0] mem_result;
wire [`ysyx_22041752_RF_DATA_WD-1:0] ms_final_result;

assign ms_to_ws_bus = {ms_rf_we       ,  
                       rd             ,  
                       ms_final_result,  
                       ms_pc             
                      };

assign ms_ready_go    = ms_mem_we|ms_mem_re ? rdata_valid : 1'b1;
//assign ms_ready_go    = ms_mem_we|ms_mem_re ? !cache_miss: 1'b1;
assign ms_allowin     = !ms_valid || ms_ready_go && ws_allowin;
assign ms_to_ws_valid = ms_valid && ms_ready_go;
always @(posedge clk) begin
    if (reset) begin
        ms_valid <= 1'b0;
    end
    else if (ms_allowin) begin
        ms_valid <= es_to_ms_valid;
    end
end
always @(posedge clk) begin
    if (reset) begin
        es_to_ms_bus_r <= 0;
    end
	else if (es_to_ms_valid && ms_allowin) begin
        es_to_ms_bus_r <= es_to_ms_bus;
    end
end

reg [`ysyx_22041752_DATA_DATA_WD-1:0] shift_data;
always @(*) begin
    case (ms_addr_offset)
        3'b000: begin
            shift_data = data_rdata;
        end
        3'b001: begin
            shift_data = data_rdata >> 8;
        end
        3'b010: begin
            shift_data = data_rdata >> 16;
        end
        3'b011: begin
            shift_data = data_rdata >> 24;
        end
        3'b100: begin
            shift_data = data_rdata >> 32;
        end
        3'b101: begin
            shift_data = data_rdata >> 40;
        end
        3'b110: begin
            shift_data = data_rdata >> 48;
        end
        default: begin
            shift_data = data_rdata >> 56;
        end
    endcase
end

assign mem_result = ms_mem_bytes==2'b00 && res_sext ? {{56{shift_data[ 7]}}, shift_data[ 7:0]} : 
                    ms_mem_bytes==2'b00 && res_zext ? {{56{          1'b0}}, shift_data[ 7:0]} :
                    ms_mem_bytes==2'b01 && res_sext ? {{48{shift_data[15]}}, shift_data[15:0]} :
                    ms_mem_bytes==2'b01 && res_zext ? {{48{          1'b0}}, shift_data[15:0]} :
                    ms_mem_bytes==2'b10 && res_sext ? {{32{shift_data[31]}}, shift_data[31:0]} :
                    ms_mem_bytes==2'b10 && res_zext ? {{32{          1'b0}}, shift_data[31:0]} :
                                                                             shift_data        ;

//assign mem_result = ms_mem_bytes==2'b00 && res_sext ? {{56{data_rdata[ 7]}}, data_rdata[ 7:0]} : 
                    //ms_mem_bytes==2'b00 && res_zext ? {{56{          1'b0}}, data_rdata[ 7:0]} :
                    //ms_mem_bytes==2'b01 && res_sext ? {{48{data_rdata[15]}}, data_rdata[15:0]} :
                    //ms_mem_bytes==2'b01 && res_zext ? {{48{          1'b0}}, data_rdata[15:0]} :
                    //ms_mem_bytes==2'b10 && res_sext ? {{32{data_rdata[31]}}, data_rdata[31:0]} :
                    //ms_mem_bytes==2'b10 && res_zext ? {{32{          1'b0}}, data_rdata[31:0]} :
                                                                             //data_rdata        ;

assign ms_final_result = ms_mem_re ? mem_result : alu_result;
						 
//forward_bus
wire ms_forward_valid;
assign ms_forward_valid = ms_rf_we && ms_valid;
//assign ms_forward_bus   = {cache_miss&ms_mem_re&ms_valid, ms_forward_valid,ms_final_result,rd};
assign ms_forward_bus   = {!rdata_valid&ms_mem_re&ms_valid, ms_forward_valid,ms_final_result,rd};

`ifdef DPI_C
always @(posedge clk) begin
    if (es_to_ms_valid && ms_allowin) begin
        debug_ms_inst <= debug_es_inst;
    end
end
always @(posedge clk) begin
    if (es_to_ms_valid && ms_allowin) begin
        debug_ms_out_of_mem <= debug_es_out_of_mem;
    end
end
assign debug_ms_rdata_valid = ms_mem_re && rdata_valid && ms_to_ws_valid && ws_allowin;
//assign debug_ms_rdata_valid = ms_mem_re && !cache_miss && ms_to_ws_valid && ws_allowin;
assign debug_ms_data_rdata  = ms_final_result;
`endif

endmodule
