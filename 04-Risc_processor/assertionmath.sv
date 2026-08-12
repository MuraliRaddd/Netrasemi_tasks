// Contains testbench-level functions intended for SystemVerilog assertions to validate the outputs of the ALU hardware module.



package assertionmath;
	
	// Import the instruction set package. 
	import InstructionSetPkg::*;

	// Create a variable for the temporary carry value, akin to the hardware ALU module. 
	logic temp_carry;
	
	// Create a parity bit tracker to compute the nature of the parity bit, akin to the hardware ALU module. 
	bit parity_sum;
	
	logic signed [DataWidth-1:0] nInSrc;
	
	logic signed [(2*DataWidth) - 1:0] full_product;
	
	// Declare a structure to output multiple variables from a single function
	typedef struct{
		logic signed [DataWidth-1:0] out; // Content of output destination register. 
		logic Overflow;
		logic Parity;
		logic Negative;
		logic Zero;
		logic Carry;
		} expFlags_t;
		
	// Instantiate the structure
	expFlags_t expFlags;
	
	// Create a function to assert the NAND operation within the ALU. 
	function automatic expFlags_t calc_move(logic signed [DataWidth-1:0] a); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 
		expFlags.out = a; // Copy the argument to the out variable of the structure 'expFlags'.
		return expFlags; // Output the value of c once the function is executed. 
	endfunction
	
	// Create a function to assert the NAND operation within the ALU. 
	function automatic expFlags_t calc_nand(logic signed [DataWidth-1:0] a, logic signed [DataWidth-1:0] b); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 
		expFlags.out = ~(a & b); // Compute the NAND result between a and b. 
		return expFlags; // Output the value of c once the function is executed. 
	endfunction
	
	// Create a function to assert the NOR operation within the ALU. 
	function automatic expFlags_t calc_nor(logic signed [DataWidth-1:0] a, logic signed [DataWidth-1:0] b); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 
		expFlags.out = ~(a | b); // Compute the NOR result between a and b. 
		return expFlags; // Output the value of c once the function is executed. 
	endfunction
	
	// Create a function to assert the ROL operation within the ALU. 
	function automatic expFlags_t calc_rol(logic signed [DataWidth-1:0] a, logic carr); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 
		logic signed [DataWidth-1:0] y;
	// The input 16-bit source register is shifted left by one binary unit.
		y = a << 1;
	
	// The current input carry flag is assigned to the LSB of the output destination register. 
		y[0] = carr;
		
		expFlags.out = y;
	
	// Eventually, after all register left shifts have been successfully conducted, the output carry flag is assigned to MSB of the source. 
		expFlags.Carry = a[15];
			
					 
		return expFlags; // Output the value of c once the function is executed. 
	endfunction
	
	// Create a function to assert the ROL operation within the ALU. 
	function automatic expFlags_t calc_ror(logic signed [DataWidth-1:0] a, logic carr); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 
		logic signed [DataWidth-1:0] y;
	// The input 16-bit source register is shifted left by one binary unit.
		y = a >> 1;
	
	// The current input carry flag is assigned to the LSB of the output destination register. 
		y[15] = carr;
		
		expFlags.out = y;
	
	// Eventually, after all register right shifts have been successfully conducted, the output carry flag is assigned to LSB of the source. 
		expFlags.Carry = a[0];
			
					 
		return expFlags; // Output the value of c once the function is executed. 
	endfunction
	
	// Create a function to assert the ADC operation within the ALU. 
	function automatic expFlags_t calc_adc(logic signed [DataWidth-1:0] a, logic signed [DataWidth-1:0] b, logic carr); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 
		logic signed [DataWidth-1:0] y;
		parity_sum = 1'b0;
		
		temp_carry = carr;
		
		// For loop, to compute the sum bit-by-bit, and feeding the carry sum into the next iteration. 
		for(int n = 0; n < DataWidth; n++)
		begin
			
			y[n] = a[n] ^ b[n] ^ temp_carry;
			temp_carry = (temp_carry & (a[n] ^ b[n])) | (a[n] & b[n]);	
		end
		
		// Set the 'out' value of 'expFlags' to the final 16-bit signed value evaluated from the for loop above. 
		expFlags.out = y;
		
		// Set the carry bit of 'expFlags' to the output carry value of the for loop detailed above.
		expFlags.Carry = temp_carry;
	
		// Detail continuous assignments to validate whether the negative, overflow or zeroes must be pulled up. 
		expFlags.Zero = (y == 0);
		expFlags.Negative = (y[15] == 1);
		expFlags.Overflow = ((((b[15] || a[15]) == 0) && (y[15] == 1)) || (((b[15] && a[15]) == 1) && (y[15] == 0)));
		 
		// For loop to compute the parity flag (note that when the sum of all bits is zero, the number contains an even number of 1s.)
		for(int j = 0; j < DataWidth; j++)
		begin
			parity_sum = parity_sum + y[j];
		end
		
		if(parity_sum == 0)
		begin
			expFlags.Parity = 1'b1;
		end 
		else
		begin
			expFlags.Parity = 1'b0;
		end
		
		// Return 'expFlags' as and when the function is executed. 
		return expFlags;
	endfunction
		 
	// Create a function to assert the SUB operation within the ALU. 
	function automatic expFlags_t calc_sub(logic signed [DataWidth-1:0] a, logic signed [DataWidth-1:0] b, logic carr); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 
		logic signed [DataWidth-1:0] y;
		parity_sum = 1'b0;
		
		temp_carry = carr;
		
		nInSrc = ~b;
		// For loop, to compute the difference bit-by-bit, and feeding the carry bit into the next iteration. 
		for(int n = 0; n < DataWidth; n++)
		begin
			
			y[n] = a[n] ^ nInSrc[n] ^ temp_carry;
			temp_carry = (temp_carry & (a[n] ^ nInSrc[n])) | (a[n] & nInSrc[n]);	
		end
		
		// Set the 'out' value of 'expFlags' to the final 16-bit signed value evaluated from the for loop above. 
		expFlags.out = y;
		
		// Set the carry bit of 'expFlags' to the output carry value of the for loop detailed above.
		expFlags.Carry = temp_carry;
	
		// Detail continuous assignments to validate whether the negative, overflow or zeroes must be pulled up. 
		expFlags.Zero = (y == 0);
		expFlags.Negative = (y[15] == 1);
		expFlags.Overflow = ((((b[15] == 0) && (a[15] == 1)) && (y[15] == 1)) || (((b[15] == 1) && (a[15] == 0)) && (y[15] == 0)));
		 
		// For loop to compute the parity flag (note that when the sum of all bits is zero, the number contains an even number of 1s.)
		for(int j = 0; j < DataWidth; j++)
		begin
			parity_sum = parity_sum + y[j];
		end
		
		if(parity_sum == 0)
		begin
			expFlags.Parity = 1'b1;
		end 
		else
		begin
			expFlags.Parity = 1'b0;
		end
		
		// Return 'expFlags' as and when the function is executed. 
		return expFlags;
	endfunction
	
		// Create a function to assert the SUB operation within the ALU. 
	function automatic expFlags_t calc_div(logic signed [DataWidth-1:0] a, logic signed [DataWidth-1:0] b, logic carr); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 
		logic signed [DataWidth-1:0] y;
		parity_sum = 1'b0;
		

		y = a / b; // Divide the value contained within the input destination register by the input source register. 
		
		// Set the 'out' value of 'expFlags' to the final 16-bit signed value evaluated from the for loop above. 
		expFlags.out = y;
		
		// Set the carry bit of 'expFlags' to the output carry value of the for loop detailed above.
		expFlags.Carry = carr;
	
		// Detail continuous assignments to validate whether the negative, overflow or zeroes must be pulled up. 
		expFlags.Zero = (y == 0);
		expFlags.Negative = (y[15] == 1);
		 
		// For loop to compute the parity flag (note that when the sum of all bits is zero, the number contains an even number of 1s.)
		for(int j = 0; j < DataWidth; j++)
		begin
			parity_sum = parity_sum + y[j];
		end
		
		if(parity_sum == 0)
		begin
			expFlags.Parity = 1'b1;
		end 
		else
		begin
			expFlags.Parity = 1'b0;
		end
		
		// Return 'expFlags' as and when the function is executed. 
		return expFlags;
	endfunction
	
	
	
	
	// Create a function to assert the MOD operation within the ALU. 
	function automatic expFlags_t calc_mod(logic signed [DataWidth-1:0] a, logic signed [DataWidth-1:0] b, logic carr); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 
		logic signed [DataWidth-1:0] y;
		parity_sum = 1'b0;
		

		y = a % b; // Divide the value contained within the input destination register by the input source register. 
		
		// Set the 'out' value of 'expFlags' to the final 16-bit signed value evaluated from the for loop above. 
		expFlags.out = y;
		
		// Set the carry bit of 'expFlags' to the output carry value of the for loop detailed above.
		expFlags.Carry = carr;
	
		// Detail continuous assignments to validate whether the negative, overflow or zeroes must be pulled up. 
		expFlags.Zero = (y == 0);
		expFlags.Negative = (y[15] == 1);
		 
		// For loop to compute the parity flag (note that when the sum of all bits is zero, the number contains an even number of 1s.)
		for(int j = 0; j < DataWidth; j++)
		begin
			parity_sum = parity_sum + y[j];
		end
		
		if(parity_sum == 0)
		begin
			expFlags.Parity = 1'b1;
		end 
		else
		begin
			expFlags.Parity = 1'b0;
		end
		
		// Return 'expFlags' as and when the function is executed. 
		return expFlags;
	endfunction
	
	// Create a function to assert the MUL operation within the ALU. 
	function automatic expFlags_t calc_mul(logic signed [DataWidth-1:0] a, logic signed [DataWidth-1:0] b, logic carr); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 
		logic signed [DataWidth-1:0] y;
		parity_sum = 1'b0;
		

		full_product = a * b;
		y = full_product [DataWidth-1:0]; // Select the bottom half of the product of the input destination and source register to assign. 
		
		// Set the 'out' value of 'expFlags' to the final 16-bit signed value evaluated from the for loop above. 
		expFlags.out = y;
		
		// Set the carry bit of 'expFlags' to the output carry value of the for loop detailed above.
		expFlags.Carry = carr;
	
		// Detail continuous assignments to validate whether the negative, overflow or zeroes must be pulled up. 
		expFlags.Zero = (y == 0);
		expFlags.Negative = (y[15] == 1);
		 
		// For loop to compute the parity flag (note that when the sum of all bits is zero, the number contains an even number of 1s.)
		for(int j = 0; j < DataWidth; j++)
		begin
			parity_sum = parity_sum + y[j];
		end
		
		if(parity_sum == 0)
		begin
			expFlags.Parity = 1'b1;
		end 
		else
		begin
			expFlags.Parity = 1'b0;
		end
		
		// Return 'expFlags' as and when the function is executed. 
		return expFlags;
	endfunction
	
	// Create a function to assert the MUH operation within the ALU. 
	function automatic expFlags_t calc_muh(logic signed [DataWidth-1:0] a, logic signed [DataWidth-1:0] b, logic carr); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 
		logic signed [DataWidth-1:0] y;
		parity_sum = 1'b0;
		full_product = a * b;
		y = full_product[(2*DataWidth-1):DataWidth]; // Select the top half of the product of the input destination and source register to assign. 
		
		// Set the 'out' value of 'expFlags' to the final 16-bit signed value evaluated from the for loop above. 
		expFlags.out = y;
		
		// Set the carry bit of 'expFlags' to the output carry value of the for loop detailed above.
		expFlags.Carry = carr;
	
		// Detail continuous assignments to validate whether the negative, overflow or zeroes must be pulled up. 
		expFlags.Zero = (y == 0);
		expFlags.Negative = (y[15] == 1);
		 
		// For loop to compute the parity flag (note that when the sum of all bits is zero, the number contains an even number of 1s.)
		for(int j = 0; j < DataWidth; j++)
		begin
			parity_sum = parity_sum + y[j];
		end
		
		if(parity_sum == 0)
		begin
			expFlags.Parity = 1'b1;
		end 
		else
		begin
			expFlags.Parity = 1'b0;
		end
		
		// Return 'expFlags' as and when the function is executed. 
		return expFlags;
	endfunction
	
	// Create a function to assert the LIL operation within the ALU. 
	function automatic expFlags_t calc_lil(logic signed [ImmediateWidth-1:0] a); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 	
		expFlags.out = $signed(a);
		return expFlags; // Output the value of expFlags once the function is executed. 
	endfunction
	
	// Create a function to assert the LIU operation within the ALU. 
	function automatic expFlags_t calc_liu(logic signed [ImmediateWidth-1:0] a, logic signed [DataWidth-1:0] b); // Note that the automatic keyword stores the function in a unique memory address isolated from other functions to be ran concurrently. 	
				
		if (a[ImmediateWidth - 1] ==  1)
			expFlags.out = {a[ImmediateWidth - 2:0], b[ImmediateHighStart - 1:0]};
		else if  (a[ImmediateWidth - 1] ==  0)	
			expFlags.out = $signed({a[ImmediateWidth - 2:0], b[ImmediateMidStart - 1:0]});
		else
			expFlags.out = b;	
		
		return expFlags; // Output the value of expFlags once the function is executed. 
	endfunction
	
endpackage