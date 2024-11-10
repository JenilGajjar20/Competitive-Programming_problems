class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # Sort the input list in ascending order
        nums.sort()

        # Initialize variables
        longest = 0
        current_streak = 0

        # Iterate through the sorted list to find consecutive subsequences
        for i in range(len(nums)):
            if i == 0:
                current_streak = 1
            elif nums[i] == nums[i - 1]:
                # Skip duplicate elements
                continue
            elif nums[i] == nums[i - 1] + 1:
                # If the current number is consecutive to the previous one
                current_streak += 1
            else:
                # If not consecutive, update the longest streak if necessary
                longest = max(longest, current_streak)
                current_streak = 1

        # Return the maximum of the longest streak and the current streak
        return max(longest, current_streak)
