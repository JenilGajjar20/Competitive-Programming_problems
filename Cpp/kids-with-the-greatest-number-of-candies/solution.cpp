#include <iostream>
#include <vector>
#include <climits>
using namespace std;

vector<bool> kidsWithCandies(vector<int> candies, int extraCandies)
{
    int maxi = INT_MIN;

    // Iterate through the candies and find the maximum number of candies among all the kids.
    for (int i = 0; i < candies.size(); i++)
        maxi = max(maxi, candies[i]);

    vector<bool> ans;

    // Iterate through the loop to find the kid has the greatest number of candies by adding the extraCandies.
    for (int i = 0; i < candies.size(); i++)
    {
        int j = candies[i] + extraCandies;

        // Check if the sum is greater than the maximum number. If yes, return true, otherwise false.
        if (j >= maxi)
            ans.push_back(1);
        else
            ans.push_back(0);
    }

    return ans;
}

int main()
{
    int n;
    cout << "Total number of Candies: ";
    cin >> n;

    vector<int> candies(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number of candies: ";
        cin >> candies[i];
    }

    int extraCandies;
    cout << "Extra candies: ";
    cin >> extraCandies;

    vector<bool> result = kidsWithCandies(candies, extraCandies);
    for (bool ans : result)
        cout << "Ans: " << ans << endl;

    return 0;
}