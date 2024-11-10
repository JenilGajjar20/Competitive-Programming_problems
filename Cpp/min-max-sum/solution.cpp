#include <iostream>
#include <algorithm>
using namespace std;

int minMaxSum(int arr[], int n)
{
    // Sorting the array integers
    sort(arr, arr + n);

    long max = 0;
    long min = 0;
    int i;
    for (i = 0; i < n - 1; i++)
        min += arr[i];

    for (i = 1; i < n; i++)
        max += arr[i];

    cout << min << " " << max << endl;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n; // Taking size as input

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Input value: ";
        cin >> arr[i];
    }

    minMaxSum(arr, n);
    return 0;
}