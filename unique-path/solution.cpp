#include <vector> // Include the vector library for using vectors
using namespace std;
class Solution {
private:
    // Recursive function to calculate unique paths with memoization
    int uniquepath(int m, int n, int i, int j, vector<vector<int>>& dp) {
        // Base case: If the robot is at the top-left corner, there is one unique path.
        if (i == 0 && j == 0) {
            return 1;
        }
        // If the robot goes out of bounds, there are no valid paths.
        if (i < 0 || j < 0) {
            return 0;
        }
        // If we've already computed the number of unique paths for this cell, return it.
        if (dp[i][j] != -1) {
            return dp[i][j];
        }
        // Calculate unique paths by summing paths from the cell above and the cell to the left.
        int up = uniquepath(m, n, i, j - 1, dp);
        int left = uniquepath(m, n, i - 1, j, dp);
        // Store the result in the memoization table and return it.
        return dp[i][j] = up + left;
    }

public:
    int uniquePaths(int m, int n) {
        int i = m - 1;
        int j = n - 1;
        // Create a memoization table to store computed results and initialize it to -1.
        vector<vector<int>> dp(m, vector<int>(n, -1));
        // Call the recursive function to calculate unique paths.
        int ans = uniquepath(m, n, i, j, dp);
        return ans;
    }
};
