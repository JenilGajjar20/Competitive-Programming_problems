#include <iostream>
#include <vector>
using namespace std;

int canPlaceFlowers(vector<int> flowerBed, int n)
{
    int count = 0;

    for (int i = 0; i < flowerBed.size(); i++)
    {
        // Check if it's a valid position to plant a flower. If it is valid, the current plot should be empty and the adjacent plots to the left and right should also be empty.
        // Check if flowerBed[i] is 0 and flowerBed[i - 1] is 0 and flowerBed[i + 1] is 0
        if (flowerBed[i] == 0 && (i == 0 || flowerBed[i - 1] == 0) && (i == flowerBed.size() - 1 || flowerBed[i + 1] == 0))
        {
            flowerBed[i] = 1;
            count++;
        }
    }

    return count >= n ? true : false;
}

int main()
{
    int size, n;
    cout << "Size: ";
    cin >> size;

    cout << "Number of flowers to be planted: ";
    cin >> n;

    vector<int> flowerBed(size);
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements: ";
        cin >> flowerBed[i];
    }

    bool result = canPlaceFlowers(flowerBed, n);
    cout << "Result: " << result << endl;

    return 0;
}