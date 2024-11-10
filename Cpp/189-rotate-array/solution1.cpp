class Solution {
public:
    // TC: O(n)
    // SC: O(n)
    void rotate(vector<int>& nums, int k) {
        // Get the size of the 'nums' vector
        int n = nums.size();

        // Create a new vector 'ans' to store the rotated values
        vector<int> ans(n);

        // Iterate over the 'nums' vector
        for(int i=0; i<n; i++){
            // For each number in 'nums', find its new position after rotation
            // The new position is determined by '(i+k)%n'
            // This ensures the rotation wraps around if 'k' is larger than 'n'
            ans[(i+k)%n] = nums[i];
        }

        // Update the original 'nums' vector with the rotated values from 'ans'
        nums = ans;
    }
};
