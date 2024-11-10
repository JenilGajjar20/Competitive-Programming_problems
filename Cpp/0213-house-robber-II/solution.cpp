class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        
        // Handle edge cases
        if (n == 0) return 0; // No houses
        if (n == 1) return nums[0]; // Only one house

        // Helper function to calculate max loot for a linear array
        auto robLinear = [](const vector<int>& nums, int start, int end) {
            int prev1 = 0, prev2 = 0; // Initialize previous two max values
            for (int i = start; i < end; ++i) {
                int pick = nums[i] + prev1; // Value if we pick current house
                int notPick = prev2; // Value if we do not pick current house
                int curr = max(pick, notPick); // Max of both options
                prev1 = prev2; // Update previous for the next iteration
                prev2 = curr;
            }
            return prev2; // Return the maximum value obtained
        };

        // Rob houses excluding the last house and then excluding the first house
        int maxLoot1 = robLinear(nums, 0, n - 1); // From house 0 to house n-2
        int maxLoot2 = robLinear(nums, 1, n); // From house 1 to house n-1

        // Return the maximum of both scenarios
        return max(maxLoot1, maxLoot2);
    }
};
