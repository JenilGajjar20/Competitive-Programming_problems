#include <iostream>
using namespace std;

// Function to calculate the safe position in the Josephus problem
int josephus(int n, int k) {
    // Base case: if there is only one person left, that person is safe
    if (n == 1)
        return 0; // Index starts from 0, so return 0 as the safe position
    // Recursive case: reduce the problem size by one person, and adjust the position
    return (josephus(n - 1, k) + k) % n;
}

int main() {
    int n, k;
    
    // Take input for number of people (n) and step count (k)
    cout << "Enter the number of people: ";
    cin >> n;
    cout << "Enter the step count: ";
    cin >> k;
    
    // Calculate the safe position, convert from 0-indexed to 1-indexed by adding 1
    int result = josephus(n, k) + 1;
    
    // Output the safe position
    cout << "The safe position is: " << result << endl;
    
    return 0;
}
