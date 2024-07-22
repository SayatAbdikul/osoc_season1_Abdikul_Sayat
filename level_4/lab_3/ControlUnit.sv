module ControlUnit (
    input [15:0] instruction,
    input clk,
    input reset,
    input en_s, 
    input en_c, 
    input en_i, 
    output done,
    output [15:0] d_out
);
    parameter IDLE = 0, LOAD = 1, CALC = 2, STORE = 3, DONE = 4;
    /* verilator lint_off UNUSEDSIGNAL */
    reg [15:0] reg_s, reg_c, reg_i;
    /* verilator lint_off UNUSEDSIGNAL */
    reg [2:0] state, next_state;
    reg [15:0] registers [7:0];
    wire [2:0] Rx = reg_i[15:13], Ry = reg_i[12:10];
    wire [3:0] sel = reg_i[6:3];
    wire mode = reg_i[2];
    wire [15:0] y = registers[Ry];
    wire [15:0] result;
    integer i;

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
        case (state)
            IDLE: next_state = en_i ? LOAD : IDLE;
            LOAD: next_state = en_s ? CALC : LOAD;
            CALC: next_state = en_c ? STORE : CALC;
            STORE: next_state = DONE;
            DONE: next_state = IDLE;
            default: next_state = IDLE;
        endcase
    end

    ALU alu(
        .in_a(reg_s),
        .in_b(y),
        .select(sel),
        .mode(mode),
        .alu_out(result)
    );

    assign d_out = reg_c;
    assign done = (state == DONE);
endmodule
