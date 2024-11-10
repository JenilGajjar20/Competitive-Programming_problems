#include <iostream>
using namespace std;

int libraryFine(int d1, int d2, int m1, int m2, int y1, int y2)
{
    // Check if the book is returned on or before the expected date.
    if (y1 < y2 || (y1 == y2 && m1 < m2) || (y1 == y2 && m1 == m2 && d1 <= d2))
        return 0;

    // Check if the book is returned after the expected return day but still within the same calendar month and year.
    else if (y1 == y2 && m1 == m2)
        return 15 * (d1 - d2);

    // Check if the book is returned after the expected return month but still within the same calendar year.
    else if (y1 == y2)
        return 500 * (m1 - m2);

    // Check if the book is returned after the calendar year.
    else
        return 10000;
}

int main()
{
    int date1, date2, month1, month2, year1, year2;

    cout << "Enter the returned date: ";
    cin >> date1;
    cout << "Enter the due date: ";
    cin >> date2;

    cout << "Enter the returned month: ";
    cin >> month1;
    cout << "Enter the due month: ";
    cin >> month2;

    cout << "Enter the returned year: ";
    cin >> year1;
    cout << "Enter the due year: ";
    cin >> year2;

    int result = libraryFine(date1, date2, month1, month2, year1, year2);
    cout << "Fine: " << result << endl;

    return 0;
}