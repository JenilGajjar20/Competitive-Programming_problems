Problem Statement

You have a k-dice. A k-dice is a dice which has k-faces and each face has a value written from 1 to k. For example, a 6-dice is the normal dice we use while playing games. For a given N, you have to calculate the number of ways you can throw this dice so that you get a sum equal to N. Since the number of ways can be large, you have to calculate the ways modulo 998244353.

Refer to samples for better understanding. (Use long long data type instead of int to avoid overflow errors)

Input Format

The first line contains a single integer T (1≤T≤100) — the number of test cases. The description of test cases follows.

Each of the following T lines contains two integers Ni and Ki (1≤Ni≤100 for 20% points, 1≤Ni≤10^18 for 100% points) — where Ni is the target sum and Ki is the number of sides on the dice.

Constraints

N, K, and T are integers.
1≤T≤100
1≤N≤100 (for 20% points)
1≤N≤10^18 (for 100% points)
2≤K≤20
Output Format

For each test case, print a single integer — the number of ways to obtain the target sum, modulo 998244353.

Sample Input 0

Copy code
3
5 3
7 4
8 10
Sample Output 0

Copy code
13
56
128
Explanation 0

In the first test case:

1+1+1+1+1=5
1+1+1+2=5
1+1+2+1=5
1+2+1+1=5
2+1+1+1=5
2+2+1=5
2+1+2=5
1+2+2=5
3+1+1=5
1+3+1=5
1+1+3=5
3+2=5
2+3=5
So there are 13 ways.

Sample Input 1

Copy code
3
100000000 10
705702493 12
27395703283 5
Sample Output 1

Copy code
362391665
837869791
564958105
