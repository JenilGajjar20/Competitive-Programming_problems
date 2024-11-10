#include <iostream>
#include <vector>
using namespace std;

vector<int> permutationEquation(vector<int> p)
{
    int size = p.size();
    vector<int> result(size);

    vector<int> indexMap(size);
    for (int i = 0; i < size; i++)
        indexMap[p[i]] = i + 1;

    for (int x = 1; x <= size; x++)
    {
        int y = indexMap[indexMap[x]];
        result[x - 1] = y;
    }

    return result;
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements: ";
        cin >> p[i];
    }

    vector<int> result = permutationEquation(p);
    for (int res : result)
        cout << "Result: " << res << endl;

    return 0;
}