class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        // Sort the vector of strings
        sort(strs.begin(), strs.end());

        // Initialize the answer string and get the first and last strings from the sorted vector
        string ans = "", fst = strs[0], lst = strs[strs.size() - 1];

        // Iterate through the characters of the first and last strings
        for (int i = 0; i < min(fst.size(), lst.size()); i++)
        {
            // If the characters at the current position are the same, add to the answer string
            if (fst[i] == lst[i])
            {
                ans += fst[i];
            }
            // If not, break out of the loop as this is where the common prefix ends
            else
            {
                break;
            }
        }

        // Return the computed common prefix
        return ans;
    }
};
