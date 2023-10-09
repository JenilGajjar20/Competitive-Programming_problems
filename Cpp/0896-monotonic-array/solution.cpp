class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool increse = true;
    bool dicr = true;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] < nums[i + 1])
            dicr = false;
        if (nums [i] > nums[i + 1])
            increse = false;
    }
    return increse || dicr;
    }
};