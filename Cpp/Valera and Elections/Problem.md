C. Valera and Elections

The city Valera lives in is going to hold elections to the city Parliament.

The city has n districts and n - 1 bidirectional roads. We know that from any district there is a path along the roads to any other district. Let's enumerate all districts in some way by integers from 1 to n, inclusive. Furthermore, for each road the residents decided if it is the problem road or not. A problem road is a road that needs to be repaired.

There are n candidates running the elections. Let's enumerate all candidates in some way by integers from 1 to n, inclusive. If the candidate number i will be elected in the city Parliament, he will perform exactly one promise — to repair all problem roads on the way from the i-th district to the district 1, where the city Parliament is located.

Help Valera and determine the subset of candidates such that if all candidates from the subset will be elected to the city Parliament, all problem roads in the city will be repaired. If there are several such subsets, you should choose the subset consisting of the minimum number of candidates.
Input

The first line contains a single integer n (2 ≤ n ≤ 105) — the number of districts in the city.

Then n - 1 lines follow. Each line contains the description of a city road as three positive integers xi, yi, ti (1 ≤ xi, yi ≤ n, 1 ≤ ti ≤ 2) — the districts connected by the i-th bidirectional road and the road type. If ti equals to one, then the i-th road isn't the problem road; if ti equals to two, then the i-th road is the problem road.

It's guaranteed that the graph structure of the city is a tree.
Output

In the first line print a single non-negative number k — the minimum size of the required subset of candidates. Then on the second line print k space-separated integers a1, a2, ... ak — the numbers of the candidates that form the required subset. If there are multiple solutions, you are allowed to print any of them.
Examples
Input
5
1 2 2
2 3 2
3 4 2
4 5 2

Output
1
5 

Input
5
1 2 1
2 3 2
2 4 1
4 5 1

Output
1
3 

Input
5
1 2 2
1 3 2
1 4 2
1 5 2

Output
4
5 4 3 2 
