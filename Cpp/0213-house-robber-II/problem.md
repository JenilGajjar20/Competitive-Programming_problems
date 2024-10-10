<h1><a href = "https://leetcode.com/problems/house-robber-ii/description/">213. House Robber II</h1>

## Problem Statement

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses are broken into on the same night.

Given an integer array `nums` representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input: </strong> nums = [2,3,2]
<strong>Output:</strong> 3
<strong>Explanation:</strong> You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), 
because they are adjacent houses.
</pre>
<p><strong class="example">Example 2:</strong></p>
<pre>
<pre><strong>Input:</strong> `nums = [1,2,3,1]`  
<strong>Output:</strong> 4
**Explanation:** Rob house 1 (money = 1) and then rob house 3 (money = 3). Total amount you can rob = 1 + 3 = 4.
</pre>
<p><strong class="example">Example 3:</strong></p>
<pre>
<pre><strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> 3
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

- `1 <= nums.length <= 100`
- `0 <= nums[i] <= 1000`
