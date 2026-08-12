// Program Counter embedded within a generic, LowRISC microprocesser. 

module program_counter(
	input logic Clock, // Each and every operation must be executed synchronously - cadenced by the positive edge of 'Clock'
	input logic Reset, // Active-high reset; pulling this input high will asynchronously clear the current contents of the PC. 
	input logic signed [15:0] LoadValue, // At every positive clock edge, in tandem with a high LoadEnable signal, this 16-bit signed input value is loaded in the PC. 
	input logic LoadEnable, // Indicates to the PC that an incoming 16-bit signed payload must be loaded in. 
	input logic signed [8:0] Offset, // This 9-bit signed value must be added to the CounterValue, triggered by concurrent OffsetEnable and Clock signals. 
	input logic OffsetEnable, // Indicates to the PC that an incoming 9-bit Offset payload must be summed with the current CounterValue. 
	output logic signed [15:0] CounterValue // 16-bit output signal of the PC. 
	);
	
	logic signed [15:0] nextCount;
	logic [1:0] enables;
	
	assign enables = {LoadEnable, OffsetEnable};
	
	always_comb
	begin
		case(enables)
			2'b00:
			begin
				nextCount = CounterValue + 1'd1;
			end
			
			2'b01:
			begin
				nextCount = CounterValue + 16'(Offset);
			end
			
			2'b10:
			begin
				nextCount = LoadValue;
			end
			
			2'b11:
			begin
				nextCount = LoadValue + 16'(Offset);
			end
			
			default: 
			begin
				nextCount = CounterValue + 1'd1;
			end
		endcase
	end

	
	// Invoke a synchronous flip flop block to update the CounterValue every clock cycle, depending on enables and input signals. 
	always_ff@(posedge Clock or posedge Reset)
	begin
		// Asynchronous reset, which clears the contents of the PC. 
		if(Reset)
		begin
			CounterValue <= 0;
		end
		else
		begin
			CounterValue <= nextCount;
		end
	end
endmodule
			