import "DPI-C" function int ALU(input int q, input int r, input int w );   
//import "DPI-C" function int ALU(int, int, int);

module ControlUnit (
    input [15:0] instruction,
    input clk,
    input reset,
    input en_s, 
    input en_c, 
    input en_i, 
    output done,
    output [15:0] d_out,
    output [2:0] select
);

    parameter IDLE = 0, LOAD = 1, CALC = 2, STORE = 3, DONE = 4;
    /* verilator lint_off UNUSEDSIGNAL */
    reg [15:0] reg_s, reg_c, reg_i;
    /* verilator lint_off UNUSEDSIGNAL */
    reg [2:0] state, next_state;
    reg [15:0] registers [7:0];
    wire [2:0] Rx = reg_i[15:13], Ry = reg_i[12:10];
    wire [2:0] sel = instruction[4:2];
    wire [15:0] y = registers[Ry];
    reg [15:0] result;
    integer i;
    int cpp_result;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            reg_i <= 0;
            reg_c <= 0;
            state <= IDLE;
            reg_s <= 0;
            for (i = 0; i < 8; i = i + 1) begin
                registers[i] <= 0;
            end
        end else begin
            state <= next_state;
            if (state == IDLE && en_i) reg_i <= instruction;
            if (state == LOAD && en_s) reg_s <= registers[Rx];
            if (state == CALC && en_c) reg_c <= result;
            if (state == STORE) registers[Rx] <= reg_c;
        end
    end

    always @(*) begin
        cpp_result = ALU({16'b0, reg_s}, {16'b0, y}, {29'b0, sel}); // Call the DPI-C function with proper bit-width
        result = cpp_result[15:0]; // Use the lower 16 bits of the result
    end

    always @(posedge clk) begin
        if (state == DONE && reg_c != 0) begin
            $display("Error!\n The cpp result is %d\n", result);
            $display("The verilog result is %d\n", reg_c);
        end else if (state == DONE) begin
            $display("The operation is successful\n");
        end
    end

    always @(*) begin
        case (state)
            IDLE: next_state = en_i ? LOAD : IDLE;
            LOAD: next_state = en_s ? CALC : LOAD;
            CALC: next_state = en_c ? STORE : CALC;
            STORE: next_state = DONE;
            DONE: next_state = IDLE;
            default: next_state = IDLE;
        endcase
    end

    assign d_out = reg_c;
    assign select = sel;
    assign done = (state == DONE);
endmodule
