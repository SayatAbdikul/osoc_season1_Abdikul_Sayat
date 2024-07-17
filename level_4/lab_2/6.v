module top_module (
    input clk,
    input reset,      // Synchronous reset
    input data,
    output [3:0] count,
    output counting,
    output done,
    input ack
);
    parameter S=0, S1=1, S11=2, S110=3, D1=4, D2=5, D3=6, D4=7, C1=8, C2=9, C3=10, W=11;
    
    reg [3:0] state, next, delay;
    reg [9:0] counter;
    reg [3:0] thousand;
    
    always @(*) begin
        next = state;
        case(state)
            S: next = (data)? S1 : S;
            S1: next = (data)? S11: S;
            S11: next = (~data)? S110:S11;
            S110: next = (data)? D1 : S;
            D1: begin
                next = D2;
                delay[3] = data;
            end
            D2:   begin
                next = D3;
                delay[2] = data;
            end
            D3:   begin
                next = D4;
                delay[1] = data;
            end
            D4:   begin
                next = C1;
                delay[0] = data;
            end
            C1: next = (delay == 4'd0)? C3 : (counter == 10'd998)? C2 : C1;
            C2: next = (thousand == 4'd1)? C3 : C1; 
            C3: next = (counter == 10'd999)? W:C3;
            W:    next = (ack) ? S : W;
        endcase
    end
    
    always @(posedge clk) begin
        if (state == D4) begin
            thousand <= {delay[3:1],data};
        	counter <= 0;
        end
        if (state == C1 || state == C3) 
            counter <= counter + 1'b1;
        if (state == C2) begin
            counter <= 0;
            thousand <= thousand - 1;
        end
    end
    always@(posedge clk) begin
        if (reset)
            state <= S;
        else begin
            state <= next;
        end 
    end
    assign counting = (state >= C1 && state <= C3);
    assign done = (state == W);
    assign count = thousand;
    
endmodule
