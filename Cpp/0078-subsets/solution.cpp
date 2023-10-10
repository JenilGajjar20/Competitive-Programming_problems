#include <vector>

class Solution {
    // Helper function to generate all possible subsets
    void subsetHelper(int i, vector<int> nums, vector<int>& output, vector<vector<int>> &v){
        // Base case: if we've considered all numbers
        if(i == nums.size()){
            // Add the current subset to the result
            v.push_back(output);
            return;
        }

        // Include the current number in the subset
        output.push_back(nums[i]);
        subsetHelper(i+1, nums, output, v);

        // Exclude the current number from the subset (undo previous step)
        output.pop_back();
        subsetHelper(i+1, nums, output, v);
    }

public:
    // Main function to generate all possible subsets
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;  // To store all subsets
        vector<int> output;       // Temporary vector to store current subset

        // Start the recursive function from the first number
        subsetHelper(0, nums, output, ans);

        return ans;
    }
};
