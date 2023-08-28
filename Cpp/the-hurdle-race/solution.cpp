#include <iostream>
#include <vector>
using namespace std;

int hurdleRace(vector<int> height, int k)
{
    int maxHurdle = 0;
    int doses;
    for (int i = 0; i < height.size() - 1; i++)
    {
        maxHurdle = max(height[i], maxHurdle);
        doses = maxHurdle - k;
    }

    return doses > 0 ? doses : 0;
}

int main()
{
    int size;
    cout << "Size of an array: ";
    cin >> size;

    vector<int> height(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter height of each hurdle: ";
        cin >> height[i];
    }

    int k;
    cout << "Enter height of the character: ";
    cin >> k;

    int result = hurdleRace(height, k);
    cout << "Result: " << result << endl;

    return 0;
}