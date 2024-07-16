module top_module (
    input clk,
    input reset,      // Synchronous reset
    input data,
    output reg start_shifting
);
    reg [3:0] state, seq; 
    
    always @(*) begin
        case(seq)
            3'd0: state = (data) ? 1 : 0;
            3'd1: state = (data) ? 2 : 0;
            3'd2: state = (data) ? 2 : 3;
            3'd3: state = (data) ? 4 : 0;
            3'd4: state = (reset) ? 0 : 4;
        endcase
          
    end
    
    always @(posedge clk) begin
        if (reset) begin
            seq <= 0; 
        end else begin
        	seq <= state;
        end
    end
    assign start_shifting = (seq == 4);
endmodule
