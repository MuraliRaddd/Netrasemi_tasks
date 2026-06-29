// Top-level module for the asynchronous FIFO

// Import all necessary lower level modules into the top-level module
`include "synchroniser.v"
`include "write_domain.v"
`include "read_domain.v"
`include "fifo.v"

// Define required input and output ports to be hooked to externally facing components from the FIFO. 
module top_fifo #(parameter PTR_WIDTH = 3, DEPTH = 10, DATA_WIDTH = 48) (
	input logic wclk, // Write clock 
	input logic rclk, // Read clock. 
	input logic [DATA_WIDTH-1:0] data_in, // 48-bit input data bus. 
	input logic wr_en, // Write enable, cadenced naturally in sync with the IMU's master clock. 
	input logic rd_en, // Read enable, cadenced artifically at 100Hz by the ESP-32's master clock via the SPI protocol. 
	input logic w_rst, // Write reset (active-low)
	input logic r_rst, // Read reset (active-low)
	
	output logic [DATA_WIDTH-1:0] data_out, // 48-bit output data bus. 
	output logic full, // RAM block 'full' flag. 
	output logic empty // RAM block 'empty' flag. 
	);
	
	// Read and write pointers
	logic [PTR_WIDTH:0] wr_bin_ptr;
	logic [PTR_WIDTH:0] rd_bin_ptr;
	logic [PTR_WIDTH:0] wr_gray_sync;
	logic [PTR_WIDTH:0] rd_gray_sync;
	logic [PTR_WIDTH:0] wr_gray_ptr;
	logic [PTR_WIDTH:0] rd_gray_ptr;

	// Instantiate all of the lower-level modules (chronologically)
	
	// Data is injected into the write domain
	write_domain #(PTR_WIDTH) write_dom (
		.wclk(wclk),
		.w_rst(w_rst),
		.wr_en(wr_en),
		.r_gray_ptr(rd_gray_sync),
		.w_bin_ptr(wr_bin_ptr),
		.w_gray_ptr(wr_gray_ptr),
		.full(full)
		);

	// Read-side synchronise ensure that the incoming pointer value has stabilised appropriately  and metastability is eliminated altogether, as well as the pointer value being in 
	// perfect lockstep with the clock driving the read domain.
	synchroniser #(PTR_WIDTH) sync (
		.p_in(wr_gray_ptr),
		.clk(rclk),
		.p_out(wr_gray_sync)
		);
	
  	// Data is released from the FIFO into the SPI protocol via the read domain. 
	read_domain #(PTR_WIDTH) read_dom (
		.rclk(rclk),
		.r_rst(r_rst),
		.rd_en(rd_en),
		.w_gray_ptr(wr_gray_sync),
		.r_bin_ptr(rd_bin_ptr),
		.r_gray_ptr(rd_gray_ptr),
		.empty(empty)
		);

        // Write-side synchronise ensure that the incoming pointer value has stabilised appropriately  and metastability is eliminated altogether, as well as the pointer value being in     
        // perfect lockstep with the clock driving the write domain.
        synchroniser #(PTR_WIDTH) sync (
                .p_in(rd_gray_ptr),
                .clk(wclk),
                .p_out(rd_gray_sync)
                );

	
	
	// Incoming data payloads are written into the FIFO and outgoing data payloads are released from the FIFO during the burst sequence. 
	fifo #(PTR_WIDTH) fifo (
		.wclk(wclk),
		.rclk(rclk),
		.rd_en(rd_en),
		.wr_en(wr_en),
		.wr_bin_ptr(wr_bin_ptr),
		.rd_bin_ptr(rd_bin_ptr),
		.data_in(data_in),
		.data_out(data_out),
		.full(full),
		.empty(empty)
		);
endmodule

