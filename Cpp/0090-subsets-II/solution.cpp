class Solution
{
    void subsetHelper(int i, vector<int> nums, vector<int> &output, set<vector<int>> &s)
    {
        // Base case: If we have processed all elements, insert the current output into the set and return.
        if (i == nums.size())
        {
            s.insert(output);
            return;
        }
        // Do: Include the current element in the subset.
        output.push_back(nums[i]);
        subsetHelper(i + 1, nums, output, s);
        // Undo: Remove the last added element to backtrack.
        output.pop_back();
        // Avoiding duplicates in subsets
        if (i < nums.size() && !output.empty() && output.back() == nums[i])
        {
            return;
        }
        else
        {
            // Continue to the next element without including the current one.
            subsetHelper(i + 1, nums, output, s);
        }
    }

public:
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        // Sort the input array to handle duplicates.
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> st;
        vector<int> output;
        // Start generating subsets from index 0.
        subsetHelper(0, nums, output, st);
        // Copy the subsets from the set to the answer vector.
        for (auto s : st)
            ans.push_back(s);
        return ans;
    }
};
