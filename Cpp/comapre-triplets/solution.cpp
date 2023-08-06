#include <iostream>
#include <vector>
using namespace std;

vector<int> compareTriplets(int a[3], int b[3], int size)
{
    int aliceScore = 0;
    int bobScore = 0;

    for (int i = 0; i < size; i++)
    {
        if (a[i] > b[i])
            aliceScore++;
        else if (a[i] < b[i])
            bobScore++;
    }

    return {aliceScore, bobScore};
}

int main()
{
    int a[3], b[3];
    int i;

    int size = sizeof(a) / sizeof(a[0]); // Calculate the size of the array

    // a's input
    for (i = 0; i < size; i++)
    {

        cout << "Value of a: ";
        cin >> a[i];
    }

    // b's input
    for (i = 0; i < size; i++)
    {
        cout << "Value of b: ";
        cin >> b[i];
    }

    vector<int> result = compareTriplets(a, b, size);

    // Output the result
    // i < 2: as there are two names, 'i' will be less than 2
    for (i = 0; i < 2; i++)
        cout << "Result: " << result[i] << endl;
    return 0;
}