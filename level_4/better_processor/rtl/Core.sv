import "DPI-C" function int ALU(input int q, input int r, input int w );
module Core (
    input [15:0] instruction,
    input clk,
    input run,
    input reset,
    input branch_res,
    output [15:0] reg_c_out,
    output [15:0] d_out,
    output [2:0] Rx_val,
    output [2:0] Ry_val,
    output [2:0] sel_val,
    output [15:0] x_val,
    output [15:0] operand_val,
    output [1:0] format_val,
    output done
);
    reg [15:0] memory [65535:0];
    initial begin
        $readmemh("/Users/sayat/Documents/GitHub/osoc_season1_Abdikul_Sayat/level_4/better_processor/rtl/Memory.txt", memory);
    end
    reg [15:0] reg_i = instruction, reg_c, reg_s; 
    reg [15:0] registers [7:0];
    reg en_c, en_s;
    int cpp_result;
    reg [2:0] Rx = instruction[15:13], Ry=instruction[12:10], sel = reg_i[4:2];
    reg [7:0] en_reg;
    reg [15:0] result, operand = registers[Ry];
    reg [1:0] format = instruction[1:0];
    integer i;
    initial begin
        for (i = 0; i < 8; i = i + 1) begin
            registers[i] = 16'b0;  // Initializing to 0
        end
    end
    ControlUnit control(
        .instruction(reg_i),
        .run(run),
        .clk(clk),
        .reset(reset),
        .en_c(en_c),
        .en_s(en_s),
        .en_reg(en_reg),
        .done(done)
    );
    always @(posedge clk or posedge reset) begin
       if (reset) begin
            en_c = 0;
            en_s = 0;
            en_reg = 0;
       end else if(run) begin
            if(en_s) begin
                reg_s = registers[Rx];
                operand = registers[Ry]; // here was the error!!!!!!
                if(format == 1) begin
                    operand = {8'b0, instruction[12:5]};
                end
                //$display("instruction in design %h", instruction);
            end
            if(en_c) begin
                reg_c = result;
                // load/store handling part
                if(format == 3) begin
                    if(reg_i[2] == 0) begin
                        registers[Rx] = memory[registers[Ry]];
                    end else begin
                        memory[registers[Ry]] = registers[Rx];
                    end
                end
                cpp_result = ALU({16'b0, registers[Rx]}, {16'b0, operand}, {29'b0, sel});
                // $display("Rx = %h\n Ry = %h\n x = %h\n y = %h\n select = %h\n", Rx, Ry, registers[Rx], operand, sel);
                // $display("cpp_result %d and verilog result %d", cpp_result, result);
                // $display("the instruction is %h", instruction);
            end
            if (en_reg[Rx]) begin
                if(format != 3) begin
                    registers[Rx] = reg_c; 
                    if(cpp_result != {16'b0, reg_c}) begin //testing 
                        $display("Error!!!");
                        $display("cpp_result %d", cpp_result);
                        $display("verilog result %d", reg_c);
                        $display("instruction for cpp_result %b", instruction);
                    end
                end    
                //$display("instruction = %d", instruction);        
            end
       end
    end
    ALU alu(
        .clk(clk),
        .in_a(reg_s),
        .in_b(operand),
        .select(sel),
        .run(run),
        .alu_out(result)
    );
    assign reg_c_out = reg_c;
    assign Rx_val = Rx;
    assign Ry_val = Ry;
    assign x_val = registers[Rx];
    assign operand_val = operand;
    assign sel_val = sel;
    assign format_val = format;
    assign d_out = result;
endmodule

