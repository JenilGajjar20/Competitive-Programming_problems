#include <iostream>
using namespace std;

string lengthOfLastWord(string s)
{
    int length = 0;
    int i = s.length() - 1;

    // Check if there is any space, skip the trailing space.
    while (i >= 0 && s[i] == ' ')
        i--;

    // Count the length of the word.
    while (i >= 0 && s[i] != ' ')
    {
        length++;
        i--;
    }

    cout << "Length of the last word: " << length << endl;
}

int main()
{
    string str = "Hello World";
    lengthOfLastWord(str);
    return 0;
}