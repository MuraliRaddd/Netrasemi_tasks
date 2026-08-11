// Module-based representation of the pattern recognition FSM, adhering the Moore architectural principles. 

// Define the inputs and outputs
module FSM(
	input logic clk, // Clock, modelled to tick at a frequency of 100000Hz.  
	input logic s, // Serial input bus, feeding in the bits to the combinational logic. 
	input logic rst, // Active low reset pin. 
	
	output logic z // Pattern output flag
	);
	
	logic q2, q1, q0; // Define the current state bits. 
	logic q2n, q1n, q0n; // Define the next state bits (serves as a representatation of the 3 D-type flip flops.  
	
	// Denote the combinational logic to transition accordingly to the next state. 
	always_comb
	begin 
		q2n = (q2 & ~q0 & (~(s ^ q1))) | (q0 & s & (q2 ^ q1));
		q1n = (q1 & ~q0 & (q2 ^ s)) | (q0 & (~(q2 ^ s)));
		q0n = (~q2 & ~q0 & s) | (q2 & ~q1 & ~q0) | (~q2 & ~q1 & s);
		z = q2 & q1;
	end
	
	// Define the synchronous logic to synchronise the positive edge of the clock with flip flop state updates. 
	always_ff@(posedge clk)
	begin 
		if (!rst)
		begin
			q2 <= 0;
			q1 <= 0;
			q0 <= 0;
		end
		else 
		begin 
			q2 <= q2n;
			q1 <= q1n;
			q0 <= q0n;
		end
	end
endmodule 

