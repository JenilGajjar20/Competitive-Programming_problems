#include <iostream>
using namespace std;

long repeatedString(string s, int n)
{
    int count_a = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
            count_a++;
    }

    long repeat_count = n / s.length();
    long total_a_count = repeat_count * count_a;

    long remaining_chars = n % s.length();
    for (int i = 0; i < remaining_chars; i++)
    {
        if (s[i] == 'a')
            total_a_count++;
    }

    return total_a_count;
}

int main()
{
    string s;
    cout << "Enter string: ";
    cin >> s;

    int n;
    cout << "Enter n: ";
    cin >> n;

    long result = repeatedString(s, n);
    cout << "Result: " << result << endl;

    return 0;
}