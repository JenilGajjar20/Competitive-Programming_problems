#include <iostream>
using namespace std;

int aVeryBigSum(int ar[], int n)
{
    long sum = 0;
    for (int i = 0; i < n; i++)
        sum += ar[i];

    return sum;
}

int main()
{
    int n;
    cout << "Size: ";
    cin >> n; // Take total number of inputs

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Input Value: ";
        cin >> ar[i];
    }

    long result = aVeryBigSum(ar, n);
    cout << "Result: " << result << endl;
    return 0;
}