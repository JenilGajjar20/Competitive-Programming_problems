class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        # Calculate the duplicate by subtracting the sum of unique elements from the sum of all elements
        dupe = sum(nums) - sum(set(nums))
        
        # Calculate the missing number by finding the expected sum of a sequence
        # from 1 to the length of the input list and subtracting the sum of unique elements
        miss = len(nums) * (len(nums) + 1) // 2 - sum(set(nums))
        
        # Return a list containing the duplicate and missing numbers
        return [dupe, miss]