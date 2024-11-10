class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // Initialize two pointers, l (low) and h (high).
        int l = 0, h = arr.size() - 1;

        // Binary search loop to find the kth missing positive integer.
        while (l <= h) {
            // Calculate the middle index.
            int mid = (l + h) / 2;

            // Calculate the number of missing positive integers up to the middle element.
            int missing = arr[mid] - (mid + 1);

            // If the number of missing positive integers up to mid is less than k,
            // move the left pointer (l) to mid + 1.
            if (missing < k) {
                l = mid + 1;
            }
            // Otherwise, move the right pointer (h) to mid - 1.
            else {
                h = mid - 1;
            }
        }

        // After the binary search, l will be the index where the kth missing positive integer
        // would be if it existed in the array. We add k to it to get the actual missing integer.
        return l + k;
    }
};
