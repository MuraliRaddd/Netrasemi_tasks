// Asynchronous FIFO write domain logic

module write_domain #(parameter PTR_WIDTH = 3) (
	input logic wclk,  // Write Domain Clock
	input logic w_rst, // Active low write pointer reset. 
	input logic wr_en, // Write enable signal throttled at a rate of 1000Hz
	input logic [PTR_WIDTH:0] r_gray_ptr, // Synchronised gray read pointer transmitted via CDC. 
	
	output logic [PTR_WIDTH:0] w_bin_ptr, // Write pointer in binary format, to direct incoming payloads into specific RAM wordlines. 
	output logic [PTR_WIDTH:0] w_gray_ptr, // Write pointer in gray format, to be persisted to the opposite read domain via CDC
	output logic 		   full // Active-high full flag when the FIFO reaches a capacity of 10. 
	
	);
	
	logic [PTR_WIDTH:0] w_bin_next;	// Intermediary array of flip flops to capture the incremented pointer value before transmission into the FIFO. 
	logic [PTR_WIDTH:0] w_gray_next; // Intermediary array of flip flops to capture the gray-converted write pointer value before CDC transmission. 
	logic [PTR_WIDTH:0] r_bin_next; // Intermediary array of flip flops to captire the binary-converted read pointer value to compute the depth.
       	logic [PTR_WIDTH:0] r_bin_calc; // Binary-gray conversion array. 	
	
	// Compute the binary-gray conversion. Shift the binary write pointer to the right by one, followed by an XOR comparison with the original binary write pointer. 
	assign w_gray_next = w_bin_next ^ (w_bin_next >> 1);
	
	// Equate the next write pointer binary value with an incremented version of the current pointer value. 
	assign w_bin_next = w_bin_ptr + 1;
	
	always_comb
	begin
		for (int i = PTR_WIDTH; i > -1; i--)
		begin
			// Assign the MSB of the binary version of the read pointer to the MSB of the gray version (fundamental rule of gray-binary conversion)

			if (i == PTR_WIDTH)
			begin 
				r_bin_next [i] = r_gray_ptr [i];
			end
			else 
			begin 
				 r_bin_next [i] = r_bin_next [i + 1] ^  r_gray_ptr [i];
			end

		end
	end

	always_ff @(posedge wclk or negedge w_rst)
        begin 
		// If the active low write reset is active, then both the write pointers native to the write domain should be refreshed. 
		if (!w_rst)
		begin
			w_bin_ptr <= 0;
			w_gray_ptr <= 0;
		end 
		else 
		begin
			// If the write enable AND gate conditions are satisfied, update both local write pointers based on the formulas states above. 
			if (wr_en & !full)
			begin
				w_bin_ptr <= w_bin_next;
				w_gray_ptr <= w_gray_next;
			end		
		end

	end

	// Full flag logic 
	always_ff @(posedge wclk or negedge w_rst)
	begin 
		if (!w_rst)
		begin 
			full <= 0;
		end
		else
		begin 
			if (w_bin_next - r_bin_next == 10)
			begin 
				full <= 1;
			end
		end
	end
endmodule



