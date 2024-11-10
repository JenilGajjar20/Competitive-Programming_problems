## Number Theory Love
Ehab loves number theory, but for some reason he hates the number x. Given an array a, find the length of its longest subarray such that the sum of its elements isn't divisible by x, or determine that such subarray doesn't exist.

An array a is a subarray of an array b if a can be obtained from b by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

## Input
The first line contains an integer t
 (1≤t≤5)
 — the number of test cases you need to solve. The description of the test cases follows.

The first line of each test case contains 2 integers n
 and x (1≤n≤10^5
, 1≤x≤10^4) — the number of elements in the array a and the number that Ehab hates.

The second line contains n space-separated integers a1, a2, …, an
 (0≤ai≤10^4) — the elements of the array a.

## Sample Input
3
3 3
1 2 3
3 4
1 2 3
2 2
0 6

## Sample Output
2
3
-1

## Explanation
In the first test case, the subarray [2,3] has sum of elements 5, which isn't divisible by 3

In the second test case, the sum of elements of the whole array is 6 , which isn't divisible by 4

In the third test case, all subarrays have an even sum, so the answer is −1
