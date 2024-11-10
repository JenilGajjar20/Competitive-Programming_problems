#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    // Function to count the number of enclaves (land cells that cannot reach the boundary)
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n = grid.size();    // Number of rows
        int m = grid[0].size(); // Number of columns
        
        queue<pair<int, int>> qp; // Queue for BFS
        vector<vector<int>> vis(n, vector<int>(m, 0)); // Visited array
        
        // Traverse the boundary and mark all land cells connected to the boundary as visited
        for (int i = 0; i < m; i++) {
            // First row
            if (!vis[0][i] && grid[0][i] == 1) {
                vis[0][i] = 1;
                qp.push({0, i});
            }
            // Last row
            if (!vis[n-1][i] && grid[n-1][i] == 1) {
                vis[n-1][i] = 1;
                qp.push({n-1, i});
            }
        }
        
        for (int i = 0; i < n; i++) {
            // First column
            if (!vis[i][0] && grid[i][0] == 1) {
                vis[i][0] = 1;
                qp.push({i, 0});
            }
            // Last column
            if (!vis[i][m-1] && grid[i][m-1] == 1) {
                vis[i][m-1] = 1;
                qp.push({i, m-1});
            }
        }
        
        // Directions for moving in 4 possible ways (up, right, down, left)
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        
        // BFS to mark all land cells that are connected to the boundary
        while (!qp.empty()) {
            int nx = qp.front().first;
            int ny = qp.front().second;
            qp.pop();
            
            // Explore all 4 directions
            for (int i = 0; i < 4; i++) {
                int qx = nx + dx[i];
                int qy = ny + dy[i];
                
                // Check if the new coordinates are valid, not visited, and land
                if (qx >= 0 && qx < n && qy >= 0 && qy < m && !vis[qx][qy] && grid[qx][qy] == 1) {
                    vis[qx][qy] = 1;
                    qp.push({qx, qy});
                }
            }
        }
        
        // Count the number of land cells that are not visited (enclosed land)
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!vis[i][j] && grid[i][j] == 1)
                    cnt++;
            }
        }
        return cnt;
    }
};

int main() {
    Solution sol;
    int n, m;

    // Input the dimensions of the grid
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    // Input the grid values
    vector<vector<int>> grid(n, vector<int>(m));
    cout << "Enter the grid values (0 for water, 1 for land):" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    // Call the numEnclaves function and output the result
    int result = sol.numEnclaves(grid);
    cout << "Number of enclaves: " << result << endl;

    return 0;
}
