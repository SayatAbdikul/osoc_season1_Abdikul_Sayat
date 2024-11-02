module Memory (
    input clk,
    input en_memory,
    input [11:0] pc,
    output[15:0] instruction
);
    reg [15:0] memory [4095:0];

    initial begin
        $readmemh("/Users/sayat/Documents/GitHub/osoc_season1_Abdikul_Sayat/level_4/better_processor/tests/instructions.txt", memory);
    end
    assign instruction = memory[pc];
endmodule