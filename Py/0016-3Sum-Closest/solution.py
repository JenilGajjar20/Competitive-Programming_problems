from collections import Counter
class Solution:
    def threeSumClosest(self, nums, target: int) -> int:
        nums = sorted(nums)
        if target > sum(nums[-3:]):
            return sum(nums[-3:])
        if target < sum(nums[:3]):
            return sum(nums[:3])
        my_target = float("inf")
        min_num, max_num = sum(nums[:2]), sum(nums[-2:])
        new_min_num, new_max_num = target - max_num - 1, target - min_num + 1
        nums = Counter((i for i in nums if new_min_num <= i <= new_max_num))
        sorted_keys = sorted(nums.keys())
        l = len(sorted_keys)
        for i, x in enumerate(sorted_keys):
            if i > 1 and x > abs(target // 3):
                break
            for j in range(i, l):
                y = sorted_keys[j]
                if x + y + y - target > abs(my_target):
                    break
                for k in range(j, l):
                    z = sorted_keys[k]
                    cand = x + y + z
                    if cand - target > abs(my_target):
                        break
                    n = 1 + (x == y) + (y == z)
                    if nums[y] < n:
                        continue
                    
                    if abs(cand - target) < abs(my_target - target):
                        my_target = cand
                        if my_target == target:
                            return target

        return my_target