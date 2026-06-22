// Testbench to prototype the functionalities of the synchronous FIFO to be embedded within the ESP-32 data pipeline of a smart removable insole. 

// Configure the timescale
`timescale 1ns / 1ps

// Configure the testbench module description
module sync_fifo_tb();
	// Declare the required input and output simulation pins. 
	logic [47:0]  d_out;
	logic [47:0]  d_in;
	logic 	      rd_en;
	logic 	      wr_en;
	logic 	      clk;
	logic 	      reset_n;
	logic         empty;
	logic         full;
	logic [47:0]  d_data;
	logic 	      wr_ack;
	logic 	      rd_ack;

	// Instantiate the module and cross-reference input and output ports with simulation ports. 
	sync_fifo uut (
		.d_out(d_out),
		.d_in(d_in),
		.rd_en(rd_en),
		.wr_en(wr_en),
		.clk(clk),
		.reset_n(reset_n),
		.empty(empty),
		.full(full),
		.wr_ack(wr_ack),
		.rd_ack(rd_ack)
		);
	// Create a waveform file for simulation purposes, and dump gathered testbench data for visualisation and debugging.
	initial begin
		$dumpfile("sync_fifo.vcd");
      		$dumpvars(0, sync_fifo_tb);
	end	
	// The master clock must tick at a frequency of 80MHz, which is equivalent to 6.25ns for half a period. 
	always
		#6.25 clk = ~clk;
	// Initialise the signals and control the simulation. 
 	initial begin
		// Clear enable and input/output pins. 
		d_data <= 48'b0;
		d_in <= 48'b0;
		rd_en <= 1'b0;
		wr_en <= 1'b0;
		reset_n <= 1'b0;
		clk <= 1'b0;
		
		// After 25 ns, activate the FIFO by pulling the reset pin up 
		#25 reset_n <= 1'b1;

		@(posedge clk);  // Data will only commence firing to the FIFO once the FIFO has locked onto a positive clock edge, to ensuring flawless timing. 
		
		// Background Monitor: This will print a line to the console anytime a critical signal changes
    		$monitor("[%0t] full=%b | wr_en=%b wr_up=%0d din=0x%0h | rd_en=%b rd_up=%0d dout=0x%0h", 
        	$time, full, wr_en, uut.wr_up, d_in, rd_en, uut.rd_up, d_out);

		// Initialise two independent write and read threads that function concurrently using the 'fork ....  join' block. 
		fork 
		begin 
			int timeout_counter;
			
			while (!full) // Runs when there is sufficient capacity within the RAM block, and the FIFO hasn't hit its 100 payload capacity yet. 
			begin 
				#100; // Throttled frequency of 100Hz (scaled for the purposes of this simulation) for writes. 
				@(posedge clk) // Ensures that the FIFO is ready to receive data, instead of risking pushing a payload mid-clock cycle and triggering metastability issues. 

				
				wr_en <= 1'b1; // The write enable gets pulled high; 
				d_in <= {$random, $random}; // Since '$random' can only generate a max of 32-bits in one single invocation, two separate '$random' functions must be 
							    // concatenated to reach 48-bits to store the full extent of an incoming payload.
				
				@(posedge clk);
				wr_en <= 1'b0;  // Pull up the write enable for exactly one cycle, to prevent the write pointer from incrementing again during the write acknowledgment 						// check. This cuts the max payload capacity in half and duplicates data unnecessarily in the FIFO.   
				 // Reset the timeout counter back to zero
				 timeout_counter = 0;

				 // The program freezes until a valid write acknowledgement is transmitted to the ESP-32 CPU. The clock ensures that the write acknowledgement is pushed
				 // before the while loop restarts to begin the next cycle @ 100Hz. 
				while (!wr_ack)
			      	begin 
					@(posedge clk);
					timeout_counter = timeout_counter + 1;
					if (timeout_counter > 5)
					begin 
						$display("Fatal write acknowledgment timeout from the FIFO!!");
						$stop;
					end

				end
				
			
				// The write enable drops low to prevent any garbage data payloads from registering on the FIFO before the nex clock cycle @ 100Hz. 
				wr_en <= 1'b0;

				// Wait another clock cycle for any pointers and flags within the hardware module to settle before jumping headfirst into the next iteration of the 
				// while loop - may result in full flags slipping through the cracks and causing timeout failures. 
				@(posedge clk);
			end
			$display("\n[%0t] WRITE THREAD HALTED: FIFO 'full' flag is HIGH. Hardware successfully blocked further writes.\n", $time);
		end
		

		begin 
			int timeout_counter1;

			wait(full == 1'b1); // Instead of cadencing the burst sequence every 1Hz, wait until the full flag is pulled up before beginning this. This mimics ESP32 interru				            // pt logic by tying the full pin direcly to the read domain logic. Depends on whether the intention is to pump out 100 payload every second					    // or wait until a 100 payloads have been received before streaming this to the smartphone.  
			@(posedge clk);

			$display("1Hz timer fired! Initiating burst read.");

			// Drain the FIFO until the hardware capacity until the hardware capacity explicitly states emptiness 
			while (!empty)
			begin 
				rd_en <= 1'b1;
				@(posedge clk);
				d_data <= d_out;
				
				// Reset the read timeout counter back to zero
				timeout_counter1 = 0;

				// The program freezes until a valid read acknowledgement is transmitted to the ESP-32. The clock ensured that the read acknowledgement is pushed before the 				      // while loop restarts to begin the next cycle @ 80Mhz.
				while (!rd_ack)
				begin 
					@(posedge clk);
					timeout_counter1 = timeout_counter1 + 1;
					if  (timeout_counter1 > 5)
					begin 
						$display("Fatal read acknowledgement timeout from the FIFO!!");
						$stop;
					end
				end
				
			end
			

			// Once the burst sequence is over, pull the read enable back down to 0.
			rd_en <= 1'b0;
			$display("Burst sequence has finished!!");
		end
		join

		#500 $finish; // Wait 500ns before terminating the testbench. 

	end
				
endmodule
		



 
	
		
