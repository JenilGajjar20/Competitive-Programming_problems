#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int mini = INT_MAX, ans = 0;
    
    for(auto &x : prices) {
        mini = min(mini, x);
        ans = max(ans, x - mini);
    }
    return ans;
}

int main()
{
    vector<int> price = {110, 130, 220, 500, 140, 35, 65};
    int size = sizeof(price) / sizeof(price[0]);
    cout << "Profit: " << maxProfit(price);
    return 0;
}
