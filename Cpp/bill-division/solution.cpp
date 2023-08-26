#include <iostream>
#include <vector>
using namespace std;

void bonAppetit(vector<int> bill, int k, int b)
{
    int totalCost = 0;
    for (int i = 0; i < bill.size(); i++)
    {
        // Check if the index value equals the int value of k(item that Anna did not eat).
        if (i != k)
            totalCost += bill[i];
    }

    // Calculate the share of Anna
    int annaShare = totalCost / 2;

    // Check if the actual cost equals the charged cost.
    if (b == annaShare)
        cout << "Bon Appetite" << endl;
    else
        cout << "Amount Anna was overcharged: " << b - annaShare << endl;
}

int main()
{
    int size, k, b;

    cout << "Enter size: ";
    cin >> size;

    vector<int> bill(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter price: ";
        cin >> bill[i];
    }

    cout << "Enter item number that Anna did not eat: ";
    cin >> k;

    cout << "Enter amount of money that brian charged Anna: ";
    cin >> b;

    bonAppetit(bill, k, b);
    return 0;
}