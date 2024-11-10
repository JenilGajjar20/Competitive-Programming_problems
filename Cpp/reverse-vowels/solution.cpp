#include <iostream>
using namespace std;

string reverseVowels(string s)
{

    int left = 0;
    int right = s.length() - 1;

    string vowels = "aeiouAEIOU";

    while (left < right)
    {
        while (left < right && vowels.find(s[left]) == -1)
            left++;

        while (left < right && vowels.find(s[right]) == -1)
            right--;

        swap(s[left], s[right]);

        left++;
        right--;
    }

    return s;
}

int main()
{
    string str;
    cout << "Enter string: ";
    cin >> str;

    string result = reverseVowels(str);
    cout << "Result: " << result << endl;

    return 0;
}