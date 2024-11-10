#include <iostream>
using namespace std;

int birthdayCakeCandles(int arr[], int n)
{
    int maxHeight = 0;
    int count = 0;

    int i;
    for (i = 0; i < n; i++)
    {
        // Checking if value of any integers greater than maxHeight.
        // If the value is higher then assign that value to the 'maxHeight' variable.
        if (arr[i] > maxHeight)
            maxHeight = arr[i];
    }

    for (i = 0; i < n; i++)
    {
        // Checking if the any value inside the array is equal to 'maxHeight' variable.
        // If so, then increment the 'count' variable by 1 to get number of count the highest value is repeated inside the array.
        if (arr[i] == maxHeight)
            count++;
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n; // Taking size as input

    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Inputs: ";
        cin >> arr[i];
    }

    int result = birthdayCakeCandles(arr, n);
    cout << "Result: " << result << endl;
    return 0;
}