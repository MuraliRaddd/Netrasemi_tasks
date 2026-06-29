// 2-stage register synchroniser, for eliminating the risk of metastability during Clock Domain Crossing (CDC). 

module synchroniser #(parameter BUS_WIDTH = 3) (
	input logic [BUS_WIDTH:0] p_in, // Incoming pointer value cross-transmitted from either the read or write domain. 
	input logic clk,  // Input clock signal, dictating the cadence at which register values are updated (either write or read-clock initiated).

	output logic [BUS_WIDTH:0] p_out // Pointer value output method. Serves as the final register in the synchroniser. 
	);
	
	// Invoke an additional 5-bit register to serve as the 1st, intermediary register stage. External ports are not required for this register, hence it is declared outside the module 
	// definition. 
	logic [BUS_WIDTH:0] r1;

	always_ff@(posedge clk)
	begin 
		if (!rst)
		begin 
			r1 <= 0; // If the active-low reset is pulled low, then reset both the first register stage (r1) and the second register stage (p_out).
			p_out <= 0;
		end
		else
		begin
			r1 <= p_in; // Non-block assignments ensures that both the first register stage (r1) and the second register stage (p_out) are updated simultaneously, akin to two 
				    // registers connected in serial. Hence, at each rising clock edge, r1 will update once with the incoming pointer value, and p_out will update once with 
				    // the current value of r1. This is unlike asynchronous logic, whereby commands/actions occur sequentially. 
			p_out <= r1;
		end
	end
endmodule		 
	
		
