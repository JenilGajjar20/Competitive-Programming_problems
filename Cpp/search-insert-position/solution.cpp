#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    int low = 0, high = nums.size();

    if (target > nums[high - 1])
        return high;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (target == nums[mid])
            return mid;

        if (target < nums[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return low;
}

int main()
{
    int n, target;

    cout << "Size: ";
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Elements: ";
        cin >> nums[i];
    }

    cout << "Target Value: ";
    cin >> target;

    int result = searchInsert(nums, target);
    cout << "Result: " << result << endl;

    return 0;
}