class Solution {
    // Helper function to perform Depth First Search (DFS) to try forming the square sides
    bool dfs(vector<int>& matchsticks, int sum1, int sum2, int sum3, int sum4, int i, int n) {
        // Base case: if all four sides are exactly 0, we've successfully formed a square
        if(sum1 == 0 && sum2 == 0 && sum3 == 0 && sum4 == 0) 
            return true; 
        
        // If we've used all matchsticks or any of the sums goes below 0, we should stop (pruning)
        if(i == n || sum1 < 0 || sum2 < 0 || sum3 < 0 || sum4 < 0) 
            return false;  // invalid state, can't form a square
        
        // Take the current matchstick value
        int val = matchsticks[i];
        
        // Try placing the current matchstick in one of the four sides, recursively check the next one
        return dfs(matchsticks, sum1 - val, sum2, sum3, sum4, i + 1, n) ||  // Try placing in side 1
               dfs(matchsticks, sum1, sum2 - val, sum3, sum4, i + 1, n) ||  // Try placing in side 2
               dfs(matchsticks, sum1, sum2, sum3 - val, sum4, i + 1, n) ||  // Try placing in side 3
               dfs(matchsticks, sum1, sum2, sum3, sum4 - val, i + 1, n);    // Try placing in side 4
    }

public:
    // Function to check if the matchsticks can form a square
    bool makesquare(vector<int>& matchsticks) {
        // Calculate the total sum of the matchsticks
        int total = accumulate(matchsticks.begin(), matchsticks.end(), 0LL);

        // If the total sum is not divisible by 4, we can't form a square
        if(total % 4 != 0) 
            return false;

        // Each side of the square must have a length equal to total / 4
        int side = total / 4;
        int n = matchsticks.size();

        // Sort the matchsticks in descending order to optimize the DFS (larger values first)
        sort(matchsticks.begin(), matchsticks.end(), greater<int>());

        // Call the DFS function to attempt forming the square
        return dfs(matchsticks, side, side, side, side, 0, n);
    }
};
