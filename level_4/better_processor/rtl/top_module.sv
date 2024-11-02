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
    output branch_val,
    output run_val,
    output done
);
    reg [15:0] instruction, last_alu_result;
    wire [15:0] last_alu;
    wire en_pc, en_new_pc;
    wire branch;
    reg run, en_branch, en_fetch, en_memory;
    wire branch_res;
    reg [11:0] pc, new_pc;
    initial begin
        pc = 0;
    end
    always @(posedge clk) begin
        last_alu_result <= last_alu;
    end
    // controls stages
    BranchFSM fsm(
        .clk(clk),
        .reset(reset),
        .done(en_pc),
        .branch(branch),
        .run(run),
        .en_branch(en_branch),
        .en_fetch(en_fetch),
        .en_memory(en_memory)
    );
    //gets instructions
    Memory memory(
        .clk(clk),
        .pc(pc),
        .en_memory(en_memory),
        .instruction(instruction)
    );
    //checks for branch
    BranchLogic branch_logic(
        .instruction(instruction), 
        .clk(clk),
        .en_branch(en_branch),
        .new_pc(new_pc),
        .last_alu_result(last_alu_result),
        .branch(branch),
        .branch_res(branch_res)
    );
    //changes pc value
    FetchUnit fetch(
            .clk(clk),
            .reset(reset),
            .en_new_pc(branch_res),
            .new_pc(new_pc),
            .en_pc(en_fetch),
            .pc(pc)
        );
    //processing
    Core core(
        .instruction(instruction),
        .clk(clk),
        .run(run),
        .branch_res(branch_res),
        .reset(reset),
        .d_out(last_alu),
        .done(done),
        .Rx_val(Rx_val),
        .Ry_val(Ry_val),
        .x_val(x_val),
        .operand_val(operand_val),
        .sel_val(sel_val)
    );
    assign run_val = run;
    assign d_out = last_alu_result;
    assign instruction_val = instruction;
    assign branch_val = branch;
endmodule

