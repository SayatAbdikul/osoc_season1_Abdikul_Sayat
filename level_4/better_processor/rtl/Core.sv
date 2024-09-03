import "DPI-C" function int ALU(input int q, input int r, input int w );
module Core (
    input [15:0] instruction,
    input clk,
    /* verilator lint_off UNUSEDSIGNAL */
    input run,
    /* verilator lint_off UNUSEDSIGNAL */
    input reset,
    output [15:0] d_out,
    output done
);
    reg [15:0] reg_i=instruction, reg_c, reg_s; 
    reg [15:0] registers [7:0];
    reg en_c, en_s;
    int cpp_result;
    reg [2:0] Rx = instruction[15:13], Ry=instruction[12:10], sel = reg_i[4:2];
    reg [7:0] en_reg;
    reg [15:0] result, operand = registers[Ry];
    reg [1:0] format = instruction[1:0];
    ControlUnit control(
        .instruction(reg_i),
        .run(run),
        .clk(clk),
        .reset(reset),
        .en_c(en_c),
        .en_s(en_s),
        .en_reg(en_reg),
        .done(done)
    );
    always @(posedge clk or posedge reset) begin
       if (reset) begin
            en_c = 0;
            en_s = 0;
            en_reg = 0;
       end else begin
            if(en_s) begin
                reg_s = registers[Rx];
                if(format == 1) begin
                    operand = {8'b0, instruction[12:5]};
                end
                //$display("instruction %h", instruction);
                cpp_result = ALU({16'b0, registers[Rx]}, {16'b0, operand}, {29'b0, sel});
            end
            if(en_c) begin
                reg_c = result;
                if(cpp_result != {16'b0, result}) begin //testing 
                    $display("cpp_result %d", cpp_result);
                    $display("verilog result", result);
                end
                $display("cpp_result %d and verilog result %d", cpp_result, result);
            end
            if (en_reg[Rx]) begin
                registers[Rx] = reg_c;             
            end
       end
    end
    ALU alu(
        .in_a(reg_s),
        .in_b(operand),
        .select(sel),
        .alu_out(result)
    );
    assign d_out = result;
endmodule
