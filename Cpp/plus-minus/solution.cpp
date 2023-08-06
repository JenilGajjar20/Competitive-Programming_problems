#include <iostream>
#include <iomanip>
using namespace std;

int plusMinus(int arr[], int n)
{
    int posCount = 0;
    int negCount = 0;
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
            posCount++;
        else if (arr[i] < 0)
            negCount++;
        else
            zeroCount++;
    }

    // Converting the value from it's original type to a 'double' using 'static_cast<double>'
    double posRatio = static_cast<double>(posCount) / n;
    double negRatio = static_cast<double>(negCount) / n;
    double zeroRatio = static_cast<double>(zeroCount) / n;

    // Using 'fixed' manipulator in conjuction with 'setprecision(6)' to ensure that the numbers are displayed with a fixed number of decimal places.
    cout << "Positive Ratio: " << fixed << setprecision(6) << posRatio << endl;
    cout << "Negative Ratio: " << fixed << setprecision(6) << negRatio << endl;
    cout << "Zero Ratio: " << fixed << setprecision(6) << zeroRatio << endl;
}

int main()
{
    int n;
    cout << "Size: ";
    cin >> n; // Taking size of an array.

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cout << "Array value: ";
        cin >> arr[i]; // Adding values to the array.
    }

    plusMinus(arr, n);
    return 0;
}