#include <iostream>
#include <vector>
using namespace std;

int migratoryBirds(int arr[], int n) {}

int main()
{
    int size;
    cout << "Size of an array: ";
    cin >> size;

    vector<int> arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements: ";
        cin >> arr[i];
    }

    migratoryBirds(arr, size);
    return 0;
}