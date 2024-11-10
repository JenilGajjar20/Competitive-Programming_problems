class Solution:
    def subarraySum(self, nums: List[int], k: int) -> int:
        # Create a dictionary to store the cumulative sum and its frequency.
        cumulative_sum = {}

        # Initialize variables to keep track of the cumulative sum and the answer.
        current_sum = 0
        count = 0

        # Initialize the cumulative sum 0 with a frequency of 1.
        cumulative_sum[0] = 1

        # Iterate through the elements of the 'nums' list.
        for num in nums:
            # Add the current element to the cumulative sum.
            current_sum += num

            # Calculate the value we want to find in the dictionary.
            find = current_sum - k

            # Check if 'find' exists in the dictionary.
            if find in cumulative_sum:
                # If 'find' exists in the dictionary, increment 'count' by its frequency.
                count += cumulative_sum[find]

            # Increment the frequency of the current cumulative sum.
            if current_sum in cumulative_sum:
                cumulative_sum[current_sum] += 1
            else:
                cumulative_sum[current_sum] = 1

        # Return the final answer.
        return count
