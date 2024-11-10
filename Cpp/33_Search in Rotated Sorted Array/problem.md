<h2><a href="https://leetcode.com/problems/search-in-rotated-sorted-array/description/">📌 33. Search in Rotated Sorted Array</a></h2> 

<b><i>LEETCODE PROBLEM</i></b>

<h3 style="color: orange">Medium</h3>

There is an integer array <code>nums</code> sorted in ascending order (with <b>distinct</b> values).

Prior to being passed to your function, <code>nums</code> is <b>possibly rotated</b> at an unknown pivot index <code>k</code> (<code>1 <= k < nums.length</code>) such that the resulting array is <code>[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]</code><b> (0-indexed)</b>. For example, <code>[0,1,2,4,5,6,7]</code> might be rotated at pivot index <code>3</code> and become <code>[4,5,6,7,0,1,2]</code>.

Given the array <code>nums</code> after the possible rotation and an integer <code>target</code>, return the index of <code>target</code> if it is in <code>nums</code>, or <b>-1</b> if it is not in <code>nums</code>.

You must write an algorithm with <code><b>O(log n)</b></code> runtime complexity.

<p>&nbsp;</p>

<b>Example 1:</b>
<pre><strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 0
<strong>Output:</strong> 4
</pre>

<b>Example 2:</b>
<pre><strong>Input:</strong> nums = [4,5,6,7,0,1,2], target = 3
<strong>Output:</strong> -1
</pre>


<b>Example 3:</b>
<pre><strong>Input:</strong> nums = [1], target = 0
<strong>Output:</strong> -1
</pre>

<p>&nbsp;</p>

<b>Constraints:</b>

- <code>1 <= nums.length <= 5000</code>
- <code>-10<sup>4</sup> <= nums[i] <= 10<sup>4</sup></code>
- All values of <code>nums</code> are <b>unique</b>.
- <code>nums</code> is an ascending array that is possibly rotated.
- <code>-10<sup>4</sup> <= target <= 10<sup>4</sup></code>

<p>&nbsp;</p>

-------------------------
-------------------------