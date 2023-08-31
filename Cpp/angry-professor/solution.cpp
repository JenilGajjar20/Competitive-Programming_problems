#include <iostream>
#include <vector>
using namespace std;

string angryProfessor(int k, vector<int> arr)
{
    int noOfStudents = 0;

    for (int arrivalTime : arr)
    {
        if (arrivalTime <= 0)
            noOfStudents++;
    }

    if (noOfStudents >= k)
        return "class not cancelled";
    else
        return "class cancelled";
}

int main()
{
    int t;
    cout << "Size: ";
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n, k;
        cout << "Enter Size of an array: ";
        cin >> n;

        cout << "Enter threshold number of students: ";
        cin >> k;

        vector<int> arr(n);
        for (int j = 0; j < n; j++)
        {
            cout << "Enter arrival time of the students: ";
            cin >> arr[j];
        }
        string result = angryProfessor(k, arr);
        cout << "Result: " << result << endl;
    }

    return 0;
}