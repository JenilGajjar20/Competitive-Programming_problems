#include <iostream>
using namespace std;

int countingValleys(int steps, string path)
{
    int level = 0;   // Current altitude level
    int valleys = 0; // Count of Valleys

    for (char step : path)
    {
        if (step == 'U')
            level++; // Going Uphill
        else
            level--; // Going Downhill

        // Check if the valley is completed
        if (level == 0 && step == 'U')
            valleys++;
    }

    return valleys;
}

int main()
{
    int steps;
    string path;

    cout << "Steps: ";
    cin >> steps;

    cout << "Path: ";
    cin >> path;

    int result = countingValleys(steps, path);
    cout << "Result: " << result << endl;
    return 0;
}