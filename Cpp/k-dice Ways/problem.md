You have a k-dice.
A k-dice is a dice which have k-faces and each face have value written from 1 to k.
Eg. A 6-dice is the normal dice we use while playing games.
For a given N, you have to calculate the number of ways you can throw this dice so that we get sum equal to N.
Since number of ways can be large you have to calculate ways mod 998244353
Refer to samples for better understanding.
(Use long long data type instead of int to avoid overflow errors)

Input Format

T
N1 K1
N2 K2
N3 K3
.
.
.
NT KT

Constraints

N, K and T are integers
1<=T<=100
1<=N<=100 (20% points)
1<=N<=10^18 (100% points)
2<=k<=20

Output Format

ans1
ans2
ans3 .
.
ansT

Sample Input 0

3
5 3
7 4
8 10
Sample Output 0

13
56
128
Explanation 0

In first test case

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

3
100000000 10
705702493 12
27395703283 5
Sample Output 1

362391665
837869791
564958105
