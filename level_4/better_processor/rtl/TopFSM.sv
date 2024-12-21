module TopFSM(
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
    parameter IDLE = 0, CHECK_BRANCH = 1, FETCH = 2, EXEC_START = 3, EXEC_1=4, EXEC_2 = 5, EXEC_END = 6;

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
                next_state = EXEC_START;
                en_fetch = 1;
                if(branch) next_state = IDLE;
            end
            EXEC_START : begin
                next_state = EXEC_1;
                run = 1;
            end
            EXEC_1 : begin
                next_state = EXEC_2;
                run = 1;
            end
            EXEC_2 : begin
                next_state = EXEC_END;
                run = 1;
            end
            EXEC_END: begin
                next_state = IDLE;
                run = 1;
            end
            default: next_state = IDLE;
        endcase
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= 0;
        end else begin
            state <= next_state;
            $display("the fsm state is %d", state);
        end
    end
endmodule
