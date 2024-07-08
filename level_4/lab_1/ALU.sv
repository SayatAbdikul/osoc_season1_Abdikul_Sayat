module ALU (
input wire carry_in,
input wire [15:0] in_a,
input wire [15:0] in_b,
input wire [3:0] select,
input wire mode,
output wire carry_out,
output wire compare,
output wire [3:0] alu_out
);
    reg alu_result = 16'h0000;
    always@(*) begin
        if (mode) begin
            case(select)
                4'd0: alu_result = ~in_a;
                4'd1: alu_result = ~(in_a | in_b);
                4'd2: alu_result = (~in_a)&in_b;
                4'd3: alu_result = 0;
                4'd4: alu_result = ~(in_a&in_b);
                4'd5: alu_result = ~in_b;
                4'd6: alu_result = in_a^in_b;
                4'd7: alu_result = in_a&(~in_b);
                4'd8: alu_result = ~in_a | in_b;
                4'd9: alu_result = ~(in_a ^ in_b);
                4'd10: alu_result = in_b;
                4'd11: alu_result = in_a & in_b;
                4'd12: alu_result = 1;
                4'd13: alu_result = in_a | ~in_b;
                4'd14: alu_result = in_a | in_b;
                4'd15: alu_result = in_a;
            endcase
        end else begin
            case(select)
                4'd0: alu_result = in_a;
                4'd1: alu_result = in_a+in_b;
                4'd2: alu_result = in_a + ~in_b;
                4'd3: alu_result = 4'b1111;
                4'd4: alu_result = in_a + in_a&(~in_b);
                4'd5: alu_result = (in_a | in_b) + in_a&(~in_b);
                4'd6: alu_result = in_a-in_b-1;
                4'd7: alu_result = in_a&(~in_b)-1;
                4'd8: alu_result = in_a+(in_a&in_b);
                4'd9: alu_result = in_a + in_b;
                4'd10: alu_result = (in_a | (~in_b)) + in_a&in_b;
                4'd11: alu_result = in_a & in_b - 1;
                4'd12: alu_result = in_a + in_a;
                4'd13: alu_result = (in_a | in_b) + in_a;
                4'd14: alu_result = (in_a | (~in_b)) + in_a;
                4'd15: alu_result = in_a - 1;
            endcase
        end
        alu_out = alu_result[3:0];
        carry_out = carry_in;
        if (in_a == in_b) begin
            compare = 1;
        end else begin
            compare = 0;
        end

        
    end
endmodule