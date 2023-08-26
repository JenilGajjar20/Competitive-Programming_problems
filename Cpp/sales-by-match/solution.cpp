#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int sockMerchant(vector<int> arr, int n)
{
    int pairs = 0;
    unordered_map<int, int> sockCount;

    for (int count : arr)
        sockCount[count]++;

    for (auto entry : sockCount)
        pairs += entry.second / 2;

    return pairs;
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter color of each sock: ";
        cin >> arr[i];
    }

    int result = sockMerchant(arr, size);
    cout << "Number of pairs: " << result << endl;
    return 0;
}