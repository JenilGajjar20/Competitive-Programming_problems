class Solution {
public:
    // Recursive function to place queens row by row
    void rec(int r, int n, vector<string>& ve, vector<pair<int, int>>& queens, vector<vector<string>>& out) {
        // Base case: if we've placed queens in all rows, add current board configuration to output
        if (r == n) {
            out.push_back(ve);
            return;
        }
        
        // Try placing a queen in each column of the current row
        for (int c = 0; c < n; c++) {
            bool poss = true; // Flag to check if placing a queen at (r, c) is possible
            
            // Check against previously placed queens to see if (r, c) is a valid position
            for (auto& p : queens) {
                int xr = p.first;   // Row of the placed queen
                int xc = p.second;  // Column of the placed queen
                
                // A queen can attack if in the same row, column, or diagonal
                if (xr == r || xc == c || abs(xr - r) == abs(xc - c)) {
                    poss = false;  // Set to false if a conflict is detected
                    break;
                }
            }
            
            // If (r, c) is not a valid position, skip to the next column
            if (!poss) continue;
            
            // Place the queen at (r, c) and mark it on the board
            queens.push_back({r, c});
            ve[r][c] = 'Q';
            
            // Recurse to the next row to place the next queen
            rec(r + 1, n, ve, queens, out);
            
            // Backtrack: remove the queen from (r, c) and unmark it on the board
            ve[r][c] = '.';
            queens.pop_back();
        }
    }

    // Main function to initiate the N-Queens solution finding
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> out;         // Stores all valid board configurations
        vector<string> ve(n, string(n, '.')); // Initialize board with empty cells
        vector<pair<int, int>> queens;      // Stores positions of placed queens
        rec(0, n, ve, queens, out);         // Start recursion from the first row
        return out;                         // Return all valid solutions
    }
};
