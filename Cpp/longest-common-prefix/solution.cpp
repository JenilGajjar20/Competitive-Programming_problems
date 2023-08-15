#include <iostream>
#include <vector>
#include <climits>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    if (strs.empty())
        return "";

    int minLength = INT_MAX;
    for (const string &str : strs)
        minLength = min(minLength, static_cast<int>(str.length()));

    string commonPrefix = "";
    for (int i = 0; i < minLength; i++)
    {
        char currentChar = strs[0][i];
        for (int j = 1; j < strs.size(); j++)
        {
            if (strs[j][i] != currentChar)
                return commonPrefix;
        }
        commonPrefix += currentChar;
    }

    return commonPrefix;
}

int main()
{
    vector<string> strs = {"flowers", "flow", "flight"};
    string result = longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}