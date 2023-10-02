class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0] == 1)
            return -1;
        
        int s = grid.size();
        if(grid[s-1][s-1] != 0)
            return -1;

        queue<pair<pair<int, int>, int>> q;
        q.push({{0, 0}, 1});
        grid[0][0] = -1;

        int drow[] = {-1, 0, +1, 0, 1, -1, -1, 1};
        int dcol[] = {0, 1, 0, -1, 1, 1, -1, -1}; 

        while(!q.empty()){
            auto val = q.front();
            int i = val.first.first;
            int j = val.first.second;
            int path = val.second;
            q.pop();

            if(i == s-1 && j == s-1)
                return path;

            for(int idx=0;idx<8;idx++){
                int row = i + drow[idx];
                int col = j + dcol[idx];

                if(row >= 0 && row < s && col >= 0 && col < s && 
                grid[row][col] == 0){
                    grid[row][col] = -1;
                    q.push({{row, col}, path+1});
                }
            }
        }

        return -1;
    }
};
