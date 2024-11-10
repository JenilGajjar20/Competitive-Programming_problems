#include <iostream>
#include <vector>
using namespace std;

vector<int> majorityElement(vector<int> &nums)
{
    cout << "Size of nums: " << nums.size() << endl;
    int candidate1 = 0, count1 = 0;
    int candidate2 = 0, count2 = 0;
    for (int num : nums)
    {
        if (num == candidate1)
        {
            count1++;
            cout << "num 1: " << num << endl;
        }
        else if (num == candidate2)
        {
            count2++;
            cout << "num 2 : " << num << endl;
        }
        else if (count1 == 0)
        {
            candidate1 = num;
            count1 = 0;
            cout << "candidate1 = num" << (candidate1 = num) << endl;
        }
        else if (count2 == 0)
        {
            candidate2 = num;
            count2 = 0;
            cout << "candidate2 = num" << (candidate2 = num) << endl;
        }
        else
        {
            count1--;
            count2--;
            cout << "decrementing the count value" << endl;
        }
    }

    count1 = count2 = 0;
    for (int num : nums)
    {
        cout << "num: " << num << endl;
        cout << "candidate1: " << candidate1 << endl;
        cout << "candidate2: " << candidate2 << endl;
        if (num == candidate1)
        {
            count1++;
            cout << "num == candidate1" << (num == candidate1) << endl;
        }
        else if (num == candidate2)
        {
            count2++;
            cout << "num == candidate2" << (num == candidate2) << endl;
        }
    }

    vector<int> result;
    if (count1 > nums.size() / 3)
        result.push_back(candidate1);
    if (count2 > nums.size() / 3)
        result.push_back(candidate2);

    return result;
}

int main()
{
    int n;
    cout << "Input Size: ";
    cin >> n; // Taking size of an input

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Insert elements: ";
        cin >> nums[i];
    }

    vector<int> result = majorityElement(nums);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}