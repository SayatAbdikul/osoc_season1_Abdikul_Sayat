module FetchUnit(
    input clk,
    input reset,
    input en_pc,
    input [11:0] new_pc,
    input en_new_pc,
    output reg [15:0] instruction
);
    reg [11:0] pc;
    reg [15:0] memory [4095:0];

    initial begin
        $readmemh("./Instruction_Generator/instructions.txt", memory);
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc <= 0;
            instruction <= 0;
        end else if(en_new_pc) begin
            pc <= new_pc;
            instruction <= memory[pc];
        end else if (en_pc) begin
            pc <= pc + 1;
            instruction <= memory[pc];
        end
    end

endmodule
