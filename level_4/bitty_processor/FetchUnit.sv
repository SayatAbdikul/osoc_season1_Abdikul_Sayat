module FetchUnit(
    input clk,
    input reset,
    input en,
    output reg [15:0] instruction
);
    reg [7:0] pc;
    reg [15:0] memory [255:0];

    initial begin
        memory[0] = 16'h1234;
        memory[1] = 16'h5678;
        memory[2] = 16'h9ABC;
        memory[3] = 16'hDEF0;
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc <= 0;
        end else if (en) begin
            pc <= pc + 1;
        end
    end

    always @(posedge clk) begin
        if (en) begin
            instruction <= memory[pc];
        end
    end
endmodule
