#include <iostream>
using namespace std;

int findDigits(int n)
{
    int count = 0;
    int number = n;
    while (n > 0)
    {
        int d = n % 10;
        if (d != 0 && number % d == 0)
            count++;

        n /= 10;
    }

    return count;
}

int main()
{
    int t;
    cout << "Number of test cases: ";
    cin >> t;

    while (t--)
    {
        int n;
        cout << "Number of digits: ";
        cin >> n;

        int result = findDigits(n);
        cout << "Result: " << result << endl;
    }

    return 0;
}
