## Another Permutation Problem
Andrey is just starting to come up with problems, and it's difficult for him. That's why he came up with a strange problem about permutations†
 and asks you to solve it. Can you do it?

Let's call the cost of a permutation p
 of length n
 the value of the expression:

(∑(i=1 to n)p[i]⋅i)−(max(j=1 to n)p[j]⋅j)

Find the maximum cost among all permutations of length n

## Constraints
Each test consists of multiple test cases. The first line contains a single integer t (1≤t≤30) — the number of test cases. The description of the test cases follows.

The only line of each test case contains a single integer n (2≤n≤250
) — the length of the permutation.

It is guaranteed that the sum of n over all test cases does not exceed 500

## Sample Input
5
2
4
3
10
20

## Sample Output
2
17
7
303
2529

## Explanation
In the first test case, the permutation with the maximum cost is [2,1]. The cost is equal to 2⋅1+1⋅2−max(2⋅1,1⋅2)=2+2−2=2.

In the second test case, the permutation with the maximum cost is [1,2,4,3]. The cost is equal to 1⋅1+2⋅2+4⋅3+3⋅4−4⋅3=17.