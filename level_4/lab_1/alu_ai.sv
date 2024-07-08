module ALU (
    input wire carry_in,
    input wire [15:0] in_a,
    input wire [15:0] in_b,
    input wire [3:0] select,
    input wire mode,
    output reg carry_out,
    output wire compare,
    output reg [15:0] alu_out
);
    reg [16:0] temp;

    always @(*) begin
        carry_out = 0;
        if (mode) begin
            // Logical operations
            case (select)
                4'd0: alu_out = ~in_a;
                4'd1: alu_out = ~(in_a | in_b);
                4'd2: alu_out = (~in_a) & in_b;
                4'd3: alu_out = 0;
                4'd4: alu_out = ~(in_a & in_b);
                4'd5: alu_out = ~in_b;
                4'd6: alu_out = in_a ^ in_b;
                4'd7: alu_out = in_a & (~in_b);
                4'd8: alu_out = ~in_a | in_b;
                4'd9: alu_out = ~(in_a ^ in_b);
                4'd10: alu_out = in_b;
                4'd11: alu_out = in_a & in_b;
                4'd12: alu_out = 16'hFFFF;
                4'd13: alu_out = in_a | ~in_b;
                4'd14: alu_out = in_a | in_b;
                4'd15: alu_out = in_a;
            endcase
        end else begin
            // Arithmetic operations
            case (select)
                4'd0: alu_out = in_a;
                4'd1: begin
                    temp = in_a + in_b + carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd2: begin
                    temp = in_a + (~in_b) + carry_in; // Subtraction: in_a - in_b
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd3: alu_out = 16'hFFFF;
                4'd4: begin
                    temp = in_a + (in_a & (~in_b)) + carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd5: begin
                    temp = (in_a | in_b) + (in_a & (~in_b)) + carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd6: begin
                    temp = in_a - in_b - carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd7: begin
                    temp = in_a & (~in_b) - carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd8: begin
                    temp = in_a + (in_a & in_b) + carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd9: begin
                    temp = in_a + in_b + carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd10: begin
                    temp = (in_a | (~in_b)) + (in_a & in_b) + carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd11: begin
                    temp = (in_a & in_b) - carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd12: begin
                    temp = in_a + in_a + carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd13: begin
                    temp = (in_a | in_b) + in_a + carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd14: begin
                    temp = (in_a | (~in_b)) + in_a + carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
                4'd15: begin
                    temp = in_a - carry_in;
                    alu_out = temp[15:0];
                    carry_out = temp[16];
                end
            endcase
        end
    end

    // Compare logic (for example, checking if alu_out is zero)
    assign compare = (alu_out == 0);

endmodule
