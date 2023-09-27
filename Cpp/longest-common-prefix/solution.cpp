#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());
    string ans;
    for(int i = 0; i < min(strs[0].size(), strs[strs.size() - 1].size()); i++) {
            if(strs[0][i] == strs[strs.size() - 1][i]) ans.push_back(strs[0][i]);
            else 
                break;
        }
    return ans;
}

int main()
{
    vector<string> strs = {"flowers", "flow", "flight"};
    string result = longestCommonPrefix(strs);

    cout << "Longest Common Prefix: " << result << endl;
    return 0;
}
