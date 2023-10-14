class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        n1, n2 = len(nums1), len(nums2)
        # Check if the size of nums1 is greater than nums2; if so, swap them
        if n1 > n2:
            return self.findMedianSortedArrays(nums2, nums1)

        n = n1 + n2  # Total length of the combined arrays
        left = (n1 + n2 + 1) // 2  # Length of the left half for median calculation

        # Apply binary search to find the median
        low, high = 0, n1
        while low <= high:
            mid1 = (low + high) // 2  # Middle index of nums1
            mid2 = left - mid1  # Middle index of nums2

            # Calculate values for the elements around the partition
            l1 = float('-inf')
            l2 = float('-inf')
            r1 = float('inf')
            r2 = float('inf')
            if mid1 < n1:
                r1 = nums1[mid1]
            if mid2 < n2:
                r2 = nums2[mid2]
            if mid1 - 1 >= 0:
                l1 = nums1[mid1 - 1]
            if mid2 - 1 >= 0:
                l2 = nums2[mid2 - 1]

            # Check if we have found the correct partition
            if l1 <= r2 and l2 <= r1:
                # Calculate the median based on the partition
                if n % 2 == 1:
                    return max(l1, l2)  # Odd total length
                else:
                    return (max(l1, l2) + min(r1, r2)) / 2.0  # Even total length

            # If the partition is not correct, eliminate the halves accordingly
            elif l1 > r2:
                high = mid1 - 1  # Adjust the right boundary
            else:
                low = mid1 + 1  # Adjust the left boundary

        return 0.0  # Dummy statement (this should never be reached)
