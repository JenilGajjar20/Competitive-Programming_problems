#include <iostream>
using namespace std;

int divisibleSumPairs(int arr[], int n, int k)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if ((sum % k) == 0)
                count++;
        }
    }
    return count;
}

int main()
{
    int size, k;

    cout << "Enter size of an array: ";
    cin >> size;

    cout << "Enter k: ";
    cin >> k;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }

    int result = divisibleSumPairs(arr, size, k);
    cout << "Result: " << result << endl;

    return 0;
}