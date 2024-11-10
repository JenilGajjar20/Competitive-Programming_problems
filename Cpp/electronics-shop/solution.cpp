#include <iostream>
#include <vector>
using namespace std;

int spentMoney(vector<int> keyboards, vector<int> drives, int b)
{
    int totalAmount = -1;

    for (int i = 0; i < keyboards.size(); i++)
    {
        for (int j = 0; j < drives.size(); j++)
        {
            int totalCost = keyboards[i] + drives[j];
            if (totalCost <= b && totalCost > totalAmount)
                totalAmount = totalCost;
        }
    }

    return totalAmount;
}

int main()
{
    int n, m;
    cout << "Enter size n: ";
    cin >> n;

    cout << "Enter size m: ";
    cin >> m;

    vector<int> keyboards(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter keyboard price: ";
        cin >> keyboards[i];
    }

    vector<int> drives(m);
    for (int i = 0; i < m; i++)
    {
        cout << "Enter drive price: ";
        cin >> drives[i];
    }

    int b;
    cout << "Enter your budget: ";
    cin >> b;

    int result = spentMoney(keyboards, drives, b);
    cout << "Maximum spent: " << result << endl;

    return 0;
}