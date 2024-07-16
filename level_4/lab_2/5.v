module top_module (
    input clk,
    input reset,      // Synchronous reset
    input data,
    output shift_ena,
    output counting,
    input done_counting,
    output done,
    input ack );
    reg [3:0] state, next;
    parameter S=0, S1=1, S11=2, S110=3, B0=4, B1=5, B2=6, B3=7, C=8, W=9; 
    always @(*) begin
        case(state) 
            S: next = (data) ? S1: S;
            S1: next = (data) ? S11: S;
            S11: next = (data) ? S11: S110;
            S110: next = (data) ? B0: S;
            B0: next = B1;
            B1: next = B2;
            B2: next = B3;
            B3: next = C;
            C: next = (done_counting) ? W : C;
            W: next = (ack) ? S : W;
        endcase
    end
    always @(posedge clk) begin
        if(reset) begin
            state <= S;
        end else begin
        	state <= next;
        end
    end
    assign shift_ena = (state>=B0 && state <= B3);
    assign counting = (state==C);
    assign done = (state == W);
endmodule
