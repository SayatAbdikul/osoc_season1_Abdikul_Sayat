module top_module (
    input clk,
    input reset,
    output [15:0] d_out,
    output done
);
    reg [15:0] instruction, last_alu_result;
    reg en_pc, en_new_pc, branch, branch_res;
    reg [11:0] new_pc;

    BranchLogic branch_logic(
        .instruction(instruction), 
        .clk(clk),
        .new_pc(new_pc),
        .last_alu_result(last_alu_result),
        .branch(branch),
        .branch_res(branch_res)
    );
    Core core(
        .instruction(instruction),
        .clk(clk),
        .run(!branch),
        .reset(reset),
        .d_out(last_alu_result),
        .done(en_pc)
    );
    FetchUnit fetch(
            .clk(clk),
            .reset(reset),
            .en_new_pc(branch_res),
            .new_pc(new_pc),
            .en_pc(en_pc),
            .instruction(instruction)
        );
    assign done = en_pc;
    assign d_out = last_alu_result;
endmodule

