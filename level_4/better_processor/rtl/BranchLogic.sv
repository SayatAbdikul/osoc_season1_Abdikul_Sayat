module BranchLogic (
    input [15:0] instruction,
    input clk,
    input [15:0] last_alu_result,
    output reg [11:0] new_pc,
    output branch
);
    always @(posedge clk) begin
        if (instruction[1:0] == 2) begin
            if(instruction[3:2] == 0 && last_alu_result == 0) new_pc <= instruction[15:4];
            else if(instruction[3:2] == 1 && last_alu_result == 1) new_pc <= instruction[15:4];
            else if(instruction[3:2] == 2 && last_alu_result == 2) new_pc <= instruction[15:4];
        end
    end
    assign branch = (instruction[1:0] == 2);
endmodule