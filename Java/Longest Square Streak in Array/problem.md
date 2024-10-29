## Problem Description

You are given an integer array `nums`. Your task is to find the longest **square streak** in a subsequence of the array.

### Definition of a Square Streak

A subsequence of `nums` is called a **square streak** if:

- The length of the subsequence is at least 2, and
- After sorting the subsequence, each element (except the first) is the square of the previous element.

### Return Value

You need to return:
- The length of the longest square streak in the array, or
- `-1` if there is no square streak.

### Definition of a Subsequence

A subsequence is an array that can be derived from another array by deleting some or no elements, without changing the order of the remaining elements.

## Example

Given the input:

```plaintext
nums = [2, 3, 5, 4, 9, 25, 16]