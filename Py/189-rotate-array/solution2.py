from typing import List

class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        n = len(nums)

        # Adjust 'k' to handle cases where 'k' is larger than 'n'
        k = k % n

        # Reverse the first part of the list (0 to n-k-1)
        nums[:n-k] = reversed(nums[:n-k])

        # Reverse the second part of the list (n-k to n-1)
        nums[n-k:] = reversed(nums[n-k:])

        # Reverse the entire list
        nums[:] = reversed(nums)
