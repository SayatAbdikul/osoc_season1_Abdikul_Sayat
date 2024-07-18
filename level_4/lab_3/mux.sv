module mux(
    input d_in,
    input sel, 
    input reset, 
    input clk,
    input en_0, 
    input en_1, 
    input en_2, 
    input en_3, 
    input en_4, 
    input en_5, 
    input en_6, 
    input en_7,
    output d_out
)
    reg [15:0] Reg0, Reg1, Reg2, Reg3, Reg4, Reg5, Reg6, Reg7;
    always @(posedge reset) begin
        if(reset) begin
            Reg0 <= 0;
            Reg1 <= 0;
            Reg2 <= 0;
            Reg3 <= 0;
            Reg4 <= 0;
            Reg5 <= 0;
            Reg6 <= 0;
            Reg7 <= 0;
        end
    end
    always @(posedge clk) begin
        case(sel)
            0: begin
                Reg0 <= (en_0) ? d_in: Reg0;
                d_out <= Reg0; 
            end
            1: begin
                Reg1 = (en_1) ? d_in: Reg1;
                d_out <= Reg1; 
            end
            2: begin
                Reg2 = (en_2) ? d_in: Reg2;
                d_out <= Reg2; 
            end
            3: begin
                Reg3 = (en_3) ? d_in: Reg3;
                d_out <= Reg3; 
            end
            4: begin
                Reg4 = (en_4) ? d_in: Reg4;
                d_out <= Reg4; 
            end
            5: begin
                Reg5 = (en_5) ? d_in: Reg5;
                d_out <= Reg5; 
            end
            6: begin
                Reg6 = (en_6) ? d_in: Reg6;
                d_out <= Reg6; 
            end
            7: begin
                Reg7 = (en_7) ? d_in: Reg7;
                d_out <= Reg7; 
            end
        endcase
    end
endmodule