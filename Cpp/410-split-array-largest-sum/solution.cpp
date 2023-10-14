class Solution {
    // Helper function to count the number of splits possible for a given maxsum
    int possiblesplit(vector<int>& arr, int maxsum){
        int subarraysum = 0, split = 1;
        for(int i : arr){
            if(subarraysum + i <= maxsum){
                subarraysum += i;
            }
            else{
                split += 1;
                subarraysum = i;
            }
        }
        return split;
    }

public:
    // Main function to split the array into 'k' subarrays such that the maximum sum of any subarray is minimized
    int splitArray(vector<int>& nums, int k) {
        // Initialize the search range for binary search
        int low = *max_element(nums.begin(), nums.end()); // Minimum possible maximum sum
        int high = accumulate(nums.begin(), nums.end(), 0); // Maximum possible maximum sum (sum of all elements)

        // Binary search to find the minimum maximum sum
        while(low <= high){
            int mid = (low + high) / 2;
            // If the current mid value allows for more splits than 'k', increase the minimum possible maximum sum
            if(possiblesplit(nums, mid) > k){
                low = mid + 1;
            }
            // If the current mid value allows for 'k' or fewer splits, decrease the maximum possible maximum sum
            else{
                high = mid - 1;
            }
        }
        // Return the lowest possible maximum sum
        return low;
    }
};
