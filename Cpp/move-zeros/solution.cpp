#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void moveZeros(vector<int> &nums)
{
    int n = nums.size();

    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[i], nums[j]);
            i++;
        }
    }

    for (int k = 0; k < n; k++)
        cout << "Nums: " << nums[k] << endl;
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeros(nums);

    return 0;
}