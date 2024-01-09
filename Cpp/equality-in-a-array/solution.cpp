#include <iostream>
#include <vector>
#include <map>
using namespace std;

int equalizeArray(vector<int> arr)
{
    map<int, int> mp;
    int mx = 0;
    for (int el : arr)
    {
        mp[el]++;
        if (mp[el] > mx)
            mx = mp[el];
    }
    return arr.size() - mx;
}

int main()
{
    int n;
    cout << "Size: ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements: ";
        cin >> arr[i];
    }

    int result = equalizeArray(arr);
    cout << "Result: " << result << endl;

    return 0;
}