// Asynchronous FIFO read domain logic

module read_domain #(parameter PTR_WIDTH = 3) (
        input logic rclk,  // Read Domain Clock
        input logic r_rst, // Active low read pointer reset. 
        input logic rd_en, // Read enable signal throttled at a rate of 100Hz. 
        input logic [PTR_WIDTH:0] w_gray_ptr, // Synchronised gray write pointer transmitted via CDC. 

        output logic [PTR_WIDTH:0] r_bin_ptr, // Read pointer in binary format, to release payloads in chronological order during the burst sequence. 
        output logic [PTR_WIDTH:0] r_gray_ptr, // Read pointer in gray format, to be persisted to the opposite write domain via CDC for full depth logic. 
        output logic               empty // Active-high empty flag when the FIFO reaches a capacity of 10. 

        );

        logic [PTR_WIDTH:0] w_bin_next; // Intermediary array of flip flops to capture the binary-converted write pointer value upon receival from the opposite domain via FIFO.  
        logic [PTR_WIDTH:0] r_gray_next; // Intermediary array of flip flops to capture the gray-converted read pointer value before CDC transmission. 
        logic [PTR_WIDTH:0] r_bin_next; // Intermediary array of flip flops to captire the incremented read pointer value before transmission into the FIFO. 
            

        // Compute the binary-gray conversion. Shift the binary read pointer to the right by one, followed by an XOR comparison with the original binary read pointer. 
        assign r_gray_next = r_bin_next ^ (r_bin_next >> 1);

        // Equate the next read pointer binary value with an incremented version of the current pointer value. 
        assign r_bin_next = r_bin_ptr + 1;

        always_comb
        begin
                for (int i = PTR_WIDTH, i > -1, i--)
                begin
                        // Assign the MSB of the binary version of the write pointer to the MSB of the gray version (fundamental rule of gray-binary conversion)

                        if (i == PTR_WIDTH)
                        begin
                                [i] w_bin_next = [i] w_gray_ptr;
                        end
                        else
                        begin
                                [i] w_bin_next = [i + 1] w_bin_next ^ [i] w_gray_ptr;
                        end

                end
        end

        always_ff @(posedge rclk or negedge r_rst)
        begin
                // If the active low read reset is active, then both the read pointers native to the read domain should be refreshed. 
                if (!r_rst)
                begin
                        r_bin_ptr <= 0;
                        r_gray_ptr <= 0;
                end
                else
                begin
                        // If the read enable AND gate conditions are satisfied, update both local read pointers based on the formulas states above. 
                        if (rd_en & !empty)
                        begi
                                r_bin_ptr <= r_bin_next;
                                r_gray_ptr <= r_gray_next;
                        end
                end

        end

        // Empty flag logic 
        always_ff @(posedge rclk or negedge r_rst)
        begin
                if (!r_rst)
                begin
                        empty <= 0;
                end
                else
                begin
                        if (r_bin_next == w_bin_next)
                        begin
                                empty <= 1;
                        end
                end
        end
endmodule

