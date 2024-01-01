#include <iostream>
#include <vector>
using namespace std;

double findMaxAverage(vector<int> &nums, int k)
{
    int maxSum = 0, currSum = 0;

    int n = nums.size();

    for (int i = 0; i < k; i++)
        currSum += nums[i];

    maxSum = currSum;

    // for (int i = k; i < n; i++)
    // {
    //     currSum += nums[i] - nums[i - k];
    // }
}

int main()
{
    int size, k;

    cout << "Size: ";
    cin >> size;

    vector<int> nums(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements: ";
        cin >> nums[i];
    }

    cout << "Value of k: ";
    cin >> k;

    double result = findMaxAverage(nums, k);
    // cout << "Result: " << result << endl;

    return 0;
}