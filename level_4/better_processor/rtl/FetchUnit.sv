module FetchUnit(
    input clk,
    input reset,
    input en_pc,
    input [11:0] new_pc,
    input en_new_pc,
    output [11:0] pc
);
 // there is some work to do
    reg [11:0] current_pc;
    initial begin
        current_pc = -1;
    end
    always @(posedge clk or posedge reset) begin
        if (reset) begin
            current_pc <= 0;
        end else if(en_new_pc) begin
            current_pc <= new_pc;
            //instruction <= memory[new_pc];
            //$display("instruction from fetch unit %d", memory[pc]);
            //$display("new pc is %d", pc);
        end else if (en_pc) begin
            current_pc <= current_pc + 1;
            //fetch_val = 1;
            //$display("instruction from fetch unit %d", memory[pc]);
        end
    end
    assign pc = current_pc;
endmodule
