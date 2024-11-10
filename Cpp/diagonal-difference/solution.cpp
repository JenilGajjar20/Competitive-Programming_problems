#include <iostream>
using namespace std;

int diagonalDiff(int arr[100][100], int n)
{
    int ltr = 0;
    int rtl = 0;

    for (int i = 0; i < n; i++)
    {
        ltr += arr[i][i];
        rtl += arr[i][n - 1 - i];
    }

    return abs(ltr - rtl);
}

int main()
{
    int n;
    cout << "Size: ";
    cin >> n; // Take the size of the matrix

    int arr[100][100];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Row " << i + 1 << ": ";
            cin >> arr[i][j];
        }
    }

    int result = diagonalDiff(arr, n);
    cout << "Result: " << result << endl;

    return 0;
}