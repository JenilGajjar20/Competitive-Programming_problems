#include <iostream>
using namespace std;

int pageCount(int n, int p)
{
    int fromFront = p / 2;
    int fromBack = (n / 2) - fromFront;
    return min(fromBack, fromFront);
}

int main()
{
    int n, p;
    cout << "Enter number of pages in the book: ";
    cin >> n;

    cout << "Enter page number to turn to: ";
    cin >> p;

    int result = pageCount(n, p);
    cout << "Minimum number of pages to turn: " << result << endl;

    return 0;
}