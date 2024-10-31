class Solution {
public:
    // Recursive function to count valid queen placements row by row
    int rec(int r, int n, vector<pair<int, int>>& queens) {
        // Base case: if all queens are placed, count this configuration as valid
        if (r == n) return 1;
        
        int ans = 0;  // Initialize counter for the number of valid solutions

        // Try placing a queen in each column of the current row
        for (int c = 0; c < n; c++) {
            bool poss = true;  // Flag to check if placing a queen at (r, c) is possible
            
            // Check against previously placed queens to see if (r, c) is a valid position
            for (auto& p : queens) {
                int xr = p.first;   // Row of a placed queen
                int xc = p.second;  // Column of a placed queen
                
                // A queen can attack if in the same row, column, or diagonal
                if (xr == r || xc == c || abs(xr - r) == abs(xc - c)) {
                    poss = false;  // Set to false if a conflict is detected
                    break;
                }
            }

            // If (r, c) is not a valid position, skip to the next column
            if (!poss) continue;

            // Place the queen at (r, c) and mark it in the queens vector
            queens.push_back({r, c});
            
            // Recurse to the next row to continue placing queens
            ans += rec(r + 1, n, queens);
            
            // Backtrack: remove the queen from (r, c)
            queens.pop_back();
        }
        
        return ans;  // Return the number of valid configurations found
    }

    // Main function to initiate the N-Queens solution count
    int totalNQueens(int n) {
        vector<pair<int, int>> queens;  // Store positions of placed queens
        return rec(0, n, queens);       // Start the recursion from the first row
    }
};
