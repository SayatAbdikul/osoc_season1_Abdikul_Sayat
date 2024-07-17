module ALU (
    input wire carry_in,
    input wire [15:0] in_a,
    input wire [15:0] in_b,
    input wire [3:0] select,
    input wire mode,
    output reg carry_out,
    output reg compare,
    output reg [15:0] alu_out
);
    reg [15:0] alu_result;
    
    always @(*) begin
        if (mode) begin
            case (select)
                4'd0: alu_result = ~in_a;
                4'd1: alu_result = ~(in_a | in_b);
                4'd2: alu_result = (~in_a) & in_b;
                4'd3: alu_result = 0;
                4'd4: alu_result = ~(in_a & in_b);
                4'd5: alu_result = ~in_b;
                4'd6: alu_result = in_a ^ in_b;
                4'd7: alu_result = in_a & (~in_b);
                4'd8: alu_result = (~in_a) | in_b;
                4'd9: alu_result = ~(in_a ^ in_b);
                4'd10: alu_result = in_b;
                4'd11: alu_result = in_a & in_b;
                4'd12: alu_result = 1;
                4'd13: alu_result = in_a | ~in_b;
                4'd14: alu_result = in_a | in_b;
                4'd15: alu_result = in_a;
            endcase
        end else begin
            case (select)
                4'd0: alu_result = in_a;
                4'd1: alu_result = in_a | in_b;
                4'd2: alu_result = in_a | (~in_b);
                4'd3: alu_result = -1;
                4'd4: alu_result = in_a | (in_a & ~in_b);
                4'd5: alu_result = (in_a | in_b) + (in_a & ~in_b);
                4'd6: alu_result = in_a - in_b - 1;
                4'd7: alu_result = (in_a & ~in_b) - 1;
                4'd8: alu_result = in_a + (in_a & in_b);
                4'd9: alu_result = in_a + in_b;
                4'd10: alu_result = (in_a | (~in_b)) + (in_a & in_b);
                4'd11: alu_result = (in_a & in_b) - 1;
                4'd12: alu_result = in_a + in_a;
                4'd13: alu_result = (in_a | in_b) + in_a;
                4'd14: alu_result = (in_a | (~in_b)) + in_a;
                4'd15: alu_result = in_a - 1;
            endcase
        end
        alu_out = alu_result;
        carry_out = carry_in;
        compare = (in_a == in_b) ? 1 : 0;
    end
endmodule
