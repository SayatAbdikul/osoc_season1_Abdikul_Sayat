module BranchFSM(
    input clk,
    input reset,
    input done,
    input branch,
    output reg run,
    output reg en_branch,
    output reg en_fetch,
    output reg en_memory
);
    reg [2:0] state, next_state;  
    parameter IDLE = 0, CHECK_BRANCH = 1, FETCH = 2, CORE_START = 3, CORE=4, CORE_END = 5;

    always @(*) begin
        run = 0;
        en_branch = 0;
        en_fetch = 0;
        en_memory = 0;
        case (state)
            IDLE : begin
                next_state = CHECK_BRANCH;
                en_memory = 1;
            end
            CHECK_BRANCH : begin
                next_state = FETCH;
                en_branch = 1;
            end
            FETCH : begin
                next_state = CORE_START;
                en_fetch = 1;

            end
            CORE_START : begin
                next_state = CORE;
                run = 1;
            end
            CORE : begin
                next_state = CORE_END;
                run = 1;
            end
            CORE_END: begin
                next_state = IDLE;
                run = 1;
            end
            default: next_state = IDLE;
        endcase
    end

    always @(posedge clk or posedge reset) begin
        if (reset || branch) begin
            state <= 0;
        end else begin
            state <= next_state;
            $display("the fsm state is %d", state);
        end
    end
endmodule
