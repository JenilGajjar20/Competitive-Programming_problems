#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int> > dp(n+1, vector<int>(2, 0));
        
        dp[n][0] = dp[n][1] = 0; // Base case: no transactions possible after the last day
        
        // Iterate over days in reverse order
        for(int idx = n-1; idx >= 0; idx--) {
            for(int buy = 0; buy <= 1; buy++) {
                int profit = 0;
                
                if(buy) {
                    // Option to buy: either buy today or skip
                    profit = max(-prices[idx] + dp[idx+1][0], dp[idx+1][1]);
                } else {
                    // Option to sell: either sell today or skip
                    profit = max(prices[idx] + dp[idx+1][1], dp[idx+1][0]);
                }
                
                dp[idx][buy] = profit;
            }
        }
        
        // Return the maximum profit starting from day 0 with the option to buy
        return dp[0][1];
    }
};

int main() {
    Solution sol;
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Example input
    
    cout << "Maximum Profit: " << sol.maxProfit(prices) << endl;
    return 0;
}
