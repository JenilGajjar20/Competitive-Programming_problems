#include <iostream>
#include <vector>
using namespace std;

vector<int> breakingRecords(vector<int> scores)
{
    int minScore = scores[0];
    int maxScore = scores[0];
    int minCount = 0;
    int maxCount = 0;

    for (int i = 1; i < scores.size(); i++)
    {
        if (scores[i] < minScore)
        {
            minScore = scores[i];
            minCount++;
        }
        else if (scores[i] > maxScore)
        {
            maxScore = scores[i];
            maxCount++;
        }
    }

    return {maxCount, minCount};
}

int main()
{
    int n;
    cout << "Enter Size: ";
    cin >> n;

    vector<int> scores(n);
    for (int i = 0; i < n; i++)
    {
        cout << "Enter elements: ";
        cin >> scores[i];
    }

    vector<int> counts = breakingRecords(scores);

    for (int count : counts)
        cout << count << " ";

    return 0;
}