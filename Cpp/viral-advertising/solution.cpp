#include <iostream>
#include <cmath>
using namespace std;

int viralAdvertising(int n)
{
    int shared = 5, likes = 0, cumulative = 0;

    for (int days = 1; days <= n; days++)
    {
        likes = floor(shared / 2);
        cumulative += likes;
        shared = likes * 3;
    }

    return cumulative;
}

int main()
{
    int n;
    cout << "Number of days: ";
    cin >> n;

    int result = viralAdvertising(n);
    cout << "Result: " << result << endl;

    return 0;
}