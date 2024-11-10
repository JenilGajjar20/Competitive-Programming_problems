Problem Statement

You have a k-dice. A k-dice is a dice which has k-faces and each face has a value written from 1 to k. For example, a 6-dice is the normal dice we use while playing games. For a given N, you have to calculate the number of ways you can throw this dice so that you get a sum equal to N. Since the number of ways can be large, you have to calculate the ways modulo 998244353. <br>

Refer to samples for better understanding. (Use long long data type instead of int to avoid overflow errors)
<br>
Input Format
<br>
The first line contains a single integer T (1≤T≤100) — the number of test cases. The description of test cases follows.
<br>
Each of the following T lines contains two integers Ni and Ki (1≤Ni≤100 for 20% points, 1≤Ni≤10^18 for 100% points) — where Ni is the target sum and Ki is the number of sides on the dice.
<br>
Constraints
<br>
N, K, and T are integers.<br>
1≤T≤100<br>
1≤N≤100 (for 20% points)<br>
1≤N≤10^18 (for 100% points)<br>
2≤K≤20<br>
Output Format<br>
<br>
For each test case, print a single integer — the number of ways to obtain the target sum, modulo 998244353.
<br>
Sample Input 0
<br>
3<br>
5 3<br>
7 4<br>
8 10<br>
Sample Output 0<br>

Copy code<br>
13<br>
56<br>
128<br>
Explanation 0<br>

In the first test case:<br>

1+1+1+1+1=5<br>
1+1+1+2=5<br>
1+1+2+1=5<br>
1+2+1+1=5<br>
2+1+1+1=5<br>
2+2+1=5<br>
2+1+2=5<br>
1+2+2=5<br>
3+1+1=5<br>
1+3+1=5<br>
1+1+3=5<br>
3+2=5<br>
2+3=5<br>
So there are 13 ways.<br>

Sample Input 1<br>

3<br>
100000000 10<br>
705702493 12<br>
27395703283 5<br>

Sample Output 1<br>

362391665<br>
837869791<br>
564958105<br>
