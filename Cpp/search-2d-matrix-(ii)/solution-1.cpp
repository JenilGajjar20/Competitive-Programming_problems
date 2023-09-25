#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> matrix, int target)
{
    int m = matrix.size();    // rows
    int n = matrix[0].size(); // columns

    // Initial Value
    int row = 0;
    int column = n - 1;

    while (row < m && column >= 0)
    {
        if (matrix[row][column] == target)
            return true;
        else if (matrix[row][column] < target)
            row++;
        else
            column--;
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