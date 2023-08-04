#include <iostream>
using namespace std;

int binoCoff(int l, int k)
{
    int res = 1;
    if (k > l - k)
        k = l - k;

    for (int i = 0; i < k; i++)
    {
        res *= (l - i);
        res /= (i + 1);
    }
    return res;
}

void pascalTriangle(int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++) // Iterate through every line of the triangle.
    {
        for (j = 0; j <= i; j++) // Every line number is equal to the number of intergers.
        {
            cout << " " << binoCoff(i, j);
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    cout << "Enter number of rows: ";
    cin >> n; // Taking n (number of rows) as an input.
    pascalTriangle(n);
    return 0;
}