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
        $readmemh("/Users/sayat/Documents/GitHub/osoc_season1_Abdikul_Sayat/level_4/better_processor/tests/instructions.txt", memory);
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            pc <= 0;
            instruction <= 0;
        end else if(en_new_pc) begin
            pc <= new_pc;
            instruction <= memory[pc];
            //$display("instruction from fetch unit %d", memory[pc]);
            //$display("new pc is %d", pc);
        end else if (en_pc) begin
            instruction <= memory[pc];
            pc <= pc + 1;
            //$display("instruction from fetch unit %d", memory[pc]);
        end
    end

endmodule
