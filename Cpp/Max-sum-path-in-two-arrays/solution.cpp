#include <iostream>
using namespace std;

class Solution
{
public:
      /* Function to find the maximum path sum between two arrays */
      /*
            l1: The length of array A.
            l2: The length of array B.
      */
      int max_path_sum(int A[], int B[], int l1, int l2)
      {
            int i = 0, j = 0;       // Pointers for both arrays
            int path = 0;           // Final maximum path sum
            int sum1 = 0, sum2 = 0; // Accumulators for array sums

            // Traverse both arrays until one is fully traversed
            while (i < l1 && j < l2)
            {
                  if (A[i] < B[j])
                  { // Add to sum1 if element in A is smaller
                        sum1 += A[i];
                        i++;
                  }
                  else if (A[i] > B[j])
                  { // Add to sum2 if element in B is smaller
                        sum2 += B[j];
                        j++;
                  }
                  else
                  {                                     // Common element found
                        path += max(sum1, sum2) + A[i]; // Add max sum + common element
                        i++;
                        j++;
                        sum1 = sum2 = 0; // Reset sums
                  }
            }

            // Add remaining elements in A
            while (i < l1)
            {
                  sum1 += A[i];
                  i++;
            }

            // Add remaining elements in B
            while (j < l2)
            {
                  sum2 += B[j];
                  j++;
            }

            // Add the maximum of the remaining sums
            path += max(sum1, sum2);
            return path;
      }
};

int main()
{
      Solution sol;
      int A[] = {2, 3, 7, 10, 12};
      int B[] = {1, 5, 7, 8};
      int l1 = sizeof(A) / sizeof(A[0]);
      int l2 = sizeof(B) / sizeof(B[0]);

      cout << "Maximum Path Sum: " << sol.max_path_sum(A, B, l1, l2) << endl;
      return 0;
}

/*
      Time Complexity: O(l1 + l2)
      Space Complexity: O(1)
*/