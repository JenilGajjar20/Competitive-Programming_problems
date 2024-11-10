#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> &height, int n)
{
    int left = 0;
    int right = n - 1;
    int maxWater = 0;

    while (left < right)
    {
        int currHeight = min(height[left], height[right]);
        int currWidth = right - left;
        int currArea = currHeight * currWidth;
        maxWater = max(maxWater, currArea);

        if (height[left] < height[right])
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    return maxWater;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> height(n);

    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements: ";
        cin >> height[i];
    }

    int result = maxArea(height, n);
    cout << "Result: " << result << endl;
    return 0;
}