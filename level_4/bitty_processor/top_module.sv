module top_module (
    input clk,
    input reset,
    output done,
    output [15:0] result,
    output [2:0] select
);
    reg en_i, en_s, en_c, en_pc;
    reg [15:0] instruction;
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            en_i <= 0;
            en_s <= 0;
            en_c <= 0;
            en_pc <= 0;
        end else begin
            en_i <= 1;  
            en_s <= 1;
            en_c <= 1;
            en_pc <= 1;
        end
    end
    FetchUnit fetch(
        .clk(clk),
        .reset(reset),
        .en(en_pc),
        .instruction(instruction)
    );
    ControlUnit u_ControlUnit (
        .instruction(instruction),
        .clk(clk),
        .reset(reset),
        .en_s(en_s),
        .en_c(en_c),
        .en_i(en_i),
        .done(done),
        .d_out(result),
        .select(select)
    );

endmodule
