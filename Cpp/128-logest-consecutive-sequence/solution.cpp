class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // Optimization for input and output operations
        ios::sync_with_stdio(0);
        cin.tie(0);

        // Get the size of the input vector
        int n = nums.size();

        // If there are 0 or 1 elements, return the size as the result
        if (n == 0 || n == 1)
            return n;

        // Create a vector to store the length of consecutive subsequences, initialize all to 1
        std::vector<int> res(n, 1);

        // Sort the input vector in ascending order
        std::sort(nums.begin(), nums.end());

        // Loop through the sorted vector to find consecutive subsequences
        for (int i = 1; i < n; i++) {
            // Check if the current and previous elements are consecutive
            if (nums[i - 1] == nums[i] - 1)
                res[i] = res[i - 1] + 1;
            // Check if the current and previous elements are the same
            else if (nums[i] - nums[i - 1] == 0)
                res[i] = res[i - 1];
        }

        // Find and return the maximum value in the 'res' vector, which represents the longest consecutive subsequence
        return *max_element(res.begin(), res.end());
    }
};
