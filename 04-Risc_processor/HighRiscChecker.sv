// SVA for the complete HighRisc Processor. 
// MR 09/08/2026
import InstructionSetPkg ::*;
import assertionmath ::*;

module RiscChecker(
	input logic SampleClk, // Testbench-driven clock source, to execute SVA/s
	input logic WriteAssertEnable, // Gates the execution of assertions. 
	input logic signed [DataWidth-1:0] DataAssertVal, // HighRisc output 16-bit value.  
	input logic [DataWidth-1:0] SWRead1, // Physical switch value 1. 
	input logic [DataWidth-1:0] SWRead2, // Physical switch value 2. 
	output logic [DataWidth-1:0] OutVal // Calc_adc-generated output value. 
	);
	
	expFlags_t DataVal; // Instantiation of the expected ALU outputs structure. 

	// Invoke a combinational block to execute the parallel SVA function. 
	always_comb
	begin
		DataVal = calc_adc(SWRead1, SWRead2, 1'b0);
		OutVal = DataVal.out;
	end

	// Declare the property for comparison with the actual output value. 
	property risc_val;
		@(posedge SampleClk)
		(WriteAssertEnable) |-> (DataAssertVal === DataVal.out); // NEW FIX -- Review the data memory block's write enable signal to capture any incoming stores. This enables the assertion to take place, and is applicable to any future 'STORE' commands within a common instruction array. 
	endproperty
	
	assert_risc: assert property (risc_val)
		else $error("Output RISC value mismatch: received %0d at %0t", DataAssertVal, $time);
	
	cover_risc: cover property (@(posedge SampleClk) WriteAssertEnable);
endmodule
	
	