class Solution:
    def trap(self, height):
        # Initialize the left and right pointers at the beginning and end of the elevation map respectively.
        left_ptr = 0
        right_ptr = len(height) - 1
        
        # Initialize variables to keep track of the maximum height on the left and right sides.
        left_max_height = 0
        right_max_height = 0
        
        # Initialize a variable to store the total trapped water.
        trapped_water = 0
        
        # Continue until the two pointers meet.
        while left_ptr < right_ptr:
            # If the height at the left pointer is less than or equal to the height at the right pointer.
            if height[left_ptr] <= height[right_ptr]:
                # Check if the current height is greater than or equal to the left maximum height.
                if height[left_ptr] >= left_max_height:
                    # Update the left maximum height.
                    left_max_height = height[left_ptr]
                else:
                    # Calculate and add the trapped water on the left side.
                    trapped_water += left_max_height - height[left_ptr]
                
                # Move the left pointer to the right.
                left_ptr += 1
            else:
                # If the height at the right pointer is greater than or equal to the right maximum height.
                if height[right_ptr] >= right_max_height:
                    # Update the right maximum height.
                    right_max_height = height[right_ptr]
                else:
                    # Calculate and add the trapped water on the right side.
                    trapped_water += right_max_height - height[right_ptr]
                
                # Move the right pointer to the left.
                right_ptr -= 1
        
        # Return the total trapped water.
        return trapped_water
