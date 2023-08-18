#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int result = 0;
    for (int num : nums)
        result ^= num; // XOR

    return result;
}

int main()
{
    vector<int> nums = {4, 2, 1, 2, 1};

    int num = singleNumber(nums);
    cout << "Number appeared once: " << num << endl;

    return 0;
}