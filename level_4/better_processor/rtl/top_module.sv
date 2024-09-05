module top_module (
    input clk,
    /* verilator lint_off UNUSEDSIGNAL */
    input run,
    /* verilator lint_off UNUSEDSIGNAL */
    input reset,
    output [15:0] d_out,
    output done
);
    reg [15:0] instruction;
    reg en_pc, en_new_pc;
    reg [11:0] new_pc;
    Core core(
        .instruction(instruction),
        .clk(clk),
        .run(run),
        .reset(reset),
        .d_out(d_out),
        .new_pc(new_pc),
        .en_new_pc(en_new_pc),
        .done(en_pc)
    );
    FetchUnit fetch(
            .clk(clk),
            .reset(reset),
            .en_new_pc(en_new_pc),
            .new_pc(new_pc),
            .en_pc(en_pc),
            .instruction(instruction)
        );
    assign done = en_pc;
endmodule

