#include <iostream>
#include <vector>
using namespace std;

vector<int> gradingStudents(vector<int> &grades, int n)
{
    vector<int> roundedGrades;

    for (int grade : grades)
    {
        // If the grade is less than '38', then push the grade value.
        if (grade < 38)
            roundedGrades.push_back(grade);
        else
        {
            // If the grade value is not less than '38', then find the next multiple of the grade value and find the difference between the grade and that multiple value.
            int multipleOf5 = (grade / 5 + 1) * 5;
            int diff = multipleOf5 - grade;

            // If the difference is less than '3', then push that next multiple value.
            // else push the grade value.
            if (diff < 3)
                roundedGrades.push_back(multipleOf5);
            else
                roundedGrades.push_back(grade);
        }
    }

    return roundedGrades;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> grades(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements: ";
        cin >> grades[i];
    }

    vector<int> studentGrades = gradingStudents(grades, n);
    for (int grade : studentGrades)
        cout << "grade: " << grade << endl;

    return 0;
}