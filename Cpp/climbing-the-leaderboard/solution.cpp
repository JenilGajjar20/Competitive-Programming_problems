#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player)
{
    vector<int> ranks;

    // Remove the duplicate number from the array.
    ranked.erase(unique(ranked.begin(), ranked.end()), ranked.end());

    // Start from the end of an ranked array
    int i = ranked.size() - 1;

    for (int score : player)
    {
        while (i >= 0 && score >= ranked[i])
            i--;

        // Add 2 because ranks are 1-based, and we move to the previous rank
        ranks.push_back(i + 2);
    }

    return ranks;
}

int main()
{
    int n_ranks;
    cout << "Enter size of ranks array: ";
    cin >> n_ranks;

    vector<int> ranked(n_ranks);
    for (int i = 0; i < n_ranks; i++)
    {
        cout << "Enter ranks: ";
        cin >> ranked[i];
    }

    int n_player;
    cout << "Enter size of players array: ";
    cin >> n_player;

    vector<int> player(n_player);
    for (int j = 0; j < n_player; j++)
    {
        cout << "Enter scores of the player: ";
        cin >> player[j];
    }

    vector<int> result = climbingLeaderboard(ranked, player);
    for (int r : result)
        cout << "Rank: " << r << endl;

    return 0;
}