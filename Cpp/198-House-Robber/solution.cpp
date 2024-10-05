class Solution {
public:
    int rob(vector<int>& nums) {
        // Create a dp array to store the maximum amount of money that can be robbed up to each house
        vector<int> dp(nums.size() + 1);
        
        // Edge case: If there is only one house, rob that house and return its value
        if(nums.size() == 1) return nums[0];

        // Initialization:
        // dp[0] = 0, meaning no houses, no money to rob
        // dp[1] = nums[0], meaning only the first house, we rob it since there's no choice
        dp[0] = 0; 
        dp[1] = nums[0];
    
        // Iterate through the houses starting from the second house
        for(int i = 1; i < nums.size(); i++) {
            // For each house, we have two options:
            // 1. Don't rob this house, so we take the value from dp[i] (previous max)
            // 2. Rob this house, so we add its value to dp[i-1] (max from robbing up to the house before the previous one)
            dp[i + 1] = max(dp[i], dp[i - 1] + nums[i]);
        }

        // Return the maximum amount of money that can be robbed, which is stored in dp[nums.size()]
        return dp[nums.size()];         
    }
};
