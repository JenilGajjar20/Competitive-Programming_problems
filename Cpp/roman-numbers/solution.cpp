#include <iostream>
#include <unordered_map>
#include <cctype>
using namespace std;

int romanToInt(string symbols)
{
    unordered_map<char, int> symbolsToValue = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };

    int total = 0;
    int prevValue = 0;

    for (char s : symbols)
    {
        int value = symbolsToValue[s];
        total += value;

        // If the value is greater than the previous value then we need to decrease the value of total.

        // eg:-> if input is 'CM' in roman, then initially the value of 'total' will be '100' as 'C' = 100 and the 'prevValue' will be assigned the value '100'. However, in the second iteration, the value of 'total' will be '100 + 1000' i.e. 'C' and 'M'. So, the 'value' will be greater than 'prevValue', and 'total = total - 2 * prevValue' i.e. 'total = 1100 - 2 * 100' which will be equal to '900'.

        if (value > prevValue)
            total -= 2 * prevValue;

        prevValue = value;
    }

    return total;
}

int main()
{
    string romanValue;
    cout << "Enter roman numeral: ";
    cin >> romanValue;

    // Converting the roman value to uppercase.
    for (char &c : romanValue)
        c = toupper(c);

    int result = romanToInt(romanValue);
    cout << "Roman Number: " << romanValue << " is equal to " << result << endl;

    return 0;
}