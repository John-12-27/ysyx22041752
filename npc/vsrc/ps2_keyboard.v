module ps2_keyboard(
    input  wire clk,
    input  wire rst,
    input  wire ps2_clk,
    input  wire ps2_data
);

wire      sampling;
reg [9:0] buffer;        // ps2_data bits
reg [3:0] cnt;           // count ps2_data bits
reg [2:0] ps2_clk_sync;

always @(posedge clk) begin
    ps2_clk_sync <=  {ps2_clk_sync[1:0],ps2_clk};
end

assign sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1];

always @(posedge clk) begin
    if (rst) begin
        cnt <= 0;
    end
    else if (sampling) begin
        if (cnt == 10) begin
            cnt <= 0;
        end
        else begin
            cnt <= cnt + 4'b1;
        end
    end
end

always @(posedge clk) begin
    if(sampling)
        buffer[cnt] <= ps2_data;
end
always @(posedge clk) begin
    if (sampling && cnt == 10) begin
        if (buffer[0] == 1'b0 && ps2_data && ^buffer[9:1]) begin
            $display("receive %x", buffer[8:1]);
        end
    end
end

endmodule
