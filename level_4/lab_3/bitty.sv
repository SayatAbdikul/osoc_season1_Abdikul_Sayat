module ControlUnit (
    input [15:0] instruction,
    input clk,
    input reset,
    input en_s, 
    input en_c, 
    input en_i, 
    input en_0, 
    input en_1, 
    input en_2, 
    input en_3, 
    input en_4, 
    input en_5, 
    input en_6, 
    input en_7,
    output done,
    output d_out
);
    reg [15:0] d_in, reg_s, result, reg_i;
    always @(*) begin 
        if(en_i) begin
            reg_i <= instruction;
        end
    end
    parameter Rx = reg_i[15:13], Ry = reg_i[12:10], sel = reg_i[6:3], mode = reg_i[2];
    wire [15:0] x, y;
    always @(posedge reset) begin
        if(reset) begin
            reg_c <= 0;
            reg_s <= 0;
        end
    end
    mux mX(
        .d_in(d_in),
        .sel(sel),
        .reset(reset),
        .clk(clk),
        .en_0(en_0),
        .en_1(en_1),
        .en_2(en_2),
        .en_3(en_3),
        .en_4(en_4),
        .en_5(en_5),
        .en_6(en_6),
        .en_7(en_7),
        .d_out(x)
    );
    mux mY(
        .d_in(d_in),
        .sel(sel),
        .reset(reset),
        .clk(clk),
        .en_0(en_0),
        .en_1(en_1),
        .en_2(en_2),
        .en_3(en_3),
        .en_4(en_4),
        .en_5(en_5),
        .en_6(en_6),
        .en_7(en_7),
        .d_out(y)
    );
    always @(*) begin
        if(en_s) begin
            reg_s <= x;
        end
    end
    assign x = reg_s;
    ALU alu(
        .in_a(x),
        .in_b(y),
        .sel(sel),
        .mode(mode),
        .alu_out(result)
    );
    always @(*) begin
        if(en_c) begin
            reg_c <= result;
        end
    end
    assign d_out = reg_c;
    assign d_in = reg_c;
    assign done = (clk == 500);
endmodule