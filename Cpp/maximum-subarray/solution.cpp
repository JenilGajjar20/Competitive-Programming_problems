#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int maxEndingHere = nums[0];
    int maxSoFar = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        maxEndingHere = max(nums[i], maxEndingHere + nums[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
}

int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements: ";
        cin >> nums[i];
    }

    int result = maxSubArray(nums);
    cout << "Result: " << result << endl;
    return 0;
}