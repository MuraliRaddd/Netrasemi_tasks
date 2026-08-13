// Register File to be implemented within a LowRISC microprocessor. 
// MR, 2026

module register_file #(parameter int REG_WIDTH = 16, parameter int REGS = 64, parameter int ADDR_WIDTH = $clog2(REGS))(
	input logic Clock, // Write operations must be synchronous with the input clock. 
	input logic [ADDR_WIDTH-1:0] AddressA, // 6-bit input signal indicating the intended register address to point an incoming payload towards, and to release an outgoing payload. 
	input logic [REG_WIDTH-1:0] WriteData, // Incoming data payload to be written to the register address indicated by AddressA. A payload is pushed every clock cycle, given that the WriteEnable signal is high. 
	input logic WriteEnable, // Active high input triggers a subsequent payload to be written into the register file. 
	input logic [ADDR_WIDTH-1:0] AddressB, // Dedicated for purely read commands. Data is pumped out of the register address outlined by AddressB. 
	// input logic Reset, // Active-high reset.

	// READENABLE IS OBSOLETE!!!! FOR OPERATIONS THAT DO NOT REQUIRE READS, THE READ OUTPUTS WILL NOT BE ACCOUNTED FOR, SINCE THESE CHANNEL FUNDAMENTALLY DO NOT EXIST!!!
	// input logic ReadEnable, // Dedicated for the dual read-write port (AddressA). Controls when data can be accessed from a register tied to a specific address. 
	
	output logic [REG_WIDTH-1:0] ReadDataA, // 16-bit output signal that asynchronously accesses the value contained within the register tied to AddressA.
	output logic [REG_WIDTH-1:0] ReadDataB // 16-bit output signal that asynchronously accesses the value contained within the register tied to AddressB. 
	);
	
	// Define the register file array.
	logic [REG_WIDTH-1:0] registers [0:REGS-1];
	
	// Next write logic declaration.
	logic [REG_WIDTH-1:0] nextWriteA;

		
	// Since reads occur asynchronously, read statements must be present external to the synchronous block
	assign ReadDataA = registers[AddressA];
	assign ReadDataB = registers[AddressB];
	
	// Invoke a synchronous block to update the register file every clock and accomodate for async resets. 
	always_ff@(posedge Clock)
	begin 
//		if(Reset)
//		begin
//			for (int i = 0; i < REGS; i++)
//			begin
//				registers[i] <= 16'b0;
//			end
//		end
			// registers [REGS-1:0] <= 16'b0;
			// ReadDataA <= 16'b0;
			// ReadDataB <= 16'b0;
//		else
		registers[AddressA] <= nextWriteA;
	end
	
	// Combinational block to verify that the write enable signal is high before pumping in a payload at the next positive clock edge.  
	always_comb
	begin
		if(WriteEnable) // && AddressA != 0) is not required, since R0 must be cleared manually anyways (floating state otherwise). 
		begin
			nextWriteA = WriteData; // If the write enable signal is high, then push a payload into the register file at the next clock edge. 
		end
		else
		begin 
			nextWriteA = registers[AddressA]; // If the write enable signal is low, then recycle the existing payload indexed at the inputted address to prevent any unprecedented overwrites.  
		end
	end
endmodule
	