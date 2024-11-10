class Solution:
    def majorityElement(self, nums: List[int]) -> List[int]:
        n = len(nums)
        cnt1, cnt2, elem1, elem2 = 0, 0, 0, 0

        # First Pass: Find potential majority elements (at most 2)
        for num in nums:
            if cnt1 == 0 and num != elem2:
                # If cnt1 is zero and the current number is not equal to elem2, initialize elem1 and cnt1.
                cnt1 = 1
                elem1 = num
            elif cnt2 == 0 and num != elem1:
                # If cnt2 is zero and the current number is not equal to elem1, initialize elem2 and cnt2.
                cnt2 = 1
                elem2 = num
            elif num == elem1:
                # If the current number is equal to elem1, increment cnt1.
                cnt1 += 1
            elif num == elem2:
                # If the current number is equal to elem2, increment cnt2.
                cnt2 += 1
            else:
                # If the current number is different from both elem1 and elem2, decrement cnt1 and cnt2.
                cnt1 -= 1
                cnt2 -= 1

        cnt1, cnt2 = 0, 0

        # Second Pass: Count occurrences of potential majority elements
        for num in nums:
            if num == elem1:
                cnt1 += 1
            if num == elem2:
                cnt2 += 1

        ans = []

        # Check if the potential majority elements are actual majority elements.
        if elem1 != elem2:
            if cnt1 > (n // 3):
                ans.append(elem1)
            if cnt2 > (n // 3):
                ans.append(elem2)
        else:
            if cnt1 > (n // 3):
                ans.append(elem1)

        return ans