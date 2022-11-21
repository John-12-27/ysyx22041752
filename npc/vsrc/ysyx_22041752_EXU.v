// +FHDR----------------------------------------------------------------------------
//                 Copyright (c) 2022 
//                       ALL RIGHTS RESERVED
// ---------------------------------------------------------------------------------
// Filename      : ysyx_22041752_EXU.v
// Author        : Cw
// Created On    : 2022-11-19 16:16
// Last Modified : 2022-11-21 15:40
// ---------------------------------------------------------------------------------
// Description   : 
//
//
// -FHDR----------------------------------------------------------------------------
`include "ysyx_22041752_mycpu.vh"

module ysyx_22041752_EXU(
    input  wire                           clk           ,
    input  wire                           reset         ,
    //allowin
    input  wire                           ms_allowin    ,
    output wire                           es_allowin    ,
    //from ds
    input  wire                           ds_to_es_valid,
    input  wire [`DS_TO_ES_BUS_WD -1:0]   ds_to_es_bus  ,
    //to ms
    output wire                           es_to_ms_valid,
    output wire [`ES_TO_MS_BUS_WD -1:0]   es_to_ms_bus  ,
	//forward_bus
	output wire [`ES_FORWARD_BUS_WD -1:0] es_forward_bus,
    // data sram interface
    output wire                     data_sram_en   ,
    output wire [`SRAM_WEN_WD -1:0] data_sram_wen  ,
    output wire [`SRAM_ADDR_WD-1:0] data_sram_addr ,
    output wire [`SRAM_DATA_WD-1:0] data_sram_wdata
    //output wire [127:0] mul_result         
);

reg         es_valid      ;
wire        es_ready_go   ;

reg  [`DS_TO_ES_BUS_WD -1:0] ds_to_es_bus_r;  

wire op_mul ;
wire op_div ;
wire op_rem ;
wire op_add ;
wire op_sub ;
wire op_slt ;
wire op_sltu;
wire op_and ;
wire op_or  ;
wire op_xor ;
wire op_sll ;
wire op_srl ;
wire op_sra ;

wire        res_sext    ;
wire        res_zext    ;
wire        src_shamt   ;
wire        src_pc      ;
wire        src_imm_u   ;
wire        src_4       ;
wire        src_0       ;
wire        src_imm_i   ;
wire        src_imm_s   ;
wire        es_rf_we    ;
wire        es_mem_we   ;
wire        es_mem_re   ;
wire [ 1:0] es_mem_bytes;
wire [ 5:0] shamt;
wire [19:0] imm_u;
wire [11:0] imm_i;
wire [11:0] imm_s;
wire [ 4:0] rd;
wire [`RF_DATA_WD-1:0] rs1_value;
wire [`RF_DATA_WD-1:0] rs2_value;
wire [`PC_WD     -1:0] es_pc  ;

assign {op_mul        ,
        op_div        ,
        op_rem        ,
        op_add        ,   
        op_sub        ,  
        op_slt        ,  
        op_sltu       ,  
        op_and        ,  
        op_or         ,  
        op_xor        ,  
        op_sll        ,  
        op_srl        ,  
        op_sra        ,  
        res_sext      , 
        res_zext      , 
        shamt         ,  
        src_shamt     ,  
		src_pc        ,	
		src_imm_u     ,  
        src_4         ,  
        src_0         ,  
        src_imm_i     ,  
        src_imm_s     ,  
        es_rf_we      ,  
        es_mem_we     ,
        es_mem_re     ,
        es_mem_bytes  ,
        rd            ,  
        imm_s         ,  
        imm_i         ,  
        imm_u         ,  
        rs1_value     ,  
        rs2_value     ,  
        es_pc            
       } = ds_to_es_bus_r;

wire [63:0] alu_src1   ;
wire [63:0] alu_src2   ;
wire [63:0] alu_result ;

assign es_to_ms_bus = {res_sext         ,  
                       res_zext         ,
					   es_mem_bytes     ,  
					   es_mem_re        ,  
					   es_rf_we         ,  
                       rd               ,  
                       alu_result       ,  
                       es_pc               
                      };

assign es_ready_go    = 1'b1;
assign es_allowin     = !es_valid || es_ready_go && ms_allowin;
assign es_to_ms_valid =  es_valid && es_ready_go;
always @(posedge clk) begin
    if (reset) begin
        es_valid <= 1'b0;
    end
end
always @(posedge clk) begin
    if (es_allowin) begin
        es_valid <= ds_to_es_valid;
    end
end
always @(posedge clk) begin
    if(ds_to_es_valid && es_allowin) begin
        ds_to_es_bus_r <= ds_to_es_bus;
    end
end

assign alu_src1 = src_pc   ? es_pc : 
                     src_0    ? 64'd0 :
                     res_sext && (op_sll || op_srl || op_sra) ? {32'b0,rs1_value[31:0]} :
                            rs1_value;
  
assign alu_src2 = src_4 ? 64'd4 : 
                     src_imm_u ? {{32{imm_u[19]}},imm_u,12'b0} :
                     src_imm_i ? {{52{imm_i[11]}},imm_i} :
                     src_imm_s ? {{52{imm_s[11]}},imm_s} :
                     src_shamt ? {58'b0,shamt} :
                     res_sext && (op_sll || op_srl || op_sra) ? {59'b0,rs2_value[4:0]} :
                     (op_sll || op_srl || op_sra) ? {58'b0,rs2_value[5:0]} :
                     rs2_value;

ysyx_22041752_alu U_YSYX_22041752_ALU_0(
    .op_add          ( op_add         ),
    .op_sub          ( op_sub         ),
    .op_slt          ( op_slt         ),
    .op_sltu         ( op_sltu        ),
    .op_and          ( op_and         ),
    .op_or           ( op_or          ),
    .op_xor          ( op_xor         ),
    .op_sll          ( op_sll         ),
    .op_srl          ( op_srl         ),
    .op_sra          ( op_sra         ),
    .res_sext        ( res_sext       ),
    .alu_src1        ( alu_src1       ),
    .alu_src2        ( alu_src2       ),
    .alu_result      ( alu_result     ),
    .mem_result      ( data_sram_addr )
);

assign data_sram_en  = 1'b1;
assign data_sram_wen = es_mem_we && es_valid && es_mem_bytes == 2'b11 ? 8'hff : 
                       es_mem_we && es_valid && es_mem_bytes == 2'b10 ? 8'h0f :
                       es_mem_we && es_valid && es_mem_bytes == 2'b01 ? 8'h03 :
                                                                        8'h01 ;

assign data_sram_wdata = rs2_value;
//forward_bus
wire mem_read_after_write;
wire es_forward_valid;
assign mem_read_after_write = (es_mem_re) && es_valid;
assign es_forward_valid = es_rf_we && es_valid;
assign es_forward_bus = {mem_read_after_write,es_forward_valid,alu_result,rd};

endmodule
