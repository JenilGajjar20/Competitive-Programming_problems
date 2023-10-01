#include <iostream>
using namespace std;

#define ll long long
const ll mod = 998244353;

const int MAX_K = 20; // Define the maximum value of k

ll matrix[MAX_K][MAX_K];

// Function to multiply two matrices A and B
void matrix_multiply(ll A[MAX_K][MAX_K], ll B[MAX_K][MAX_K], int n, int m, int p) {
    ll result[MAX_K][MAX_K] = {0};
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            for (int k = 0; k < p; ++k) {
                result[i][j] = (result[i][j] + A[i][k] * B[k][j]) % mod;
            }
        }
    }
    
    // Copy the result back to matrix A
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            A[i][j] = result[i][j];
        }
    }
}

// Function to calculate matrix exponentiation
void matrix_power(ll matrix[MAX_K][MAX_K], int size, ll exponent) {
    if (exponent == 0) {
        // If exponent is 0, set matrix to identity matrix
        for (int i = 0; i < size; ++i) {
            for (int j = 0; j < size; ++j) {
                matrix[i][j] = (i == j) ? 1 : 0;
            }
        }
        return;
    }
    
    ll temp[MAX_K][MAX_K];
    // Create a temporary matrix to store the original matrix
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            temp[i][j] = matrix[i][j];
        }
    }
    
    if (exponent % 2 == 0) {
        // If exponent is even, calculate matrix^(exponent/2)
        matrix_power(matrix, size, exponent / 2);
        // Square the matrix
        matrix_multiply(matrix, matrix, size, size, size);
    } else {
        // If exponent is odd, calculate matrix^((exponent-1)/2)
        matrix_power(matrix, size, (exponent - 1) / 2);
        // Square the matrix and multiply with the original matrix
        matrix_multiply(matrix, matrix, size, size, size);
        matrix_multiply(matrix, temp, size, size, size);
    }
}

// Recursive function to calculate func(k)
ll func(ll k) {
    if (k == 0) return 1;
    if (k < 0) return 0;
    ll ans = 0;
    for (ll i = 1; i <= k; i++) {
        ans += func(k - i);
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
    
        ll v[MAX_K] = {0};
        for (ll i = k; i >= 1; i--) {
            v[k - i] = func(i);
        }

        if (n <= k) {
            cout << v[k - n] << endl;
            continue;
        }
    
        ll A[MAX_K][MAX_K] = {0};
        for (ll i = 0; i < k; i++) {
            for (ll j = 0; j < k; j++) {
                if (i == 0) {
                    A[i][j] = 1;
                } else if (i - j == 1) {
                    A[i][j] = 1;
                }
            }
        }
    
        // Calculate A^(n-k)
        matrix_power(A, k, n - k);
    
        ll ans = 0;
        for (ll i = 0; i < k; i++) {
            ans = (ans + A[0][i] * v[i]) % mod;
        }
        cout << ans << endl;
    }
    return 0;
}
