// Testbench to virtually prototype and validate a pattern recognition FSM of the following sequence: 101101. 

// Configure the timescale and max waveform resolution. 
`timescale 1ns / 1ps

module FSM_tb ();
	
	logic rst;
	logic clk;
	logic s;
	logic z;

	// Instantiate the module and cross-reference input and output ports with simulation ports
	FSM uut(
		.rst(rst),
		.clk(clk),
		.s(s),
		.z(z)
		);
	// Generate a waveform file for simulation purposes, and batch-load it with acquired testbench data for visualisation and debugging. 
	initial begin
		$dumpfile("FSM_pattrecon.vcd");
		$dumpvars(0, FSM_tb);
	end
	
	// Define a master clock rate of 100000Hz
	
	always #5000 clk = ~clk;
	
	// Initialise the testbench and control the simulation
	initial begin
		// Clear the reset, clock and s pins.
		clk <= 1'b0;
		rst <= 1'b0;
		s <= 1'b0;
		
		// After two clock cycles, pull the active low reset high to activate the flip flops. 
		repeat(2) @(posedge clk);
		rst <= 1'b1;
		
		// Background Monitor: This will print the counter value denoting the current state as well as whether the 'z' flag is high or not. 
                $monitor("[%0t] z=%b | s=%b q2=%b q1=%b q0=%b",
                $time, z, s, uut.q2, uut.q1, uut.q0);
		
		// Pattern recognition sequence testing and pattern failure mode state transition testing. 
		
		// S0 >> S1 (Input a 1; PATTERN-COMPLIANT)
		s <=  1'b1;
		@(posedge clk);
		#1; // Delay, to ensure that q2, q1 and q0 settle before next input. 
		
		// S1 >> S1 (Input 1; PATTERN NON-COMPLIANT)
		s <= 1'b1;
		@(posedge clk);
		#1;
		
		// S1 >> S2 (Input 0; PATTERN-COMPLIANT)
		s <= 1'b0;
                @(posedge clk);
                #1;
		
		// S2 >> S0 (Input 0; PATTERN NON-COMPLIANT)
		s <= 1'b0;
                @(posedge clk);
                #1;

		// S0 >> S1 (Input a 1; PATTERN-COMPLIANT)
                s <=  1'b1;
                @(posedge clk);
                #1;
		
		// S1 >> S2 (Input 0; PATTERN-COMPLIANT)
                s <= 1'b0;
                @(posedge clk);
                #1;
		
		// S2 >> S3 (Input 1; PATTERN-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;

		// S3 >> S2 (Input 0; PATTERN NON-COMPLIANT)
                s <= 1'b0;
                @(posedge clk);
                #1;

		// S2 >> S3 (Input 1; PATTERN-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;

		// S3 >> S4 (Input 1; PATTERN-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;

		// S4 >> S1 (Input 1; PATTERN NON-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;
		
		// S1 >> S2 (Input 0; PATTERN-COMPLIANT)
                s <= 1'b0;
                @(posedge clk);
                #1;
		
		// S2 >> S3 (Input 1; PATTERN-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;

		// S3 >> S4 (Input 1; PATTERN-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;
		
		// S4 >> S5 (Input 0; PATTERN-COMPLIANT)
                s <= 1'b0;
                @(posedge clk);
                #1;

		// S5 >> S0 (Input 0; PATTERN NON-COMPLIANT)
                s <= 1'b0;
                @(posedge clk);
                #1;

		// S0 >> S1 (Input 1; PATTERN-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;
		
		// S1 >> S2 (Input 0; PATTERN-COMPLIANT)
                s <= 1'b0;
                @(posedge clk);
                #1;

                // S2 >> S3 (Input 1; PATTERN-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;

                // S3 >> S4 (Input 1; PATTERN-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;

                // S4 >> S5 (Input 0; PATTERN-COMPLIANT)
                s <= 1'b0;
                @(posedge clk);
                #1;
		
		// S5 >> S6 (Input 1; PATTERN-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;
		
		// S6 >> S4 (Input 1; PATTERN NON-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;

		// S4 >> S5 (Input 0; PATTERN-COMPLIANT)
                s <= 1'b0;
                @(posedge clk);
                #1;

                // S5 >> S6 (Input 1; PATTERN-COMPLIANT)
                s <= 1'b1;
                @(posedge clk);
                #1;

		// S6 >> S2 (Input 0; PATTERN NON-COMPLIANT)
                s <= 1'b0;
                @(posedge clk);
                #1;

		$finish;
	end
endmodule




		









 


		
		 
		 
	
