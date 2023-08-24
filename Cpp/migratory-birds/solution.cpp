#include <iostream>
#include <vector>
#include <map>
using namespace std;

int migratoryBirds(vector<int> &arr)
{
    // map<int, int> birdCount;

    // for (int bird : arr)
    //     birdCount[bird]++;

    // int maxCount = 0;
    // int mostFrequentBirds = 1;

    // for (const auto &entry : birdCount)
    // {
    //     cout << "Entry First: " << entry.first << endl;
    //     cout << "Entry second: " << entry.second << endl;
    //     if (entry.second > maxCount)
    //     {
    //         maxCount = entry.second;
    //         mostFrequentBirds = entry.first;
    //     }
    // }

    // return mostFrequentBirds;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements: ";
        cin >> arr[i];
    }

    int result = migratoryBirds(arr);
    cout << "Result: " << result << endl;
    return 0;
}