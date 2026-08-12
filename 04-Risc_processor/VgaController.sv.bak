// VGA controller
// MR 2026

module VgaController
(
	input	logic	Clock,
	input	logic	Reset,
	output	logic	blank_n,
	output	logic	sync_n,
	output	logic	hSync_n,
	output	logic 	vSync_n,
	output	logic	[10:0] nextX,
	output	logic	[ 9:0] nextY
);

	// use this signal as counter for the horizontal axis 
	logic [10:0] hCount;

	// use this signal as counter for the vertical axis
	logic [ 9:0] vCount;
	
	// A synchronous flip-flop block, cadenced by the master clock of the VGA, ensures that each and every output signal is lock-step alignment with one another. 
	always_ff@(posedge Clock or posedge Reset)
	begin
		// If the asynchronous reset is pulled high (active high), then the coordinates nextX and nextY must be reverted back to zero. Alongside this, all other outputs must be pulled high. 
		if(Reset)
		begin
			nextX <= 11'b0;
			nextY <= 10'b0;
			blank_n <= 1'b1;
			vSync_n <= 1'b1;
			hSync_n <= 1'b1;
			sync_n <= 1'b1;
			hCount <= 11'b0;
			vCount <= 10'b0;
		end
		// If the active high reset is inactive, then the following conditions are applicable. 
		else
		begin
			if (hCount > 799)
	
			begin
				blank_n <= 1'b0;
				nextX <= 11'b0;
				if ((hCount > 855) && (hCount < 976))
				begin
					sync_n <= 1'b0;
					hSync_n <= 1'b0;
					hCount <= hCount + 1'b1;
				end
				else if (hCount > 1039)
				begin 
					hSync_n <= 1'b1;
					hCount <= 11'b0;
					sync_n <= 1'b1;
					if (vCount > 600)
					begin 
						nextY <= 10'b0;
						if ((vCount > 636) && (vCount < 643))
						begin
							vSync_n <= 1'b0;
							blank_n <= 1'b0;
							sync_n <= 1'b0;
							vCount <= vCount + 1'b1;
						end
						else if (vCount > 665)
						begin
							sync_n <= 1'b1;
							blank_n <= 1'b1;
							vSync_n <= 1'b1;
							vCount <= 10'b0;
						end
						else
						begin
							sync_n <= 1'b1;
							blank_n <= 1'b0;
							vSync_n <= 1'b1;
							vCount <= vCount + 1'b1;
						end
					end
					else
					begin
						vCount <= vCount + 1'b1;
						nextY <= vCount;
						blank_n <= 1'b1;
					end
				end
						
				else
				begin
					sync_n <= 1'b1;
					hSync_n <= 1'b1;
					blank_n <= 1'b0;
					hCount <= hCount + 1'b1;
				end
			end		
			else

			begin
				hCount <= hCount + 1'b1;
				nextX <= hCount;

			end
		end

	end
endmodule
