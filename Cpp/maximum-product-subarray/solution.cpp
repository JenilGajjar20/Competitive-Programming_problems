/*
 * Approach:
 * 
 * The goal is to find the maximum product of any contiguous subarray within the given array of integers.
 * To achieve this, we will follow these steps:
 * 
 * 1. **Initialization**:
 *    - Create a 2D vector `data` to hold subarrays that are split by zeros.
 *    - Initialize a variable `ans` to keep track of the maximum product, starting with the smallest integer value (`INT_MIN`).
 * 
 * 2. **Splitting the Array**:
 *    - Iterate through the input array `nums`:
 *        - When encountering a zero, start a new subarray and reset the maximum product to zero.
 *        - If the current number is not zero, add it to the last subarray in `data`.
 * 
 * 3. **Calculating Maximum Product for Each Subarray**:
 *    - For each non-empty subarray in `data`:
 *        - Initialize variables to keep track of the number of negative numbers, the indices of the first and last negative numbers, and the size of the subarray.
 *        - Create a vector `prods` to store the prefix products of the current subarray.
 *        - Iterate through the subarray to fill `prods` and count the negatives:
 *            - If a number is negative, update the first and last negative indices and increment the negative count.
 * 
 * 4. **Updating the Maximum Product**:
 *    - The product of the entire subarray is compared to `ans` to potentially update the maximum product.
 *    - If there is an odd number of negative numbers, consider two scenarios:
 *        - Exclude the last negative number and update `ans` if the resulting product is higher.
 *        - Exclude the first negative number if it's not the only element and update `ans` accordingly.
 */


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size(); // Get the size of the input array
        vector<vector<int>> data; // 2D vector to hold subarrays split by zeros
        data.push_back(vector<int>()); // Initialize the first subarray
        int ans = INT_MIN; // Initialize the answer to the smallest integer
        
        // Loop through the input array to split it by zeros
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                data.push_back(vector<int>()); // Start a new subarray when zero is encountered
                ans = 0; // Reset the maximum product to 0 since a zero product exists
            } else {
                data.back().push_back(nums[i]); // Add the current number to the last subarray
            }
        }
        
        // Calculate the maximum product for each non-empty subarray
        for(vector<int> vec : data) {
            if(vec.empty()) {
                continue; // Skip empty subarrays
            }
            int negs = 0; // Count of negative numbers in the current subarray
            int first_neg = -1; // Index of the first negative number
            int last_neg = -1; // Index of the last negative number
            int N = vec.size(); // Size of the current subarray
            vector<int> prods(N); // Vector to store prefix products
            
            // Calculate prefix products for the current subarray
            for(int i = 0; i < N; i++) {
                prods[i] = vec[i]; // Initialize the prefix product with the current number
                if(i) {
                    prods[i] *= prods[i - 1]; // Calculate the prefix product
                }

                // Check if the current number is negative
                if(vec[i] < 0) {
                    if(first_neg == -1) {
                        first_neg = i; // Record the first negative index
                    }
                    last_neg = i; // Update the last negative index
                    negs++; 
                }
            }
            
            // Update the maximum product found so far
            ans = max(ans, prods[N - 1]); // Compare with the product of the entire subarray
            
            // If there's an odd number of negative numbers, consider removing one
            // If even, the maximum product is already calculated
            if((negs & 1) == 0) {
                continue;
            }
            
            // Consider removing the last negative number
            if(last_neg) {
                ans = max(ans, prods[last_neg - 1]);
            }
            // Consider removing the first negative number
            if(first_neg < N - 1) {
                ans = max(ans, prods[N - 1] / prods[first_neg]);
            }
        }
        return ans;
    }
};
