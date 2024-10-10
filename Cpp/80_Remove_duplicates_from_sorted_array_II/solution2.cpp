class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0, r = 0, count = 0; // Initialize pointers and count
        
        while (r < nums.size()) {    
            count = 1; // Reset count for each new number
            
            // Count duplicates
            while ((r + 1) < nums.size() && nums[r] == nums[r + 1]) {
                r++;
                count++;
            }
            
            // Allow at most 2 duplicates in the result
            for (int i = 0; i < min(2, count); i++) {
                nums[l] = nums[r]; // Store the allowed duplicates
                l++; // Move the left pointer
            }
            r++; // Move to the next unique number
        }
        
        return l; // Return the new length of the array
    }
};
