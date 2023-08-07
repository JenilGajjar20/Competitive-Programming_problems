#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int nextPermutation(vector<int> &nums, int n)
{
    int i = n - 2;

    while (i >= 0 && nums[i] >= nums[i + 1])
        i--;

    if (i >= 0)
    {
        int j = n - 1;

        while (j > 1 && nums[j] <= nums[i])
            j--;

        swap(nums[i], nums[j]);
    }

    reverse(nums.begin() + i + 1, nums.end());
}

int main()
{
    int size;
    cout << "Enter Size: ";
    cin >> size;

    vector<int> nums(size);

    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements: ";
        cin >> nums[i];
    }

    nextPermutation(nums, size);

    for (int num : nums)
        cout << num << " ";

    cout << endl;
    return 0;
}