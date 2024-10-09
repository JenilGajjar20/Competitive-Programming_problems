#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to calculate the number of unique paths
    int uniquePaths(int m, int n) {
        // Create a 2D DP array initialized with -1
        vector<vector<int>> dp(m, vector<int>(n, -1));

        // Initialize the starting position
        dp[0][0] = 1;

        // Iterate over all cells in the grid
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // Skip the start point as it is already initialized
                if (i == 0 && j == 0)
                    continue;
                
                int up = 0, left = 0;

                // If the cell is not in the first row, take the value from the top
                if (i > 0) {
                    up = dp[i - 1][j];
                }

                // If the cell is not in the first column, take the value from the left
                if (j > 0) {
                    left = dp[i][j - 1];
                }

                // The value at dp[i][j] is the sum of paths coming from the top and the left
                dp[i][j] = up + left;
            }
        }

        // Return the number of unique paths to the bottom-right corner
        return dp[m - 1][n - 1];
    }
};

int main() {
    Solution sol;
    int m, n;

    // Input the number of rows and columns
    cout << "Enter the number of rows: ";
    cin >> m;

    cout << "Enter the number of columns: ";
    cin >> n;

    // Call the uniquePaths function and output the result
    int result = sol.uniquePaths(m, n);
    cout << "Number of unique paths: " << result << endl;

    return 0;
}
