#include <iostream>
using namespace std;

int removeElement(int nums[], int val, int size)
{
    int k = 0;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] != val)
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}

int main()
{
    int nums[] = {3, 2, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);
    int val = 2;

    int newSize = removeElement(nums, val, size);
    cout << "New Size of nums after removing " << val << ": " << newSize << endl;

    for (int i = 0; i < newSize; i++)
        cout << "==> " << nums[i] << endl;

    return 0;
}