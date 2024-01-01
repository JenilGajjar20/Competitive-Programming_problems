#include <iostream>
using namespace std;

bool isSubsequence(string s, string t)
{
    int i = 0, j = 0;

    while (i < s.length() && j < t.length())
    {
        if (s[i] == t[j])
            i++;

        j++;
    }
    return i == s.length();
}

int main()
{
    string s = "abc";
    string t = "ahbgdc";

    bool result = isSubsequence(s, t);
    cout << "Result: " << result << endl;

    return 0;
}