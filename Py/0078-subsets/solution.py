class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        def subsetHelper(i: int, nums: List[int], output: List[int], res: List[List[int]]) -> None:
            # Base case: if we've considered all numbers
            if i == len(nums):
                # Add the current subset to the result
                res.append(output.copy())
                return

            # Include the current number in the subset
            output.append(nums[i])
            subsetHelper(i+1, nums, output, res)

            # Exclude the current number from the subset (undo previous step)
            output.pop()
            subsetHelper(i+1, nums, output, res)

        # Initialize the result list to store all subsets
        res = []
        # Start the recursive function from the first number
        subsetHelper(0, nums, [], res)
        return res