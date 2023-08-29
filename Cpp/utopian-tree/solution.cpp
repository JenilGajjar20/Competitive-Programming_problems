#include <iostream>
using namespace std;

int utopianTree(int n)
{
    int height = 1;
    for (int cycle = 1; cycle <= n; cycle++)
    {
        if (cycle % 2 == 1)
            height *= 2;
        else
            height += 1;
    }

    return height;
}

int main()
{
    int size;
    cout << "Size: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        int n;
        cout << "Enter number: ";
        cin >> n;
        int result = utopianTree(n);
        cout << "Height: " << result << endl;
    }
    return 0;
}