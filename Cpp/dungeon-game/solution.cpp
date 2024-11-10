class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int n = dungeon.size(), m = dungeon[0].size();
        vector<vector<int>> dp(n, vector<int>(m, 0));

        for(int i=n-1; i>=0; i--){
            for(int j=m-1; j>=0; j--){
                if(i+1>n-1 && j+1>m-1)  dp[i][j] = (dungeon[i][j] > 0) ? 1 : abs(dungeon[i][j])+1;
                else if(i+1>n-1)  dp[i][j] = max(dp[i][j+1] - dungeon[i][j], 1);
                else if(j+1>m-1)  dp[i][j] = max(dp[i+1][j] - dungeon[i][j], 1);
                else{
                    int rem = min(dp[i+1][j], dp[i][j+1]);
                    dp[i][j] = max(rem - dungeon[i][j], 1);
                }
            }
        }
        return dp[0][0];
    }
};