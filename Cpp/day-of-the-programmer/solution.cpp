#include <iostream>
using namespace std;

string dayOfProgrammer(int year)
{
    if (year == 1918)
        return "26.09.1918";
    else if ((year < 1918 && year % 4 == 0) || (year > 1918 && ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))))
        return "12.09." + to_string(year);
    else
        return "13.09." + to_string(year);
}

int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;

    string result = dayOfProgrammer(year);
    cout << "Result: " << result << endl;
    return 0;
}