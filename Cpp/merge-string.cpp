/*
You are given two strings word1 and word2. Merge the strings by adding letters in alternating order, starting with word1. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return the merged string.
*/

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