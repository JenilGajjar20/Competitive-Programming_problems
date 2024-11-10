#include <iostream>
using namespace std;

int saveThePrisoner(int n, int m, int s)
{
    int lastCandy = (s + m - 1) % n;

    if (lastCandy == 0)
        lastCandy = n;

    return lastCandy;
}

int main()
{
    int t;
    cout << "Number of Test Cases: ";
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, m, s;

        cout << "Number of prisoners: ";
        cin >> n;

        cout << "Number of Sweets: ";
        cin >> m;

        cout << "Chair Number to start with: ";
        cin >> s;

        int result = saveThePrisoner(n, m, s);
        cout << "Result: " << result << endl;
    }

    return 0;
}