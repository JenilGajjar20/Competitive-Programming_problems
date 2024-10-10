<h1><a href = "https://leetcode.com/problems/house-robber-ii/description/">213. House RObber II</h1>

## Problem Statement

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses are broken into on the same night.

Given an integer array `nums` representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

## Example 1

**Input:** `nums = [2,3,2]`  
**Output:** `3`  
**Explanation:** You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.

## Example 2

**Input:** `nums = [1,2,3,1]`  
**Output:** `4`  
**Explanation:** Rob house 1 (money = 1) and then rob house 3 (money = 3). Total amount you can rob = 1 + 3 = 4.

## Example 3

**Input:** `nums = [1,2,3]`  
**Output:** `3`  

## Constraints

- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 1000`

## Approach

To solve this problem, we can leverage the solution of the previous "House Robber" problem by treating it as two separate linear robbery scenarios:

1. **Rob houses from the first to the second-to-last** (i.e., exclude the last house).
2. **Rob houses from the second to the last** (i.e., exclude the first house).

The answer will be the maximum of the results from these two scenarios.

## Solution

Here is a possible implementation in C++:

```cpp
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        // Handle edge cases
        if (n == 0) return 0; // No houses
        if (n == 1) return nums[0]; // Only one house

        // Helper function to calculate max loot for a linear array
        auto robLinear = [](const vector<int>& nums, int start, int end) {
            int prev1 = 0, prev2 = 0; // Initialize previous two max values
            for (int i = start; i < end; ++i) {
                int pick = nums[i] + prev1; // Value if we pick current house
                int notPick = prev2; // Value if we do not pick current house
                int curr = max(pick, notPick); // Max of both options
                prev1 = prev2; // Update previous for the next iteration
                prev2 = curr;
            }
            return prev2; // Return the maximum value obtained
        };

        // Rob houses excluding the last house and then excluding the first house
        int maxLoot1 = robLinear(nums, 0, n - 1); // From house 0 to house n-2
        int maxLoot2 = robLinear(nums, 1, n); // From house 1 to house n-1

        // Return the maximum of both scenarios
        return max(maxLoot1, maxLoot2);
    }
};
