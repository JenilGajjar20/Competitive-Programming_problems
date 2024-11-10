#include <iostream>
#include <algorithm>
using namespace std;

void gcdOfStrings(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();

    if (s1 + s2 != s2 + s1)
        return;

    cout << "String is: " << s1.substr(0, std::__gcd(n, m));
}

int main()
{
    string str1 = "ABCABC";
    string str2 = "ABC";
    gcdOfStrings(str1, str2);
    return 0;
}