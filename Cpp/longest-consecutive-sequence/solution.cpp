#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void longConsSeq(int arr[], int n)
{
    int ans = 0;
    int count = 0;
    sort(arr, arr + n); // Sort an array

    vector<int> v;
    v.push_back(arr[0]);

    // inserting the numbers inside the vector 'v'.
    for (int i = 1; i < n; i++)
    {
        // checking if the elements are equal.
        if (arr[i] != arr[i - 1])
        {
            v.push_back(arr[i]); // adding the elements at the end of the vector 'v'.
        }
    }

    // Need to find the maximum length
    for (int i = 0; i < v.size(); i++)
    {
        // checking if the current element and the previous element is equal.
        // if they are equal, then increment the value of 'count' by 1, otherwise count = 1.
        if (i > 0 && v[i] == v[i - 1] + 1)
        {
            count++;
        }
        else
        {
            count = 1;
        }

        // Output the maximum value
        ans = max(ans, count);
    }
    cout << "ANS: " << ans << endl;
}

int main()
{
    int arr[] = {10, 4, 1, 8, 2, 6, 9, 3, 7, 5};
    int size = sizeof(arr) / sizeof(arr[0]); // Size = 4;
    longConsSeq(arr, size);
    return 0;
}