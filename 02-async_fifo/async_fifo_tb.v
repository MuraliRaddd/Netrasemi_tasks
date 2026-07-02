// Testbench to prototype the functionatlies of the asynchronous FIFO acting as the interface between the IMU and the ESP-32 of the smart removable insole. 

// Configure the timescale
`timescale 1ns / 1ps

// Configure the testbench
module async_fifo_tb();
	// Declare the required input and output simulation pins
	logic [47:0] data_out;
	logic [47:0] data_in;
	logic 	     rd_en;
	logic        wr_en;
	logic 	     rclk;
	logic  	     wclk;
	logic        w_rst;
	logic        r_rst;
	logic 	     full;
	logic        empty;
	// logic 	     rd_ack;
	
	// Instantiate the module and cross-reference input and output ports with simulation ports. 
	top_fifo uut(
		.data_out(data_out),
		.data_in(data_in),
		.rd_en(rd_en),
		.wr_en(wr_en),
		.rclk(rclk),
		.wclk(wclk),
		.w_rst(w_rst),
		.r_rst(r_rst),
		.full(full),
		.empty(empty)
		// .rd_ack(rd_ack)
		);
	
	// Software queue, to house skew and jitter-free copies of incoming payloads, subject to comparison with the read output for fault-finding and spotting potential bit-drops. 	
	logic [47:0] wdata, wdata_q[$]; // '$' indicates that the declared variable is a dynamic SystemVerilog Queue.
	// Generate a waveform file for simulation purposes, and load it with acquired testbench data for visualisation and debugging. 
	initial begin 
		$dumpfile("async_fifo.vcd");
		$dumpvars(0, async_fifo_tb);
	end
	
	// Define a master clock write frequency of 1000Hz, i.e. 500000ns for half a period. 
	always #500000 wclk = ~wclk;

	// Define a read clock write frequency of 80MHz, i.e. 6.25ns for half a period. 
	always #6.25 rclk = ~rclk;
	
	// Initialise the write domain-specific signals and control the simulation. 
	initial begin 
		// Clear enable and input/output pins. 
		data_in <= 48'b0;
		wr_en <= 1'b0;
		w_rst <= 1'b0;
		wclk <= 1'b0;
	
		
		// Wait until 10 clock cycles @ 80MHz have passed before pulling up the reset pin to activate the write domain influx. 
		repeat(2) @(posedge wclk);
		w_rst <= 1'b1;
		
		@(posedge wclk);  // Data will commence firing to the FIFO once the FIFO has locked onto a valid positive clock edge from the IMU's master clock
		
		// Background Monitor: This will print a line to the console anytime a critical signal in the write domain changes
                $monitor("[%0t] full=%b | wr_en=%b wr_bin_ptr=%b wr_gray_ptr=%g rd_gray_sync=%g din=0x%0h",
                $time, full, wr_en, uut.wr_bin_ptr, uut.wr_gray_ptr, uut.rd_gray_sync, data_in);
		
			
		while (!full)
		begin
			
			wr_en <= 1'b1; // The write enable gets pulled up.
			data_in = {$random, $random}; // Since '$random' can only generate a maximum of 32-bits in one single invocation, two separate '$random'functions must be
                                                       // concetenated to reach 48-bits to store a complete snapshot of an incoming payload. 
			wdata_q.push_back(data_in); // Write a carbon copy of the captured data payload into the dynamic software queue for future comparison purposes. 
			
			@(posedge wclk);  // The simulation awaits the next positive clock edge to load a new payload into the hardware, given the write enable is already high.  
			
									          
			#1; // Buffer, to ensure module pointer values and relevant flag values have settled before iterating through the while loop once again. 
		end
		
	end
	
	// Initialise the read domain-specific signals and control the simulation
	initial begin
		// data_out <= 48'b0;
		rd_en <= 1'b0;
		r_rst <= 1'b0;
		rclk <= 1'b0;
		
		// Wait until 10 clock cycles @ 80MHz have passed before pulling up the reset pin to energise the read domain. 
		repeat(10) @(posedge rclk);
		r_rst <= 1'b1;

		 
		wait(full == 1'b1); // Await a high 'full' flag before commencing the burst sequence. Subject to modification depending on design intent - should 10 payloads be recorded 
				    // before initiating the burst sequence, or should max 10 payloads be pumped out @ 100 Hz regardless of any payload drops or delays?  
		
		@(posedge rclk);  // The FIFO locks onto the ESP-32's master clock via the SPI protocol for subsequent burst sequences and batch-extraction of data paylaods via read domain.

		$display("100Hz timer fired! Initiating burst read.");
		               

		// Background Monitor: This will print a line to the console anytime a critical signal in the read domain changes
                $monitor("[%0t] empty=%b | rd_en=%b rd_bin_ptr=%0d rd_gray_ptr=%0d wr_gray_sync=%0d dout=0x%0h",
                $time, empty, rd_en, uut.rd_bin_ptr, uut.rd_gray_ptr, uut.wr_gray_sync, data_out);


		// Drain the FIFO until the hardware capacity explictly states emptiness. 
		while (!empty)
		begin
			rd_en <= 1'b1;
			@(posedge rclk);
			
			// Reset the read timeout counter back to zero. 
			// timeout_counter = 0;
			
			// The program freezes until a valid read acknowledgement is transmitted to the ESP-32. The read acknowledgement is cadenced via the clock to ensure that 5 clock cycl			      // es are recorded before a fatal timeout error is displayed. 
			/* while (!rd_ack)
			begin
				@(posedge rclk);
				timeout_counter = timeout_counter + 1;
				if (timeout_counter > 5)
				begin 
					$display("Fatal read acknowledgement timeout from the FIFO!!");
					$stop;
				end
			end */
			
		       	#1; 

			wdata = wdata_q.pop_front(); // Assign the queued data to 'wdata'
			if(data_out !== wdata)
			begin
				$error("Time = %0t: Comparison Failed: expected wr_data = %h, rd_data = %h", $time, wdata, data_out);
			end else
			begin
				$display("Time = %0t: Comparison Passed: wr_data = %h and rd_data = %h",$time, wdata, data_out);
			end
			
		end
		
		// Once the burst sequence has finished, pull the read enable back down to zero, awaiting a subsequent full flag from the write domain. 
		$display("Burst sequence has finished!!");
		
		rd_en <= 1'b0;

		#500 $finish;
	
	end
endmodule		
