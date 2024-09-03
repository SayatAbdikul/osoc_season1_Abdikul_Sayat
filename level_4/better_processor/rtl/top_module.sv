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
    reg en_pc;
    Core core(
        .instruction(instruction),
        .clk(clk),
        .run(run),
        .reset(reset),
        .d_out(d_out),
        .done(en_pc)
    );
    FetchUnit fetch(
            .clk(clk),
            .reset(reset),
            .en_pc(en_pc),
            .instruction(instruction)
        );
    assign done = en_pc;
endmodule

