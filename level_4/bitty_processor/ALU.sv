module ALU (
    input wire [15:0] in_a,
    input wire [15:0] in_b,
    input wire [2:0] select,
    output reg [15:0] alu_out
);
    parameter add = 0, sub = 1, and_op = 2, or_op = 3, xor_op = 4, shl = 5, shr = 6, cmp = 7;
    always @(*) begin
        case(select)
            add: alu_out = in_a + in_b;
            sub: alu_out = in_a - in_b;
            and_op: alu_out = in_a & in_b;
            or_op: alu_out = in_a | in_b;
            xor_op: alu_out = in_a ^ in_b;
            shl: alu_out = in_a << in_b;
            shr: alu_out = in_a >> in_b;
            cmp: alu_out = (in_a > in_b) ? 1: (in_a < in_b) ? 2: 0;
        endcase
    end
endmodule
