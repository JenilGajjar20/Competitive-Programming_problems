// One more solution Using memoization dp (recursion).

   int solve(vector<int>&nums, int i, vector<int>&dp){
        if(i>=nums.size()){
            return 0;
        }
        if(dp[i]!=-1)
        return dp[i];

        int take=nums[i]+solve(nums,i+2, dp);
        int ntake=0+solve(nums,i+1, dp);
        
        return dp[i]=max(take,ntake);
        
    }
    int rob(vector<int>& nums) {
    
        int n=nums.size();
        vector <int> dp(n,-1);
        int ans = solve(nums, 0, dp);
        
        return ans;
      
    }
