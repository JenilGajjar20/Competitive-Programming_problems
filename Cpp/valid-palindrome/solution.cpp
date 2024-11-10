#include <iostream>
#include <algorithm>
using namespace std;

bool isPalindrome(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {
        if (!isalnum(s[left]))
            left++;

        else if (!isalnum(s[right]))
            right--;

        else
        {
            if (s[left] != s[right])
                return false;

            left++;
            right--;
        }
    }
    return true;
}

int main()
{
    string s = "A man, a plan, a canal: Panama";
    bool isValid = isPalindrome(s);
    if (isValid)
    {
        cout << "The string is valid" << endl;
    }
    else
    {
        cout << "The string is not valid" << endl;
    }
    return 0;
}