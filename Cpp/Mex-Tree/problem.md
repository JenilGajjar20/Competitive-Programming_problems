You are given a tree with n nodes. For each node, you either color it in 0 or 1. The value of a path (u,v) is equal to the MEX† of the colors of the nodes from the shortest path between u and v.<br>
The value of a coloring is equal to the sum of values of all paths (u,v) such that 1≤u≤v≤n. What is the maximum possible value of any coloring of the tree?<br>

† The MEX (minimum excluded) of an array is the smallest non-negative integer that does not belong to the array. For instance:<br>
The MEX of [2,2,1] is 0, because 0 does not belong to the array.<br>
The MEX of [3,1,0,1] is 2, because 0 and 1 belong to the array, but 2 does not.<br>
The MEX of [0,3,1,2] is 4 because 0, 1, 2, and 3 belong to the array, but 4 does not.<br>

Input<br>
Each test contains multiple test cases. The first line of input contains a single integer t (1≤t≤104) — the number of test cases. The description of test cases follows.<br>
The first line of each test case contains a single integer n (1≤n≤2⋅105) — the number of nodes in the tree.<br>
The following n−1 lines of each test case contains 2 integers ai and bi (1≤ai,bi≤n,ai≠bi) — indicating an edge between vertices ai and bi. It is guaranteed that the given edges form a tree.<br>
It is guaranteed that the sum of n across all test cases does not exceed 2⋅105.
<br>
Output<br>
For each test case, print the maximum possible value of any coloring of the tree.<br>

Example<br>
inputCopy<br>
4<br>
3<br>
1 2<br>
2 3<br>
4<br>
1 2<br>
1 3<br>
1 4<br>
10<br>
1 2<br>
1 3<br>
3 4<br>
3 5<br>
1 6<br>
5 7<br>
2 8<br>
6 9<br>
6 10<br>
1<br>

output<br>
8<br>
15<br>
96
1<br>

Note<br>
In the first sample, we will color vertex 2 in 1 and vertices 1,3 in 0. After this, we consider all paths:<br>

(1,1) with value 1<br>
(1,2) with value 2<br>
(1,3) with value 2<br>
(2,2) with value 0<br>
(2,3) with value 2<br>
(3,3) with value 1<br>
We notice the sum of values is 8 which is the maximum possible.<br>
