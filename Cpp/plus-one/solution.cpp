#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int> &digits)
{
    int i;
    int size = digits.size();

    for (i = size - 1; i >= 0; i--)
    {
        // Check if the value equal 9.
        if (digits[i] == 9)
            digits[i] = 0;
        // Check if the value id less than 9, then increment that value by 1.
        else
        {
            digits[i]++;
            return digits;
        }
    }

    digits.insert(digits.begin(), 1);
    return digits;
}

int main()
{
    vector<int> digits = {9};

    vector<int> result = plusOne(digits);

    for (int num : result)
        cout << "Num: " << num << endl;

    return 0;
}