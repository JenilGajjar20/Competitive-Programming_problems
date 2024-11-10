from typing import List

class Solution:
    def possiblesplit(self, arr: List[int], maxsum: int) -> int:
        subarraysum = 0  # Initialize the sum of the current subarray
        split = 1  # Initialize the number of splits to 1 (at least one subarray)

        for i in arr:
            if subarraysum + i <= maxsum:
                subarraysum += i  # Add the current element to the subarray sum
            else:
                split += 1  # Increase the number of splits
                subarraysum = i  # Start a new subarray with the current element

        return split

    def splitArray(self, nums: List[int], k: int) -> int:
        low = max(nums)  # Minimum possible maximum sum (initially set to the maximum element)
        high = sum(nums)  # Maximum possible maximum sum (sum of all elements)

        while low <= high:
            mid = (low + high) // 2  # Calculate the middle value

            # Check if the current mid value allows for more splits than 'k'
            if self.possiblesplit(nums, mid) > k:
                low = mid + 1  # Increase the minimum possible maximum sum
            else:
                high = mid - 1  # Decrease the maximum possible maximum sum

        # Return the lowest possible maximum sum that satisfies the condition
        return low
