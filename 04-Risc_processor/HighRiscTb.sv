// Testbench to validate the functionality of the HighRiscSystem for various instruction architectures and tasks. Note that this testbench cannot scrutinise programs that communicate with physical ports e.g. switches, keys, LEDs. 
`timescale 1ns / 1ps // Fix the timescale. 

import InstructionSetPkg ::*;

module HighRiscTb();

	logic CLOCK_50; // Master clock source.
	logic [9:0] SW; // Input FPGA switches.
	logic [3:0] KEY; // The first index of 'KEY' will be used for the async reset.  
	logic tbClk; // Local testbench clock, for cadencing switch input randomisation. 
//	logic SampleClk; // Clock for cadencing SVA. 
	logic WriteAssertEnable; // Copy of the data memory block's write enable, for assertion purposes. 
	logic [15:0] DataAssertVal; // Copy of the data memory block's write value, for assertion purposes. 
	logic [15:0] AddrAssert; // Copy of the data memory block's target address, for assertion purposes. 
	logic [15:0] ClockCount; // Monitors the current master clock cycle, to assign randomised values to 'SW' appropriately.
	int SWRead1Thres; // Determine the timeframe during which the first SW read is valid (for assertion purposes)
	int SWRead2Thres; // Determine the timeframe during which the second SW read is valid (for assertion purposes).
	logic [DataWidth-1:0] SWRead1; // Declare a variable to capture the first value fixed by the switches. 
	logic [DataWidth-1:0] SWRead2; // Declare a variable to capture the second value fixed by the switches. 
	logic [DataWidth-1:0] OutVal; // SVA-generated output value. 
	// logic [9:0] LEDR; // Output FPGA LEDs. 
	/* 
	VGA LOGIC VARIABLES TO BE INITIALISED IN FUTURE TEST RUNS OF THE VGA.
	*/
	
	// Instantiate the top-level module for the processor. 
	HighRiscSystem uut(
		.CLOCK_50(CLOCK_50),
		.SW(SW),
		.KEY(KEY),
		.WriteAssertEnable(WriteAssertEnable),
		.DataAssertVal(DataAssertVal)
		// .AddrAssert(AddrAssert)
		//.LEDR(LEDR)
		);
		
	// Instantiate the SVA checker for the HighRiscSystem. 
	RiscChecker check_1(
		.SampleClk(CLOCK_50),
		.DataAssertVal(DataAssertVal),
		.WriteAssertEnable(WriteAssertEnable),
		.SWRead1(SWRead1),
		.SWRead2(SWRead2),
		.OutVal(OutVal)
		);
		
	// Initialise the clock source, with an arbitrary time period of 10ns. 
	always #5 CLOCK_50 = ~CLOCK_50;
	
	// Every period of Clock_50, increment the clock count by one.
	always #10 ClockCount = ClockCount + 1;
	
	// Initialise the testbench clock source, with an arbitrary time period of 4ns. 
	always #($urandom_range(1,3))
	begin
		tbClk = ~tbClk;
		SW = $urandom_range(0,1023);
	end
	
	always @(posedge CLOCK_50)
	begin
		if (uut.iProcesor.RfWriteEnable && uut.iProcesor.OpCode == LOAD && uut.iProcesor.RegA == 6'd3)
		begin
			SWRead1 <= SW;
		end
		if (uut.iProcesor.RfWriteEnable && uut.iProcesor.OpCode == LOAD && uut.iProcesor.RegA == 6'd4)
		begin
			SWRead2 <= SW;
		end
	end	
	
	// Fix the first switch threshold at 7, and the second switch threshold at 9. 
	assign SWRead1Thres = 7;
	assign SWRead2Thres = 9;
	

	
//	// Initialise the clock for the SVA RiscChecker. NOT NEEDED ANYMORE, SINCE THE MASTER CLOCK IS ASSIGNED DIRECTLY TO THE RISCCHECKER; WRITEASSERTENABLE GATES THE EXECUTION OF THE ASSERTION. 
//	task automatic pulseSample();
//		#1 SampleClk = 1;
//		#1 SampleClk = 0;
//	endtask
	
	// Initialise the testbench and control the simulation
	initial begin;
		CLOCK_50 = '0;
		ClockCount = '0;
		tbClk = '0;
		SW = '0;
		KEY = 4'b0;
		SWRead1 = '0;
		SWRead2 = '0;
		
		$monitor("Switch 1 : %0d | Switch 2: %0d | Switch Master : %0d | ClockCount = %0d | Current Operation = %s |Output Value: %0d | Output Value (SVA): %0d | WriteEnable: %0b | time  = %0t", SWRead1, SWRead2, SW, ClockCount, uut.iProcesor.OpCode, DataAssertVal, OutVal, WriteAssertEnable, $time);
		
		repeat(2) @(posedge CLOCK_50);
		
		KEY = 4'b1; // Pull down all 4 bits of 'KEY' to activate the CPU (active high reset triggered by 'KEY[0]').
		ClockCount = '0; // Reset the clock count. 
		
		
		// Initialise two separate threads to capture values for both switches for assertion. 
//		fork 
//			begin
//				// As long as the current clock counter is below the read threshold for the first switch value, this loop should iterate continuously.	
//				while(ClockCount < SWRead1Thres)
//				begin
//					// SW = $urandom_range(0,1023);
//					SWRead1 = SW;
//					@(posedge tbClk);
//				end
//			end
//			// Similarly, this sub-loop must iterate as long as the clock counter has not yet reached the threshold for reading 2nd value of the switch. 
//			begin
//				while(ClockCount < SWRead2Thres)
//				begin
//					// SW = $urandom_range(0,1023);
//					SWRead2 = SW;
//					@(posedge tbClk);
//				end
//			end
//		join
		wait(WriteAssertEnable); 
		repeat(2) @(posedge CLOCK_50);
		
		// Display the final value. 
		$display("Final value is equal to %d.", DataAssertVal);
		$finish;		
	end
endmodule
	