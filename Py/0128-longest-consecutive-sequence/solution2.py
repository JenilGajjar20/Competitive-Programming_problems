class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        # Another approach: Using a set for efficient lookups

        # If there are no elements in the input list, the longest consecutive subsequence is 0
        if not nums:
            return 0

        # Create a set to store the unique elements from nums
        st = set(nums)

        # Initialize a variable to store the maximum consecutive subsequence length
        ans = 0

        # Iterate through the elements in the set
        for it in st:
            # Check if the current element is the start of a consecutive subsequence
            if it - 1 not in st:
                cnt = 1  # Initialize a counter for the current subsequence
                x = it   # Initialize x as the current element

                # Continue counting consecutive elements
                while x + 1 in st:
                    cnt += 1
                    x += 1

                # Update the maximum consecutive subsequence length if necessary
                ans = max(ans, cnt)

        # Return the maximum consecutive subsequence length found
        return ans
