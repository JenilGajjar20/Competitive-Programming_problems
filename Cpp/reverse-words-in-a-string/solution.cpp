#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string reverseWords(string s)
{
    istringstream iss(s);
    vector<string> words;

    while (iss >> s)
        words.push_back(s);

    reverse(words.begin(), words.end());

    string result;
    for (string word : words)
        result += word + " ";

    if (!result.empty())
        result.pop_back();

    return result;
}

int main()
{
    string s = "hello world";

    cout << reverseWords(s);

    return 0;
}