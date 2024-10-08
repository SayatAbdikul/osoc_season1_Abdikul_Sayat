module top_module (
    input clk,
    input reset,
    output [15:0] d_out,
    output [2:0] Rx_val,
    output [2:0] Ry_val,
    output [2:0] sel_val,
    output [15:0] x_val,
    output [15:0] operand_val,
    output [15:0] instruction_val,
    output run_val,
    output done
);
    reg [15:0] instruction, last_alu_result;
    wire [15:0] last_alu;
    wire en_pc, en_new_pc;
    wire [1:0] branch;
    wire branch_res;
    reg [11:0] new_pc;
    always @(posedge clk) begin
        last_alu_result <= last_alu;
    end
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
        .run(branch),
        .branch_res(branch_res),
        .reset(reset),
        .d_out(last_alu),
        .done(en_pc),
        .Rx_val(Rx_val),
        .Ry_val(Ry_val),
        .x_val(x_val),
        .operand_val(operand_val),
        .sel_val(sel_val)
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
    assign run_val = !branch;
    assign d_out = last_alu_result;
    assign instruction_val = instruction;
endmodule

