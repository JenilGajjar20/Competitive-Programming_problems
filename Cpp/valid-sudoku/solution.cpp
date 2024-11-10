#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isValidSudoku(vector<vector<char>> &board)
{
    vector<unordered_set<char>> rows(9);    // No. of rows
    vector<unordered_set<char>> columns(9); // No. of columns
    vector<unordered_set<char>> boxes(9);   // No. of boxes

    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            char num = board[i][j];

            // Check if any of the box is empty inside the box.
            if (num != '.')
            {
                // Check if the number is present in the row, column or box. If it is already present then it must be greater than 0. If the any of the three conditions evaluates to 'true' then it must return 'false' which indicates that the sudoku is invalid.
                if (rows[i].count(num) || columns[j].count(num) || boxes[(i / 3) * 3 + j / 3].count(num))
                {
                    return false;
                }
                rows[i].insert(num);
                columns[j].insert(num);
                boxes[(i / 3) * 3 + j / 3].insert(num);
            }
        }
    }

    return true;
}

int main()
{
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    bool isValid = isValidSudoku(board);

    if (isValid)
        cout << "The sudoku is valid: " << endl;
    else
        cout << "The sudoku is not valid: " << endl;
    return 0;
}