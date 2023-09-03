#include <iostream>
using namespace std;

int reverseDays(int day)
{
    int reversedNumber = 0;
    while (day > 0)
    {
        reversedNumber = reversedNumber * 10 + day % 10;
        day /= 10;
    }
    return reversedNumber;
}

int beautifulDays(int i, int j, int k)
{
    int beautifulDaysCount = 0;

    for (int days = i; days <= j; days++)
    {
        int reverse = reverseDays(days);
        int difference = abs(days - reverse);

        if (difference % k == 0)
            beautifulDaysCount++;
    }

    return beautifulDaysCount;
}

int main()
{
    int i, j, k;
    cout << "Enter the starting day: ";
    cin >> i;

    cout << "Enter the ending day: ";
    cin >> j;

    cout << "Enter the divisor: ";
    cin >> k;

    int result = beautifulDays(i, j, k);
    cout << "Result: " << result << endl;
    return 0;
}