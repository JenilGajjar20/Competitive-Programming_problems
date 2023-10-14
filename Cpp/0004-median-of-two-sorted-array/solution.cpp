class Solution
{
public:
    double findMedianSortedArrays(vector<int> &a, vector<int> &b)
    {
        int n1 = a.size(), n2 = b.size();
        // Check if the size of array 'a' is greater than 'b'; if so, swap them
        if (n1 > n2)
            return findMedianSortedArrays(b, a);

        int n = n1 + n2;              // Total length of the combined arrays
        int left = (n1 + n2 + 1) / 2; // Length of the left half for median calculation

        // Apply binary search to find the median
        int low = 0, high = n1;
        while (low <= high)
        {
            int mid1 = (low + high) >> 1; // Middle index of 'a'
            int mid2 = left - mid1;       // Middle index of 'b'

            // Calculate values for the elements around the partition
            int l1 = INT_MIN, l2 = INT_MIN;
            int r1 = INT_MAX, r2 = INT_MAX;
            if (mid1 < n1)
                r1 = a[mid1];
            if (mid2 < n2)
                r2 = b[mid2];
            if (mid1 - 1 >= 0)
                l1 = a[mid1 - 1];
            if (mid2 - 1 >= 0)
                l2 = b[mid2 - 1];

            // Check if we have found the correct partition
            if (l1 <= r2 && l2 <= r1)
            {
                // Calculate the median based on the partition
                if (n % 2 == 1)
                    return max(l1, l2); // Odd total length
                else
                    return ((double)(max(l1, l2) + min(r1, r2))) / 2.0; // Even total length
            }

            // If the partition is not correct, eliminate the halves accordingly
            else if (l1 > r2)
                high = mid1 - 1; // Adjust the right boundary
            else
                low = mid1 + 1; // Adjust the left boundary
        }
        return 0.0; // Dummy statement (this should never be reached)
    }
};
