class Solution {
public:
    /**
     * @brief Computes the h-index for a researcher based on their citation counts.
     * 
     * The h-index is defined as the maximum number `h` such that the researcher has at least
     * `h` papers with at least `h` citations each.
     * 
     * @param citations A vector of integers where each element represents the number of citations a paper received.
     * @return The h-index, which is the maximum value h such that the researcher has at least h papers with h or more citations.
     */
    int hIndex(vector<int>& citations) {
        // Step 1: Sort the citations in non-decreasing order.
        sort(citations.begin(), citations.end());
        
        int n = citations.size();  // Number of papers
        int ans = 0;  // Variable to store the maximum h-index found
        
        // Step 2: Iterate through possible h-index values from 0 to n (number of papers)
        for (int i = 0; i <= n; ++i) {
            // Step 3: Find the first position where the citation count is at least `i`
            auto it = lower_bound(citations.begin(), citations.end(), i);
            
            // Calculate how many papers have citation count >= `i`
            int rem = n - (it - citations.begin());
            
            // Step 4: If the number of papers with citation count >= `i` is at least `i`,
            // then `i` could be a valid h-index, so update `ans`.
            if (rem >= i) {
                ans = max(ans, i);
            }
        }
        
        // Step 5: Return the maximum h-index found
        return ans;
    }
};
