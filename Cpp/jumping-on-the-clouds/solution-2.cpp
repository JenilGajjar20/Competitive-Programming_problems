#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c, int n)
{
    int jumps = 0; // Initialize number of jumps
    int i = 0;     // Initialize current position index

    // Continue until the last cloud is reached
    while (i < n - 1)
    {
        // Check if jumping 2 steps is possible and safe
        if (i + 2 < n && c[i + 2] == 0)
            i += 2;
        else
            i += 1;

        // Increment the jump count
        jumps++;
    }

    return jumps;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> clouds(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter binary values: ";
        cin >> clouds[i];
    }

    int result = jumpingOnClouds(clouds, n);
    cout << "Minimum number of jumps: " << result << endl;

    return 0;
}