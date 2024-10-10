#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Variable to keep track of the inversion count
    long long int cnt = 0;

    // Function to merge two halves of the array and count inversions
    void merge(vector<long long>& arr, int lo, int mid, int hi) {
        vector<long long> temp; // Temporary array to store merged elements
        int l = lo; // Pointer for the left half
        int r = mid + 1; // Pointer for the right half

        // Merge the two halves while counting inversions
        while (l <= mid && r <= hi) {
            if (arr[l] <= arr[r]) {
                temp.push_back(arr[l]);
                l++;
            } else {
                cnt += mid - l + 1; // Count inversions
                temp.push_back(arr[r]);
                r++;
            }
        }

        // Copy remaining elements from the left half
        while (l <= mid) {
            temp.push_back(arr[l]);
            l++;
        }

        // Copy remaining elements from the right half
        while (r <= hi) {
            temp.push_back(arr[r]);
            r++;
        }

        // Copy the merged elements back to the original array
        for (int i = lo; i <= hi; i++) {
            arr[i] = temp[i - lo];
        }
    }

    // Function to perform merge sort and count inversions
    void mergeSort(vector<long long>& arr, int lo, int hi) {
        if (lo >= hi)
            return;

        int mid = (lo + hi) / 2;
        mergeSort(arr, lo, mid); // Sort the left half
        mergeSort(arr, mid + 1, hi); // Sort the right half

        merge(arr, lo, mid, hi); // Merge the two halves
    }

    // Function to return the inversion count
    long long int inversionCount(vector<long long>& arr) {
        cnt = 0; // Initialize inversion count to 0
        mergeSort(arr, 0, arr.size() - 1); // Sort the array and count inversions
        return cnt; // Return the inversion count
    }
};

int main() {
    int N;
    // Take input size of the array
    cout << "Enter the size of the array: ";
    cin >> N;

    vector<long long> arr(N);

    // Take input elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    Solution solution;
    // Output the inversion count
    long long int result = solution.inversionCount(arr);
    cout << "Number of inversions: " << result << endl;

    return 0;
}
