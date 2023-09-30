#include <iostream>
using namespace std;

string appendAndDelete(string s, string t, int k)
{
    // Length of the common prefix
    int commonLength = 0;

    // Find the length of the common prefix
    while (commonLength < s.length() && commonLength < t.length() && s[commonLength] == t[commonLength])
        commonLength++;

    // Calculate the total operations needed to delete characters from s and append characters from t
    int totalOperations = s.length() - commonLength + t.length() - commonLength;

    // Check if it's possible to reach the desired string t with exactly k operations
    if (k >= s.length() + t.length() || (k >= totalOperations && (k - totalOperations) % 2 == 0) || k >= s.length() + t.length() - 2 * commonLength && (k - s.length() - t.length() + 2 * commonLength) % 2 == 0)
        return "Yes";
    else
        return "No";
}

int main()
{
    string s, t;

    cout << "Enter initial string: ";
    cin >> s;

    cout << "Enter desired string: ";
    cin >> t;

    int k;
    cout << "Enter exact number of operations: ";
    cin >> k;

    string r = appendAndDelete(s, t, k);
    cout << r << endl;
    return 0;
}