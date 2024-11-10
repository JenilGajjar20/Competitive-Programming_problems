#include <iostream>
#include <vector>
using namespace std;

vector<int> circularArrayRotations(vector<int> a, int k, vector<int> queries)
{
    int n = a.size();

    vector<int> rotatedArray(n);
    for (int i = 0; i < n; i++)
    {
        int newPos = (i + k) % n;
        rotatedArray[newPos] = a[i];
    }

    vector<int> result;
    for (int i = 0; i < queries.size(); i++)
    {
        result.push_back(rotatedArray[queries[i]]);
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter of elements: ";
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements: ";
        cin >> a[i];
    }

    int k;
    cout << "Enter number of rotations to perform: ";
    cin >> k;

    int q;
    cout << "Enter number of indices: ";
    cin >> q;

    vector<int> queries(q);
    for (int i = 0; i < q; i++)
    {
        cout << "Enter index number: ";
        cin >> queries[i];
    }

    vector<int> result = circularArrayRotations(a, k, queries);
    for (int i = 0; i < result.size(); i++)
        cout << "Result: " << result[i] << endl;

    return 0;
}