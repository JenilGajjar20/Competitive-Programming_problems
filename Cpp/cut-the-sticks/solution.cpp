#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> cutTheSticks(vector<int> arr)
{
    // Sort the elements
    sort(arr.begin(), arr.end());

    vector<int> result(1, arr.size());
    for (int i = 1; i < arr.size(); i++)
    {
        // Check if the element is equal to the next element
        if (arr[i - 1] != arr[i])
            result.push_back(arr.size() - i);
    }

    return result;
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

    vector<int> result = cutTheSticks(arr);
    for (int r : result)
        cout << "Result: " << r << endl;

    return 0;
}