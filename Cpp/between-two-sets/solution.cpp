#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b)
{
    while (b)
    {
        a = a % b;
        swap(a, b);
    }
    return a;
}

int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int getTotalX(vector<int> a, vector<int> b)
{
    int lcm_a = a[0];
    for (int i = 1; i < a.size(); i++)
        lcm_a = lcm(lcm_a, a[i]);

    int gcd_b = b[0];
    for (int i = 0; i < b.size(); i++)
        gcd_b = gcd(gcd_b, b[i]);

    int count = 0;
    int multiple = lcm_a;

    while (multiple <= gcd_b)
    {
        if (gcd_b % multiple == 0)
            count++;

        multiple += lcm_a;
    }

    return count;
}

int main()
{
    int n, m;

    cout << "Number of Elements (n): ";
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements a(n): ";
        cin >> a[i];
    }

    cout << "Number of Elements (m): ";
    cin >> m;

    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cout << "Enter elements b(m): ";
        cin >> b[i];
    }

    int result = getTotalX(a, b);
    cout << "Result: " << result << endl;

    return 0;
}