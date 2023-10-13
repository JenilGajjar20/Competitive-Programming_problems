class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Rotate the list 'nums' to the right by 'k' steps.

        Args:
        - nums (List[int]): List of integers to be rotated.
        - k (int): Number of steps to rotate the list.

        Returns:
        None. The list 'nums' is modified in-place.
        """
        n = len(nums)
        ans = [0] * n  # Initialize a list of zeros with size 'n'

        for i in range(n):
            ans[(i + k) % n] = nums[i]

        nums[:] = ans  # Update the original 'nums' list with rotated values
