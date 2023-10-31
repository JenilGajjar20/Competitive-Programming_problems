#include <iostream>
#include <cmath>
using namespace std;

int squares(int a, int b)
{
    int count = 0;

    // Find sqrt of a - 1
    int sqrt_a = sqrt(a - 1);

    // Find sqrt of b
    int sqrt_b = sqrt(b);

    // Get the difference between both
    count = sqrt_b - sqrt_a;

    return count;
}

int main()
{
    int q;
    cout << "Test Cases: ";
    cin >> q;

    while (q--)
    {
        int a, b;

        cout << "a: ";
        cin >> a;

        cout << "b: ";
        cin >> b;

        int count = squares(a, b);
        cout << "Count: " << count << endl;
    }

    return 0;
}