#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

// Helper function to calculate the minimum number of painters needed
// to paint the boards if each painter cannot paint more than 'mid' units.
int min_tm(vector<int> &boards, int mid) {
    int n = boards.size();
    int sm = 0, cnt = 1;

    for (int i = 0; i < n; i++) {
        // If the current board can be added to the current painter's workload
        if (sm + boards[i] <= mid) {
            sm += boards[i];
        } else {
            // Otherwise, assign a new painter
            cnt++;
            sm = boards[i];
        }
    }
    return cnt; // Number of painters required
}

// Function to find the largest minimum distance by binary search
int findLargestMinDistance(vector<int> &boards, int k) {
    // Edge case: if there are fewer boards than painters
    if (boards.size() < k) {
        return *max_element(boards.begin(), boards.end());
    }

    // Set the search range for binary search
    int l = *max_element(boards.begin(), boards.end()); // The largest single board
    int r = accumulate(boards.begin(), boards.end(), 0); // Total length of all boards

    int result = l; // Initialize result

    // Binary search to find the optimal solution
    while (l <= r) {
        int mid = l + (r - l) / 2;
        int painters = min_tm(boards, mid);

        // If the number of painters is greater than k, we need to increase mid
        if (painters > k) {
            l = mid + 1;
        } else {
            // Otherwise, try for a smaller mid
            result = mid;
            r = mid - 1;
        }
    }

    return result;
}

int main() {
    int n, k;

    // Input number of boards and painters
    cout << "Enter number of boards: ";
    cin >> n;

    cout << "Enter number of painters: ";
    cin >> k;

    vector<int> boards(n);

    // Input the lengths of the boards
    cout << "Enter the lengths of the boards:\n";
    for (int i = 0; i < n; i++) {
        cin >> boards[i];
    }

    // Find and output the largest minimum distance
    int result = findLargestMinDistance(boards, k);
    cout << "The largest minimum distance is: " << result << endl;

    return 0;
}
