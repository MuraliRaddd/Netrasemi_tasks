// HighRiscSystem
// C T Clarke 
// November 2015
//
// The HighRisc system module connects a 
// HighRisc processor to memory and peripherals
// via separate instruction and data busses.
// The connections are (VALUES IN HEX):
// Module              Address     Size  Bus
// Program Memory            0     4000   I
// Data Memory               0     4000   D
// VGA display buffer     4000     4000   D
// Switches SW0 to 9      C000        1   D
// LEDs     LED0 to 9     C200        1   D
// 
import InstructionSetPkg::*;

module HighRiscSystem
(
   input                CLOCK_50,
   input     	 [ 3:0]  KEY,
	input        [ 9:0]	SW,
	output logic [ 9:0]	LEDR,
	output logic 			VGA_CLK,
	output logic 			VGA_BLANK_N,
	output logic 			VGA_SYNC_N,
	output logic 			VGA_HS,
	output logic 			VGA_VS,
	output logic [ 7:0] 	VGA_R,
	output logic [ 7:0] 	VGA_G,
	output logic [ 7:0] 	VGA_B,
	output logic 			WriteAssertEnable,
	output logic [DataWidth-1:0] DataAssertVal
	// output logic [AddressWidth-1:0] AddrAssert
);

	logic [15:0] LEDs;
	logic Reset;
	logic Clock;
	logic [AddressWidth-1:0] Addr;
	logic [DataWidth-1:0] SlaveReadData3;
	 
	assign Clock   = CLOCK_50;
	assign VGA_CLK = ~CLOCK_50;
	assign Reset   = ~KEY[0];
	assign LEDR    = LEDs[9:0];


   	Bus #(2,2) Ibus();
	Bus #(2,2) Dbus();
	
	assign WriteAssertEnable = Dbus.Master.WriteEnable; // Assign the data memory block's write enable signal to the output assertion enable, to pinpoint when the final value is stored in the data memory. 
	

	// Assign the 'ReadData' channel to a MUX-controlled peripheral
	// selector. 
	 
	// Only once the write enable rises high should the output data and address assertion be populated. 
	always_comb
	begin
		if(WriteAssertEnable)
		begin
			DataAssertVal = Dbus.Master.WriteData;
			// AddrAssert = iDataMemory.TheBus.SlaveAddress;
		end
		else
		begin
			DataAssertVal = '0;
		end
	end

	HighRiscProcessor iProcesor (.*);

	ProgramMemoryInferred iProgramMemory 
	(
		.Clock,
		.TheBus(Ibus.Slave0)
	);
	
	DataMemoryInferred iDataMemory 
	(
		.Clock,
		.TheBus(Dbus.Slave0)
	);

	BusInPort iI
	(
		.Clock,
		.TheBus(Dbus.Port0),
		.BusPort({6'd0,SW})
	);
	
	BusOutPort iO
	(
		.Clock,
		.TheBus(Dbus.Port1),
		.BusPort(LEDs)
	);


	VgaSystem iVga
	(
		.CLOCK_50,
		.Reset,
		.VGA_BLANK_N,
		.VGA_SYNC_N,
		.VGA_HS,
		.VGA_VS,
		.VGA_R,
		.VGA_G,
		.VGA_B,
		
		.TheBus(Dbus.Slave1)		
	);

	// Instantiate the instruction-side Mux, feeding the individual slave
	// reads as inputs and outputting the corresponding ReadData value to
	// the master, given the input address. 
	Mux IMux(
		.Addr(Ibus.Master.Address),
		.SlaveData1(Ibus.Slave0.SlaveReadData0),
		.ReadData(Ibus.ReadData)
		);
	// Ports must be Muxed, to ascertain which channel should be linked up
	// to the intermediary 'SlaveReadData3'
	Portmux Pmux(
		.Addr(Dbus.Address),
		.PortData1(Dbus.Port0.PortReadData0),
		.PortData2(Dbus.Port1.PortReadData1),
		.ReadData(SlaveReadData3)
		);
	// The Port Mux output, alongside all two block read outputs, are
	// Muxed to ascertain which channel should be linked directly back to
	// the master CPU. 
	Mux DMux(
		.Addr(Dbus.Address),
		.SlaveData1(Dbus.Slave0.SlaveReadData0),
		.SlaveData2(Dbus.Slave1.SlaveReadData1),
		.SlaveData3(SlaveReadData3),
		.ReadData(Dbus.ReadData)
		);

endmodule



// The Bus interface is used to connect the processor to 
// memories and memory mapped peripherals.
interface Bus
#( 
   // The blocks parameter can be 0 to 3. It indicates the 
	// number of 16k word block slave modports that can be 
	// used.
	parameter Blocks = 0,
	
	// The ports parameter can be 0 to 32. It indicates the 
	// number of 512 word block slave modports that can be 
	// used.
	parameter Ports = 0
)
();
	// Basic bus connections
	logic [AddressWidth-1:0] Address;
	logic [DataWidth-1:0]    ReadData;
	logic [DataWidth-1:0]    WriteData;
	logic                    WriteEnable;

	// 16k word block connections
	logic [13:0]             SlaveAddress;
	logic [DataWidth-1:0] 	 SlaveReadData [4];
	logic [DataWidth-1:0] SlaveReadData0, SlaveReadData1;
	logic SlaveWriteEnable0, SlaveWriteEnable1;
	logic [3:0]       SlaveWriteEnable;
	logic [1:0]              BlockInUse;
	
	// 512 word block connections
	logic [8:0]              PortAddress;
	logic [DataWidth-1:0] 	 PortReadData [32];
	logic [DataWidth-1:0] 	 PortReadData0, PortReadData1;
	logic [32:0]        PortWriteEnable;
	logic PortWriteEnable0, PortWriteEnable1;	
	logic [4:0]              PortInUse;

	// Assign the per-index scalar 'SlaveReadData0 and SlaveReadData1' signals to their
	// indexed counterparts, extracted from the 'SlaveReadData' output
	// port. 
	// assign SlaveReadData[0] = SlaveReadData0;
       	// assign SlaveReadData[1] = SlaveReadData1;

	// Assign the incoming indexed 'SlaveWriteEnable' vector to its
	// isolated 'SlaveWriteEnable0 or SlaveWriteEnable1' counterpart. 	
	
	assign SlaveWriteEnable0 = SlaveWriteEnable[0];
	assign SlaveWriteEnable1 = SlaveWriteEnable[1];

	// Apply an identical principle to the assignment of slice indexing of
	// ports. 
	// assign PortReadData[0] = PortReadData0;
	// assign PortReadData[1] = PortReadData1;
	assign PortWriteEnable0 = PortWriteEnable[0];
	assign PortWriteEnable1 = PortWriteEnable[1];

	// The master controls writes and the address
   modport Master 
	(
		output Address,
		input  ReadData,
		output WriteData,
		output WriteEnable
	);
	// Establish the internal connections for the Rom Block, i.e. the Instruction domain. 
	modport Slave0(
		input SlaveAddress,
		output SlaveReadData0,
		input WriteData,
		input .WriteEnable(SlaveWriteEnable0)
		);
	// Establish the internal connections for the data memory block i.e. the Data domain. 
	modport Slave1(
		input SlaveAddress,
		output SlaveReadData1,
		input WriteData,
		input .WriteEnable(SlaveWriteEnable1)
		);
	
	
	// Up to 3 16k word block modports are created
	// unused blocks have zeros inserted as thier return values
	generate
	genvar i;
//	   // Create the correct number of 16k word blocks
//		for (i=0;i<Blocks;i++)
//		begin: Block16k
//			modport Slave
//			(
//				input  SlaveAddress,
//				output .ReadData(SlaveReadData[i]),
//				input  WriteData,
//				input  .WriteEnable(SlaveWriteEnable[i])
//			);
//		end
		
		// Handle unused blocks gracefully
		for (i=Blocks;i<3;i++) 
		begin: BlockDefaults
			assign SlaveReadData[i] = '0;
		end
	endgenerate
	
	always_comb
	begin
	   // Extract sectiosn fo the address
		BlockInUse = Address[AddressWidth-1:AddressWidth-2];
		SlaveAddress = Address[AddressWidth-3:0];
		
		// Pass back data to the master based on the address selected.
		// ReadData = SlaveReadData[BlockInUse];
		
		// Create a single write enable signal based on the address
		SlaveWriteEnable = '0;
		SlaveWriteEnable[BlockInUse] = WriteEnable;
	end
	
	modport Port0(
	input  PortAddress,
	output PortReadData0,
	input  WriteData,
	input  .WriteEnable(PortWriteEnable0)
	);

	modport Port1(
	input  PortAddress,
	output PortReadData1,
	input  WriteData,
	input  .WriteEnable(PortWriteEnable1)
	);
	
	generate
	genvar j;
	   // Create the correct number of 512 word blocks
//		for (j=0;j<Ports;j++)
//		begin: Block512
//			modport Port
//			(
//				input  PortAddress,
//				output .ReadData(PortReadData[j]),
//				input  WriteData,
//				input  .WriteEnable(PortWriteEnable[j])
//			);
//		end

		// Handle unused blocks gracefully
		for (i=Ports;i<32;i++) 
		begin: PortDefaults
			assign PortReadData[i] = '0;
		end
	endgenerate
	
	always_comb
	begin
	   // Extract sections of the address
		PortInUse = Address[AddressWidth-3:AddressWidth-7];
	   PortAddress = Address[AddressWidth-8:0];
		
		// Create a single write enable signal based on the address
		PortWriteEnable = '0;
		PortWriteEnable[PortInUse] = WriteEnable & &Address[AddressWidth-1:AddressWidth-2];
		
		// Feed the read result back as the last 16k word block
		// SlaveReadData[3] = PortReadData[PortInUse];
	end
	 
endinterface
	

// The VgaSystem module instantiates the VGA controller with a dual port RAM to permit
// a display to be produced and modified by the processor.
module VgaSystem
(
	input CLOCK_50,
	input Reset,
	output logic        VGA_BLANK_N,
	output logic        VGA_SYNC_N,
	output logic        VGA_HS,
	output logic        VGA_VS,
	output logic [ 7:0] VGA_R,
	output logic [ 7:0] VGA_G,
	output logic [ 7:0] VGA_B,
	
	interface TheBus
);
   // A memory block
	logic [15:0] VgaRam [16384];
	
	// Signals used to extract the individual pixel value from the VGA memory
	logic [15:0] PixelPair;
	logic [ 7:0] Pixel;
	logic [10:0] nextX;
	logic [ 9:0] nextY;

	// Instantiate the module designed by the student to generate VGA 
	// control signals.
	// The VGA controller is expected to produce an 800x600 VESA comaptible
   //	signal and this is effectively downsampled to produce a 200x150 display.
	VgaController iControl
	(
		.Clock(CLOCK_50),
		.Reset,
		.blank_n(VGA_BLANK_N),
		.sync_n(VGA_SYNC_N),
		.hSync_n(VGA_HS),
		.vSync_n(VGA_VS),
		.nextX,
		.nextY
	);

	// Create a dual port memory that can be read or written over the bus
	// and can be simultaneously read to get pixels for the screen. Pixels 
	// take one byte each and are stored in pairs so that one row of pixels 
	// takes 100 memory locations and the whole screen is 15000 memory 
	// locations.
	always_ff @(posedge CLOCK_50)
	begin
		TheBus.SlaveReadData1 = VgaRam[TheBus.SlaveAddress];
		if (TheBus.WriteEnable)	VgaRam[TheBus.SlaveAddress] <= TheBus.WriteData;
			
		if( nextX >= 11'd0 && nextX <= 11'd799 )
			begin
				if( nextY >= 10'd8 && nextY <= 10'd599 )
					begin
					PixelPair <= VgaRam[(nextX[10:2]*75)+nextY[9:3]];
					end
			end			
	end

	
	// Split the value read from the memory to get the correct pixel byte.
	// The pixel is stored as RRRGGGBB format (i.e 3 bit red value, 3 bit
	// green value, 2 bit blue value).
	always_comb
	begin
		Pixel = PixelPair[((nextY[0])?15:7) -:8];
		VGA_R = {{2{Pixel[7 -:3]}},2'b00};
		VGA_G = {{2{Pixel[4 -:3]}},2'b00};
		VGA_B =  {4{Pixel[1 -:2]}};
	end

endmodule



// The BusinPort module continuously prodvides the bus
// with a value from the input port.
module BusInPort
(
	input logic Clock,
	interface   TheBus,
	input [DataWidth-1:0] BusPort
);

	// Asynchronous read
	always_comb
	begin
			TheBus.PortReadData0 = BusPort;
	end
	
endmodule



// The BusOutPort module registers enabled writes on the 
// bus to the appropriate address.
module BusOutPort
(
	input logic Clock,
	interface   TheBus,
	output logic [DataWidth-1:0] BusPort,
);

	// Synchronous write
	always_ff @(posedge Clock)
	begin
			if (TheBus.WriteEnable) BusPort <= TheBus.WriteData;
	end
	
	// No input so the ReadData defaults to zero
	assign TheBus.PortReadData1 = '0;
	
endmodule



// The ProgamMemory module is a wrapper that allows the bus
// interface to be connected to an Altera IP memory block.
// This module can be loaded using the In-System Memory 
// Content Editor and is identified as PROG
/* module ProgramMemory
(
	input logic Clock,
	interface   TheBus
	); 
	
	RomBlock iRom(
		.address(TheBus.SlaveAddress),
		.clock(Clock),
		.q(TheBus.ReadData)
	);
	
endmodule */


// Direct alternative to utilising 'altsyncram' artifacts. The Program Memory
// ROM block and Data Memory RAM block are inferred instead, to be baked into the FPGA bitstream during
// compilation. 
module ProgramMemoryInferred #(parameter SlaveAddrWidth = 14)
	(
        input logic Clock,
        interface   TheBus
        );
	
	logic [DataWidth-1:0] RomBlock [(1 << SlaveAddrWidth)]; // Initialise the inferred ROM memory block, to be flashed with the instruction program. Note that (1 << SlaveAddrWidth) computes 2^14, to determine the required number of memory addresses. 

	// Invoke a '$readmemh' block (totally synthesisable and simulatable),
	// to transform the 'hex' formatted instruction program into binary,
	// machine readable bits. 
	initial
	begin	
		$readmemh("Program.hex", RomBlock);
	end
	
	// Synchronise non-blocking assignments to the output 'ReadData'
	// channel with the master clock signal. 
	always_ff@(posedge Clock)
	begin
		TheBus.SlaveReadData0 <= RomBlock[TheBus.SlaveAddress];
	end

endmodule

// The DataMemory module is a wrapper that allows the bus
// interface to be connected to an Altera IP memory block
// This module can be loaded using the In-System Memory 
// Content Editor and is identified as DATA
/* module DataMemory
(
	input logic Clock,
	interface   TheBus
);
	RAM iRAM(
		.address(TheBus.SlaveAddress),
		.clock(Clock),
		.data(TheBus.WriteData),
		.wren(TheBus.WriteEnable),
		.q(TheBus.ReadData)
	);
endmodule */

module DataMemoryInferred #(parameter SlaveAddrWidth = 14)
        (
        input logic Clock,
        interface   TheBus
        );

        logic [DataWidth-1:0] RamBlock [(1 << SlaveAddrWidth)]; // Initialise the inferred RAM memory block, to be flashed with the data memory. Note that (1 << SlaveAddrWidth) computes 2^14, to determine the required number of memory addresses.

        // Invoke a '$readmemh' block (totally synthesisable and simulatable),
        // to transform the 'hex' formatted instruction program into binary,
        // machine readable bits.
        initial
        begin
                $readmemh("Data.hex", RamBlock);
        end

        always_ff@(posedge Clock)
        begin
                TheBus.SlaveReadData0 <= RamBlock[TheBus.SlaveAddress];
		if (TheBus.WriteEnable)
		begin
			RamBlock[TheBus.SlaveAddress] <= TheBus.WriteData;
		end
			
        end

endmodule

// Assign the 'ReadData' channel to a MUX-controlled peripheral selector
// (Read-domain exclusive). 
/*module Dmux(
	input logic [AddressWidth-1:0] Addr,
	input logic [DataWidth-1:0] SlaveData1,
	input logic [DataWidth-1:0] SlaveData2,
	output logic [DataWidth-1:0] ReadData
	);
	
	logic [1:0] InUseBlock;
	assign InUseBlock = Addr[(AddressWidth-1):(AddressWidth-2)];
	
	always_comb
	begin
		if (&(InUseBlock))
		begin
			ReadData = SlaveData2;
		end
		else
		begin
			ReadData = SlaveData1;
		end
	end
endmodule */

// Assign the '' channel to a MUX-controlled peripheral selector
// (Read-domain and Write-Domain compatible). 
module Mux(
        input logic [AddressWidth-1:0] Addr,
        input logic [DataWidth-1:0] SlaveData1,
        input logic [DataWidth-1:0] SlaveData2,
	input logic [DataWidth-1:0] SlaveData3,
        output logic [DataWidth-1:0] ReadData
        );

        logic [1:0] InUseBlock;
        assign InUseBlock = Addr[(AddressWidth-1):(AddressWidth-2)];

        always_comb
        begin
		case(InUseBlock)
			1'd0:
			begin
				ReadData = SlaveData1;
			end

			1'd1:
			begin	
				ReadData = SlaveData2;
			end

			2'b11:
			begin
				ReadData = SlaveData3;
			end

			default:
			begin	
				ReadData = '0;
			end
		endcase
	end
endmodule


// Assign the ' channel to a MUX-controlled peripheral selector
// (Read-domain exclusive). 
module Portmux(
        input logic [AddressWidth-1:0] Addr,
        input logic [DataWidth-1:0] PortData1,
        input logic [DataWidth-1:0] PortData2,
        output logic [DataWidth-1:0] ReadData
        );

        logic [4:0] InUsePort;
	// logic [DataWidth-1:0] PortData;
        assign InUsePort = Addr[(AddressWidth-3):(AddressWidth-7)];

        always_comb
        begin
        	case(InUsePort)
			1'd0:
			begin
				ReadData = PortData1;
			end
			
			1'd1:
			begin
				ReadData = PortData2;
			end
			
			default:
			begin
				ReadData = '0;
			end
		endcase
	end	
endmodule
