#include <iostream>
using namespace std;

void mergeString(string s1, string s2)
{
    cout << "into the function" << endl;
    string result = "";
    int i;
    for (i = 0; i < s1.length() || i < s2.length(); i++)
    {
        if (i < s1.length())
            result += s1[i];

        if (i < s2.length())
            result += s2[i];
    }
}

int main()
{
    string s1 = "jenil";
    string s2 = "gajjar";
    mergeString(s1, s2);
    return 0;
}