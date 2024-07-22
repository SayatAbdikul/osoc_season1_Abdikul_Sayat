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
    parameter IDLE = 0, LOAD_1 = 1, LOAD_2 = 2, CALC = 3, STORE = 4, DONE = 5;
    reg [15:0] reg_s, reg_c, result, reg_i;
    reg [2:0] state, next_state;
    reg [15:0] registers [7:0];
    wire [2:0] Rx = instruction[15:13], Ry = instruction[12:10];
    wire [3:0] sel = instruction[6:3];
    wire [15:0] x = registers[Rx], y = registers[Ry];
    wire mode = instruction[2];

    // State transition logic
    always @(*) begin
        case (state)
            IDLE: next_state = en_i ? LOAD_1 : IDLE;
            LOAD_1: next_state = LOAD_2;
            LOAD_2: next_state = CALC;
            CALC: next_state = STORE;
            STORE: next_state = DONE;
            DONE: next_state = en_i ? LOAD_1 : DONE;
            default: next_state = IDLE;
        endcase
    end

    // Sequential block
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= IDLE;
            reg_i <= 0;
            reg_c <= 0;
            reg_s <= 0;
            for (integer i = 0; i < 8; i = i + 1) begin
                registers[i] <= 0;
            end
        end else begin
            state <= next_state;
            case (state)
                LOAD_1: begin
                    reg_i <= instruction;
                    reg_s <= registers[Rx];
                end
                LOAD_2: begin
                    // Assuming you want to load some other value in reg_c here
                    // Add appropriate logic if necessary
                end
                CALC: begin
                    // ALU operation is implicitly triggered by the instantiation
                end
                STORE: begin
                    registers[Rx] <= result;
                end
            endcase
        end
    end

    // ALU instantiation
    ALU alu(
        .in_a(x),
        .in_b(y),
        .select(sel),
        .mode(mode),
        .alu_out(result)
    );

    assign d_out = reg_c;
    assign done = (state == DONE);

endmodule
