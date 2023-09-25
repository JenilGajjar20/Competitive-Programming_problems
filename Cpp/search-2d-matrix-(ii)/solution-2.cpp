#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> matrix, int target)
{
    int m = matrix.size();    // rows
    int n = matrix[0].size(); // columns

    // Initials
    int left = 0;
    int right = (m * n) - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        int mid_element = matrix[mid / n][mid % n];

        if (mid_element == target)
            return true;
        else if (mid_element < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return false;
}

int main()
{
    vector<vector<int>> matrix = {
        {1, 4, 7, 11, 15},
        {2, 5, 8, 12, 19},
        {3, 6, 9, 16, 22},
        {10, 13, 14, 17, 24},
        {18, 21, 23, 26, 30}};

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    bool result = searchMatrix(matrix, target);
    if (result)
        cout << "True" << endl;
    else
        cout << "False" << endl;

    return 0;
}