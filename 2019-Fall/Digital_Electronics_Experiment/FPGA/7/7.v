module 7(A,Y);
	input [2:0] A;
	wire [2:0] A;
	output [6:0] Y;
	reg [6:0] Y;
	always@(*)
	begin
	//Y=7'b1111111
		case(A)
			3'b000 : Y= 7'b1111110;
			3'b001 : Y= 7'b0110000;
			3'b010 : Y= 7'b1101101;
			3'b011 : Y= 7'b1111001;
			3'b100 : Y= 7'b0110011;
			3'b101 : Y= 7'b1011011;
			3'b110 : Y= 7'b1011111;
			3'b111 : Y= 7'b1110000;
		endcase
	end
endmodule