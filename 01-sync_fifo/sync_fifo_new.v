// Configure a synchronous FIFO to buffer IMU data between a ESP-32 CPU and a BLE peripheral. Refer to 'Sync_Fifo_explanation.odt' for added clarity and exhaustive list of instructions and design justification. 

// Configure the timescale 
`timescale 1ns / 1ps

// Configure externally-driven inputs and outputs within the module definition. Note that declarations of any internal elements must be declared further on - the module definition must only // contain potential input and output pins facing external components as opposed to every connection required within the FIFO. E.g. signals driven from the external CPU domain to the FIFO 
// must be denoted by input pins, whereas connections established between the write domain and the RAM block must not be initialised via input/output pins in the module definition section - // this risks accidental connections that may jeopardise the operation of the FIFO, and increases routing complexity (redundant wires that feeding externally must be plugged back into the   //  FIFO module, worsening the footprint of the entire module. 
module sync_fifo #(parameter DEPTH = 128, LENGTH = 48, DEPTHBIN = 7) // Declaring parameters (equivalent of variables) during the configuration of the module is standard programming practice                                                                     // to ensure traceability of variable values throughout the program, and a consistent digital record. Individually 
                                                                     // assigning values to any elements further down which share common parameters with other elements necessitates 
                                                                     // individually amending every single element's value, proving to be a tedious affair. Instead, an associated 'parameter'                                                                     //  value can be amended that propogates to every element assigned to that 'parameter'. 
	(
	input logic [LENGTH-1:0] d_in, // 48-bit parallel 'Data In' bus into the FIFO from the Arduino MCU. 
	input logic 	   rd_en, // Read enable pin that is hooked up directly to a digital output pin of the ESP-32 MCU. External logic to step down the read rate from 80MHz (ESP-32 Master                                  // Clock) to 1Hz (chosen read sampling rate) via a 27-bit counter that increments to 79999999 clock cycles @ 80MHz (representing 1 clock cycle @ 1Hz), with                                   // the 1Hz clock output connected directly to a 7-bit burst counter that executes 100 clock cycles @ 80MHz driven by the digital output pin from the ESP-32                                   // MCU. The digital output pin fires a high signal to the read enable pin of the FIFO every clock cycle increment for 100 cycles @ 80MHz to release the next                                  // data payload. 
	input logic 	   wr_en, // Write enable pin that is hooked up directly to a digital output pin of the ESP-32 MCU. External logic to step down the write rate from 80MHz (ESP-32                                       // Master Clock) to 100Hz (chosen write sampling rate) is nested within the ESP-32; the digital output pin fires a high signal to the write enable pin of                                     // the FIFO once a subsequent data payload has successfully been processed and refined. 
	input logic 	   clk, // 80MHz clock input into the FIFO for RAM block gating purposes; every attempted write/read is momentarily halted until the next positive clock edge from the                                // master. Prevents any settling errors in the pointers. 
	output logic [LENGTH-1:0]   d_out, // 48-bit parallel 'Data Out' bus running from the FIFO back to the Arduino MCU.
	output logic 		    full,  // A 'full' flag was deemed to be an appropriate pin, since this wire hooks up to the ESP-32's CPU to gate access of incoming payloads to the                                                 // 'd_in' bus. Without the 'full' flag configured as an output to the ESP-32, the CPU will continuously transmit data towards the the FIFO, despite                                           //  the access of certain payloads being gated by the 'full flag' into the RAM block. Since the 48-bit data bus contains zero storage capabilities,                                           //  unsuccessful payloads will be overwritten by the next payload initiated by the CPUs clock.  
	output logic 		    empty, // Similarly, an 'empty' flag was deemed necessary, to provide the CPU full control over alerting the FIFO when it is ready to catch the next 
                                           // payload of refined data during the 100-cycle burst period. If the 'empty' flag is not relayed back to the CPU despite remaining clock cycles
					   // within the burst period,repeated data will get pulled by the CPU inadvertendly. The inclusion of an 'empty' flag output alerts the CPU 
                                           // that the read and write pointers correspond to identical RAM wordlines, prompting the CPU to terminate the burst period prematurely.
	input logic		    reset_n, // Automatic 'active low' reset when glitches or malfunctions are detected in the CPU during an active session. Heavy loads require excessive
       	                                    // voltage drops that may minimise available power draw for the transistors within the RAM block. Insufficient gate voltages for the MOSFETs will 
					    // result in transistor switching
					    // failure, culminating in
					    // critical FIFO malfunctions. The
					    // 'active low' reset ensures that
					    // FIFO elements are rebooted by
					    // being pulled down to zero
					    // instead of pulled up, given
					    // insufficient power is received
					    // by the FIFO in the first place.
	output logic 		    wr_ack, // A write_acknowledge handshake alert, informing ESP-32's CPU that a write was successfully executed to the FIFO. If this alert does not get 
       					    // received, this indicates that the master clock connetion between the CPU and the RAM block is corrupted or blown altogether.
	output logic 		    rd_ack // Same working principle applies to the read acknowledge handshake. Since the master clock dictates the activation of cell transistors to release 						  // data during the burst sequence, if this acknowledge alert is not received by the CPU, this again implies a faulty connection between the RAM 						// block and the master clock. 	

	);
	
	// Configuration of interconnections internal to the FIFO, e.g. AND
	// gate routings, pointer declarations, etc. 
	logic [DEPTHBIN-1:0] rd_up; // The read pointer must be sized in accordance with the max payload capacity of the FIFO at any given point (128 states from the 7 bit counter is                                            // sufficient to monitor and trigger 100 uniquely addressed FIFO reads @ 1Hz).  
	logic [DEPTHBIN-1:0] wr_up; // The write pointer must be sized in accordance with the max payload capacity of the FIFO at any given point (128 states from the 7 bit counter is                                           // sufficient to monitor and trigger 100 uniquely addressed FIFO writes @ 100Hz).
	logic [LENGTH-1:0] fifo[0:DEPTH-1]; // The FIFO is configured with 100 wordlines and 48 bitlines (for each individual 6-byte data payload).
	logic [DEPTHBIN - 1:0] depth_diff; // Signed variable to calculate the difference between the write pointer and the read pointer. These enable negative numbers to be computed.
       					     //	Unsigned variables are configured with a range of 0-127, whereas signed spans from -127 to 127. The extra bit ensures that difference 
					     //	calculations always fall within range.  

	// Procedural description of the write and read domains in the FIFO
	always_ff @ (posedge clk)
	begin
		if (!reset_n) // The inversion of the reset variable fulfils an 'active low' approach to resetting the write and read domains. 
		begin
			wr_up <= 0; // Resets the write pointer to prevent any further transistor malfunctions. 
			rd_up <= 0; // Resets the read pointer to prevent any further transistor malfunctions. 
		end
		else 
		begin
			if (wr_en && !full)
			begin            	// Describing input conditions feeding into the write enable AND gate, culminating in a successful write to the RAM block. 
				fifo [wr_up] <= d_in; // The FIFO is indexed with the current pointer binary value (points towards the corresponding RAM wordline), and the current data 
						      // payload is written to
						      // this index. 
				wr_up <= wr_up + 1;   // The pointer increments by 1, in preparation for the next data payload input into the write domain. 
				wr_ack <= 1; // Signal to the ESP-32 that the FIFO has successfully received an incoming data payload.
			       	rd_ack <= 0; // The read acknowledge should not be activated unexpectedly (serves as belt and brace).	
			end
			else if (rd_en && !empty) // Describing input conditions feeding into the read enable AND gate, culminating in a successful read from the RAM block to the ESP CPU.  
			begin
				d_out <= fifo [rd_up]; // The FIFO is indexed with the current read pointer binary value, and is assigned to the 'd_out' output bus. 
				rd_up <= rd_up + 1; // The read pointer is incremented by 1, in preparation of grabbing the next wordline and outputting it during the burst period.
			        rd_ack <= 1; // Signal to the ESP-32 that the FIFO has successfully released a data payload during the burst sequence. 
				wr_ack <= 0; // The write acknowledge should remain low (serves as belt and brace).	
			end
			else 
			begin
				rd_ack <= 0; // In the event that the FIFO is awaiting a read/write enable signal, pull both acknowledge outputs down.
				wr_ack <= 0;
			end
		end
	end

	// Procedural combination logic denoting the depth counter and
	// configuring full and empty conditions. 
	always_comb
	begin 
	depth_diff = wr_up - rd_up; // Equate the depth counter value to the difference between the write pointer and the read pointer. 
		if (depth_diff == 7'd100) 
		begin
			full = 1; // If the current depth is 100, pull the full flag high.
			empty = 0;	
		end
		else if (depth_diff == 7'd0)
		begin	
			empty = 1; // If the current depth is 0., pull the empty flag high. 
			full = 0;
		end
		else
		begin 
			full = 0; 
			empty = 0; // Both the flags should be set low otherwise
		end
	end
endmodule
		

