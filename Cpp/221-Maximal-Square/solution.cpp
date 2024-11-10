class Solution {
public:
    // Helper function to find the maximum square length of '1's starting from a given position (row, col)
    int getMaxSquareLen(vector<vector<char>>& M, vector<vector<int>>& ones, int row, int col) {
        // Initialize variables to store the maximum possible square length and the number of '1's in the current row
        int allOnesRowLen = min(size(M) - row, size(M[0]) - col), sqLen = 0;

        // Iterate through each row in the possible square
        for (int i = 0, j; i < allOnesRowLen; i++) {
            // Update 'allOnesRowLen' to the minimum value of the remaining rows and columns in the square
            allOnesRowLen = min(allOnesRowLen, ones[i + row][col]);

            // Update 'sqLen' to the minimum value of 'allOnesRowLen' and the current row's position
            sqLen = min(allOnesRowLen, i + 1);
        }

        // Return the maximum square length
        return sqLen;
    }

    int maximalSquare(vector<vector<char>>& M) {
        // Get the number of rows (m) and columns (n) in the input matrix 'M'
        int m = size(M), n = size(M[0]);

        // Initialize a variable to store the final answer
        int ans = 0;

        // Create a 2D vector 'ones' to store the number of consecutive '1's to the right of each position in 'M'
        vector<vector<int>> ones(m, vector<int>(n + 1));

        // Populate the 'ones' vector by counting the consecutive '1's in each row from right to left
        for (int i = m - 1; ~i; i--) { // '~i' is equivalent to 'i >= 0', it iterates from 'm-1' to '0'
            for (int j = n - 1; ~j; j--) { // Similarly, iterate from 'n-1' to '0'
                ones[i][j] = (M[i][j] == '1' ? 1 + ones[i][j + 1] : 0);
            }
        }

        // Iterate through each position in 'M' to find the maximum square size
        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                ans = max(ans, getMaxSquareLen(M, ones, row, col));
            }
        }

        // Return the area of the maximum square of '1's found
        return ans * ans;
    }
};

        