class Solution {
    int dfs(int i, int j, string &s, string &t, vector<vector<int>> &dp) {
        if(j == 0) return i;
        if(i == 0) return j;
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s[i - 1] == t[j - 1]) return dp[i][j] = dfs(i - 1, j - 1, s, t, dp);
        return dp[i][j] = 1 + min(dfs(i - 1, j - 1, s, t, dp), min(dfs(i, j - 1, s, t, dp), dfs(i - 1, j, s, t, dp)));
    }
public:
    int minDistance(string s, string t) {
        int n = s.size(), m = t.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));

        return dfs(n, m, s, t, dp);
    }
};