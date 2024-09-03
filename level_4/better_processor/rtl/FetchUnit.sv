module FetchUnit(
    input clk,
    input reset,
    input en_pc,
    output reg [15:0] instruction
);
    reg [7:0] pc;
    reg [15:0] memory [255:0];

    initial begin
        $readmemh("./Instruction_Generator/instructions.txt", memory);
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc <= 0;
        end else if (en_pc) begin
            pc <= pc + 1;
        end
    end

    always @(posedge clk) begin
        if (en_pc) begin
            instruction <= memory[pc];
            //$display("program counter is %d", pc);
        end
    end
endmodule
