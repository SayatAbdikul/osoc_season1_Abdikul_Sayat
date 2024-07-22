module top_module (
    input clk,
    input reset,
    input [15:0] instruction,
    output done,
    output [15:0] result
);
    reg en_i, en_s, en_c;
    reg [15:0] reg_s, reg_c;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            en_i <= 0;
            en_s <= 0;
            en_c <= 0;
        end else begin
            en_i <= 1;  
            en_s <= 1;
            en_c <= 1;
        end
    end

    ControlUnit u_ControlUnit (
        .instruction(instruction),
        .clk(clk),
        .reset(reset),
        .en_s(en_s),
        .en_c(en_c),
        .en_i(en_i),
        .done(done),
        .d_out(result)
    );

endmodule
