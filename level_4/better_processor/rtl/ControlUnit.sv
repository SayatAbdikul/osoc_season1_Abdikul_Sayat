module ControlUnit (
    input [15:0] instruction,
    input run,
    input clk,
    input reset,
    output reg en_s, 
    output reg en_c, 
    output reg [7:0] en_reg, 
    output reg done
);
    reg [1:0] state, next_state;
    wire [2:0] Rx = instruction[15:13]; 

    always @(*) begin
        en_s = 0;
        en_c = 0;
        en_reg = 0;
        done = 0;
        next_state = state; 

        case (state)
            0: begin
                en_s = 1;                
                next_state = 1;          
            end
            1: begin
                en_c = 1;                
                next_state = 2;         
            end
            2: begin
                en_reg[Rx] = 1;          
                done = 1;                
                next_state = 0;          
            end
            default: begin
                next_state = 0;         
            end
        endcase
    end

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= 0;
        end else begin
            state <= next_state;
        end
    end
endmodule
