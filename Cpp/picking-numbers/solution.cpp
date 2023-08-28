#include <iostream>
#include <vector>
using namespace std;

int pickingNumbers(vector<int> arr)
{
    vector<int> count(100, 0);

    for (int num : arr)
        count[num]++;

    int maxLength = 0;

    for (int i = 1; i < 100; i++)
        maxLength = max(maxLength, count[i] + count[i - 1]);

    return maxLength;
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements: ";
        cin >> arr[i];
    }

    int result = pickingNumbers(arr);
    cout << "Result: " << result << endl;

    return 0;
}