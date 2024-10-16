    combination Sum-III

Link of the problem :-https://leetcode.com/problems/combination-sum-iii/description/

Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

Only numbers 1 through 9 are used.
Each number is used at most once.
Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

 

Intutuion: we have to select 'K' numbers from the given vector such that their sum is euqal to given number 'n'.
we need to count such  possible pair of numbers and return it.
so we need to check for  every possible pair individually ,to do so ,recursion is the first thing that come into the mind.
However,there are also overlapping cases, so do this wouldn't enough  to pass all the test cases so we need to improve it by memoization ,i.e, by the use of dynamic programming   


//conecpt used:- dynamic programming along with the backtracking to cover all the possible cases.

Example 1:

Input: k = 3, n = 7
Output: [[1,2,4]]
Explanation:
1 + 2 + 4 = 7
There are no other valid combinations.




