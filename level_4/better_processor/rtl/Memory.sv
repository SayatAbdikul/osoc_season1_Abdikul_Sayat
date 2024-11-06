module Memory (
    input clk,
    input en_memory,
    input [11:0] pc,
    output[15:0] instruction
);
    reg [15:0] memory [4095:0];
    reg [11:0] current_pc; 
    initial begin
        current_pc = 0;
        $readmemh("/Users/sayat/Documents/GitHub/osoc_season1_Abdikul_Sayat/level_4/better_processor/tests/instructions.txt", memory);
    end
    always @(posedge clk) begin
        if(en_memory) begin
            current_pc <= pc;
            $display("NEW PC IS %d\n new instruction is %h", pc, memory[pc]);
        end
    end
    assign instruction = en_memory ? memory[pc] : memory[current_pc];
endmodule