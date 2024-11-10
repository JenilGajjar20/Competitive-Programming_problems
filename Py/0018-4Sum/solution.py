from typing import List

class Solution:
    def fourSum(self, nums: List[int], target: int) -> List[List[int]]:
        N = 4
        if len(nums) < N:
            return []
        
        def twosum(nums, target, res):
            # Two pointer approach to find pairs summing to target
            left, right = 0, len(nums) - 1
            while left < right:
                sum_ = nums[left] + nums[right]
                if sum_ == target:
                    result.append(res + [nums[left], nums[right]])
                    left += 1
                    right -= 1
                    # Avoid duplicates
                    while left < right and nums[left] == nums[left - 1]:
                        left += 1
                    while left < right and nums[right] == nums[right + 1]:
                        right -= 1
                elif sum_ < target:
                    left += 1
                else:
                    right -= 1

        def helperSum(nums, target, res):
            if len(res) == N - 2:  
                twosum(nums, target, res)
                return
            for i in range(len(nums)):
                if i > 0 and nums[i] == nums[i - 1]:
                    continue
                if nums[i] * (N - len(res)) > target or nums[-1] * (N - len(res)) < target:
                    break
                helperSum(nums[i + 1:], target - nums[i], res + [nums[i]])

        result = []
        nums = sorted(nums)
        helperSum(nums, target, [])
        return result