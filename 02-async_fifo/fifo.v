// FIFO RAM block program to temporarily store data payloads and release data as and when the 'full' flag is pulled up. 

module fifo #(parameter PTR_WIDTH = 3, DEPTH = 10, DATA_WIDTH = 48) (
	input logic wclk, // The IMU's master clock must feed directly into the RAM block to ensure that data payloads are dumped into RAM wordlines in sync with the clock. Otherwise, this
			  // may potentially risk the write pointer to direct incoming data payloads during bit transition, resulting in erroneous writes. 
	input logic rclk, // Same principle applies to the read domain. The ESP-32's master clock is pulsed periodically @ 80MHz to the read port of the RAM block via the SCLK channel of the 				// SPI protocol, to ensure that outgoing data payloads are released in chronological order without any erratic releases whilst the write pointer is yet to settle. 
	input logic rd_en, // Read enable signal, to ensure the current read pointer value is addressed to the RAM block whilst this enable is high. 
	input logic wr_en, // Write enable signal, to ensure th current write pointer value is addressed to the RAM block whilst this enable is high. 
	input logic [PTR_WIDTH:0] wr_bin_ptr, // Binary write pointer, to address incoming payloads to the appropriate RAM wordline. 
	input logic [PTR_WIDTH:0] rd_bin_ptr, // Binary read pointer, to address outgoing payloads in chronological order from the RAM block during the burst sequence. 
	input logic [DATA_WIDTH-1:0] data_in, // 48-bit parallel input bus terminated at the RAM block write ports. 
	output logic [DATA_WIDTH-1:0] data_out, // 48-bit parallel output bus hooked up directly to the SPI interface feeding into the ESP-32. 
 	input logic full,
	input logic empty
	);
	
	// Declaring the FIFO. 
	logic [DATA_WIDTH-1:0] fifo [0:DEPTH-1];
	
	always_ff @(posedge wclk)
	begin 
		if (wr_en & !full)
		begin 
			// The command '$bitstoreal' converts the binary pointer value to a decimal number, to allow incoming data payloads to feed into RAM wordlines. 
			fifo [$bitstoreal(wr_bin_ptr)] <= data_in;
		end 
	end
	
	// Synchronous block for FIFO read logic. 
	always_ff @(posedge rclk)
	begin 
		if (rd_en & !empty)
		begin	
			data_out <= fifo [$bitstoreal(rd_bin_ptr)];
		end
	end
endmodule

	
