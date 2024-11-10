#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    vector<int> dp(n + 1);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
        dp[i] = dp[i - 1] + dp[i - 2];

    return dp[n];
}

int main()
{
    int n;
    cout << "Enter number of stairs: ";
    cin >> n;

    int ways = climbStairs(n);
    cout << "Number of ways to climb " << n << " stairs: " << ways << endl;

    return 0;
}