#include <iostream>
using namespace std;

string catAndMouse(int x, int y, int z)
{
    // Calculate the distance of cats and mouse.
    int catA = abs(x - z);
    int catB = abs(y - z);

    // Check if the catB has less distance compare to catA
    if (catA > catB)
        return "Cat B";

    // Check if the catA has less distance compare to catB
    else if (catA < catB)
        return "Cat A";

    // Print 'Mouse C' if both the cats reach together.
    else
        return "Mouse C";
}

int main()
{
    int q;
    cout << "Enter number of queries: ";
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int x, y, z;
        cout << "Enter Cat A distance from Mouse C: ";
        cin >> x;

        cout << "Enter Cat B distance from Mouse C: ";
        cin >> y;

        cout << "Enter Mouse C position: ";
        cin >> z;

        string result = catAndMouse(x, y, z);
        cout << "Result: " << result << endl;
    }

    return 0;
}