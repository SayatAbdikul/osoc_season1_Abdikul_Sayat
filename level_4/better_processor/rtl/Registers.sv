module Registers (
    input en_c,
    input en_s,
    input [7:0] en_reg,
    output [15:0] reg_c_out,
    output [15:0] reg_s_out,
    output [15:0] registers_out [7:0]
);
    reg [15:0] reg_c, reg_s; 
    reg [15:0] registers [7:0];
    initial begin
        reg_c = 0;
        reg_s = 0;
        for (i = 0; i < 8; i = i + 1) begin
            registers[i] = 16'b0;  // Initializing to 0
        end
    end
    always @(*) begin
        
    end
    assign reg_c_out = reg_c, reg_s_out = reg_s, registers_out = registers;
endmodule