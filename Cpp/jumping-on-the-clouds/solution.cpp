#include <iostream>
#include <vector>
using namespace std;

int jumpingOnClouds(vector<int> c, int k)
{
    int e = 100; // Initial Energy(e)
    int i = 0;   // Initial starting position

    do
    {
        i = (i + k) % c.size(); // Calculate the next position in the array
        e -= 1;

        // Check if the value in the array is `1 (thunderheads)`.
        if (c[i] == 1)
            e -= 2;
    } while (i != 0);

    return e;
}

int main()
{
    int n;
    cout << "Enter number of Clouds: ";
    cin >> n;

    vector<int> c(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter types of cloud: ";
        cin >> c[i];
    }

    int k;
    cout << "Enter length of one jump: ";
    cin >> k;

    int result = jumpingOnClouds(c, k);
    cout << "Result: " << result << endl;

    return 0;
}