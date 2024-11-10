#include <iostream>
using namespace std;

int sqrt(int x)
{
    if (x == 0 || x == 1)
        return x;

    int left = 0;
    int right = x;
    int result = 0;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (mid <= x / mid)
        {
            result = mid;
            left = mid + 1;
        }
        else
            right = mid - 1;
    }

    return result;
}

int main()
{
    int x;
    cout << "Enter number: ";
    cin >> x;

    int sqrtX = sqrt(x);
    cout << "sqrtX: " << sqrtX << endl;
    return 0;
}