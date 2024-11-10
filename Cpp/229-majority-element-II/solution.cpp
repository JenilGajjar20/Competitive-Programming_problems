class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0, cnt2 = 0, elem1 = 0, elem2 = 0;

        // First Pass: Find potential majority elements (at most 2)
        for (int i = 0; i < n; i++) {
            if (cnt1 == 0 && nums[i] != elem2) {
                // If cnt1 is zero and the current number is not equal to elem2, initialize elem1 and cnt1.
                cnt1 = 1;
                elem1 = nums[i];
            } else if (cnt2 == 0 && nums[i] != elem1) {
                // If cnt2 is zero and the current number is not equal to elem1, initialize elem2 and cnt2.
                cnt2 = 1;
                elem2 = nums[i];
            } else if (nums[i] == elem1) {
                // If the current number is equal to elem1, increment cnt1.
                cnt1++;
            } else if (nums[i] == elem2) {
                // If the current number is equal to elem2, increment cnt2.
                cnt2++;
            } else {
                // If the current number is different from both elem1 and elem2, decrement cnt1 and cnt2.
                cnt1--;
                cnt2--;
            }
        }

        cnt1 = cnt2 = 0;

        // Second Pass: Count occurrences of potential majority elements
        for (int i = 0; i < n; i++) {
            if (nums[i] == elem1) {
                cnt1++;
            }
            if (nums[i] == elem2) {
                cnt2++;
            }
        }

        vector<int> ans;

        // Check if the potential majority elements are actual majority elements.
        if (elem1 != elem2) {
            if (cnt1 > (n / 3)) {
                ans.push_back(elem1);
            }
            if (cnt2 > (n / 3)) {
                ans.push_back(elem2);
            }
        } else {
            if (cnt1 > (n / 3)) {
                ans.push_back(elem1);
            }
        }

        return ans;
    }
};
