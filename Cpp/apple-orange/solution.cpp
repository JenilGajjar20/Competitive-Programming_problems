#include <iostream>
#include <vector>
using namespace std;

vector<int> countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges)
{
    int appleCount = 0;
    int orangeCount = 0;

    for (int apple : apples)
    {
        int position = a + apple; // Adding each apple distance to the position of the tree.

        // Check if the position is between the inclusive range.
        if (position >= s && position <= t)
        {
            appleCount++;
        }
    }

    for (int orange : oranges)
    {
        int position = b + orange; // Adding each orange distance to the position of the tree.

        // Check if the position is between the inclusive range.
        if (position >= s && position <= t)
        {
            orangeCount++;
        }
    }

    cout << "Apple Count: " << appleCount << ", Orange Count: " << orangeCount;
}

int main()
{
    int s, t, a, b, m, n;
    cout << "Select Range\n";
    cout << "s: ";
    cin >> s;
    cout << "t: ";
    cin >> t;

    cout << "Distance a: ";
    cin >> a;
    cout << "Distance b: ";
    cin >> b;

    cout << "m: ";
    cin >> m;
    cout << "n: ";
    cin >> n;

    vector<int> apples(m);
    for (int i = 0; i < m; i++)
    {
        cout << "Take m input elements: ";
        cin >> apples[i];
    }

    vector<int> oranges(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Take n input elements: ";
        cin >> oranges[i];
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);
    return 0;
}