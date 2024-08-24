module top_module (
    input clk,
    input reset,
    output done,
    output [15:0] result,
    output [2:0] select
);
    reg en_i, en_s, en_c, en_pc;
    reg[7:0] en_reg;
    reg [15:0] instruction;
    parameter IDLE = 0, LOAD = 1, CALC = 2, STORE = 3, DONE = 4;
    reg [2:0] state = 0, next_state = 0;
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            en_i <= 0;
            en_s <= 0;
            en_c <= 0;
            en_pc <= 0;
            state <= IDLE;
        end else begin
            state <= next_state;
            case (state)
                IDLE: begin
                    en_i <= 1;
                    en_s <= 0;
                    en_c <= 0;
                    en_pc <= 0;
                    en_reg <= 0;
                end
                LOAD: begin
                    en_i <= 0;
                    en_s <= 1;
                    en_c <= 0;
                    en_pc <= 0;
                    en_reg <= 0;
                end
                CALC: begin
                    en_i <= 0;
                    en_s <= 0;
                    en_c <= 1;
                    en_pc <= 0;                    
                    en_reg <= 0;
                end
                STORE: begin
                    en_i <= 0;
                    en_s <= 0;
                    en_c <= 0;
                    en_pc <= 1; // Move to the next instruction
                    en_reg[instruction[15:13]] <= 1;
                end
                DONE: begin
                    en_i <= 0;
                    en_s <= 0;
                    en_c <= 0;
                    en_pc <= 0;
                    en_reg[instruction[15:13]] <= 0;
                end
            endcase
        end
    end

    FetchUnit fetch(
        .clk(clk),
        .reset(reset),
        .en(en_pc),
        .instruction(instruction)
    );
    ControlUnit u_ControlUnit (
        .instruction(instruction),
        .clk(clk),
        .reset(reset),
        .en_s(en_s),
        .en_c(en_c),
        .en_i(en_i),
        .en_reg(en_reg),
        .done(done),
        .d_out(result),
        .select(select)
    );
    always @(posedge clk) begin
        case (state)
            IDLE: next_state = LOAD;
            LOAD: next_state = CALC;
            CALC: next_state = STORE;
            STORE: next_state = DONE;
            DONE: next_state = IDLE;
            default: next_state = IDLE;
        endcase
    end
endmodule
