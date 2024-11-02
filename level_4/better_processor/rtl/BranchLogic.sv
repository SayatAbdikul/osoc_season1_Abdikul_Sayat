module BranchLogic (
    input [15:0] instruction,
    input clk,
    input [15:0] last_alu_result,
    input en_branch,
    output reg [11:0] new_pc,
    output branch_res,
    output branch
);
    always @(*) begin
        branch_res = 0;
        new_pc = 0;
        if (en_branch && instruction[1:0] == 2) begin
            branch_res = 1;
            // if(instruction[3:2] == 0 && last_alu_result == 0) begin
            //     new_pc <= instruction[15:4];
            //     $display("THERE IS SOMETHING");
            // end
            if(instruction[3:2] == 0 && last_alu_result == 0) new_pc = instruction[15:4];
            else if(instruction[3:2] == 1 && last_alu_result == 1) new_pc = instruction[15:4];
            else if(instruction[3:2] == 2 && last_alu_result == 2) new_pc = instruction[15:4];
            else branch_res = 0;
            //$display("VERILOG BRANCH!!! New pc is %d", new_pc);
        end
    end
    assign branch = (instruction[1:0] == 2);
endmodule