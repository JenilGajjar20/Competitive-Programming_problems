Problem Description:

You are given an array of integers nums and an integer k. Your task is to find the number of unique pairs of integers in the array that sum up to the given value k.

Write a function findPairs(nums, k) that returns the count of unique pairs that satisfy this condition.

Input:

An array nums of integers (1 <= |nums| <= 10^5), where |nums| represents the number of elements in the array.
An integer k (-10^7 <= k <= 10^7).
Output:

An integer representing the count of unique pairs that sum up to k.
Constraints:

Each element in nums is unique.
The order of the elements in the output does not matter.
A pair (a, b) is considered unique, and a pair (b, a) is not counted as a separate pair.
The input values are within the valid range.
Example:

Input:
nums = [1, 2, 3, 4, 5]
k = 5

Output:
2

Explanation:

In the given array [1, 2, 3, 4, 5], there are two unique pairs that sum up to 5: (1, 4) and (2, 3). Therefore, the output is 2.