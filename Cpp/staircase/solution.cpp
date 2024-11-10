#include <iostream>
using namespace std;

int staircase(int n)
{
    int i, j, k;
    for (i = 0; i < n; i++) // looping over number of rows
    {
        for (j = 0; j < n - i - 1; j++) // printing spaces
            cout << " ";

        for (k = i; k >= 0; k--) // printing #
            cout << "#";

        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Input Size: ";
    cin >> n; // Taking size of an array.

    staircase(n);
    return 0;
}