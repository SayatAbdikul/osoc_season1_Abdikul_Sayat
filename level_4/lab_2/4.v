module top_module (
    input clk,
    input reset,      // Synchronous reset
    output shift_ena);
    reg [2:0] count;
    always @(posedge clk) begin
        if(count>0) begin
            count <= count+1;
        end
        if(count==4) begin
            shift_ena = 0;
            count <= 0;
        end
        if(reset) begin
            shift_ena = 1;
            count <= 1;
        end
    end
endmodule