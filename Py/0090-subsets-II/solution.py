class Solution:
    def subsetsWithDup(self, nums):
        def subsetHelper(i, nums, output, s):
            # Base case: If we have processed all elements, insert the current output into the set and return.
            if i == len(nums):
                s.add(tuple(output))
                return

            # Do: Include the current element in the subset.
            output.append(nums[i])
            subsetHelper(i + 1, nums, output, s)

            # Undo: Remove the last added element to backtrack.
            output.pop()

            # Avoiding duplicates in subsets
            if i < len(nums) and output and output[-1] == nums[i]:
                return
            else:
                # Continue to the next element without including the current one.
                subsetHelper(i + 1, nums, output, s)

        # Sort the input list to handle duplicates.
        nums.sort()
        ans = []
        st = set()
        output = []

        # Start generating subsets from index 0.
        subsetHelper(0, nums, output, st)

        # Copy the subsets from the set to the answer list.
        for s in st:
            ans.append(list(s))

        return ans
