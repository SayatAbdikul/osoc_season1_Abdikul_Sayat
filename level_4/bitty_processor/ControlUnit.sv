import "DPI-C" function int ALU(input int q, input int r, input int w );   
//import "DPI-C" function int ALU(int, int, int);

module ControlUnit (
    input [15:0] instruction,
    input clk,
    input reset,
    input en_s, 
    input en_c, 
    input en_i, 
    input [7:0] en_reg, 
    output done,
    output [15:0] d_out,
    output [2:0] select
);

    /* verilator lint_off UNUSEDSIGNAL */
    reg [15:0] reg_s, reg_c, reg_i, result;
    /* verilator lint_off UNUSEDSIGNAL */
    reg [2:0] state, next_state;
    reg [15:0] registers [7:0];
    wire [1:0] format = reg_i[1:0];
    wire [2:0] Rx = reg_i[15:13], Ry = reg_i[12:10];
    reg [15:0] operand = registers[Ry];
    wire [2:0] sel = reg_i[4:2];
    wire [15:0] y = registers[Ry];

    integer i;
    int cpp_result;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            reg_i <= 0;
            reg_c <= 0;
            reg_s <= 0;
            for (i = 0; i < 8; i = i + 1) begin
                registers[i] <= 0;
            end
        end else begin
            state <= next_state;
            if (en_i) reg_i <= instruction;
            if (en_s) reg_s <= registers[Rx];
            if (en_c) reg_c <= result;
            if(en_reg[Rx]) begin
                registers[Rx] <= reg_c;
            end
        end
    end
    always_latch @(*) begin
        if (en_reg[Rx]) begin
            if(format == 1) begin
                operand = {8'b0, reg_i[12:5]};
            end else begin
                operand = registers[Ry];
            end
        end
        if (en_reg[Rx]) begin
            if(format == 1) begin
                cpp_result = ALU({16'b0, reg_s}, {16'b0, {8'b0, reg_i[12:5]}}, {29'b0, sel});
                //$display("cpp_result=%d", cpp_result);
                //$display("ALU operation on format 1: the x = %d, y = %d", {16'b0, reg_s}, {16'b0, {8'b0, reg_i[12:5]}});
            end else begin
                cpp_result = ALU({16'b0, reg_s}, {16'b0, registers[Ry]}, {29'b0, sel});
            end
        end
    end
    Bitty_ALU b_alu(
        .in_a(registers[Rx]),
        .in_b(operand),
        .select(sel),
        .alu_out(result)
    );
    reg [5:0] tests;
    // always @(posedge clk) begin
    //     if(en_reg[Rx]) begin
    //         $display("the result is %d, cpp_result is %d, reg_c is ", result, cpp_result, reg_c);
    //     end
    // end
    always @(posedge clk) begin
         /* verilator lint_off WIDTHEXPAND */
        if (reg_c != cpp_result && en_reg[Rx] && format==1) begin
            $display("Error!\n The cpp result is %d\n", cpp_result);
            //$display("The result is %d\n", result);
            $display("The reg_c is %d\n", reg_c);
            $display("The x is %d\n", registers[Rx]);
            $display("The operand is %d\n", operand);
            //$display("The format is %d\n", format);
            $display("The select is %d\n", sel);
        end else if (en_reg[Rx] && reg_c != 0) begin
            // $display("cpp_result %d", cpp_result);
            // $display("reg_c %d", reg_c);
            // $display("The operation is successful\n");
            // $display("The test number: %d\n", tests);
            //  $display("The operand: %d\n", operand);
            //  $display("The Ry: %d\n", Ry);
            //  $display("The select: %d\n", sel);
            tests <= tests + 1;
        end
         /* verilator lint_off WIDTHEXPAND */
    end


    assign d_out = reg_c;
    assign select = sel;
    assign done = en_c;
endmodule
