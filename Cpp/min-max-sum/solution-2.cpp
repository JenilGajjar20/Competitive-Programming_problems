#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int minMaxSum(int arr[], int n)
{
  // Variable declarations
  long max_element = LONG_MIN;
  long min_element = LONG_MAX;
  long long min_sum = 0;
  long long max_sum = 0;
  long long arr_sum = 0;

  // loop to find sum of array and to find minimum and maximum element in the array
  for (int i = 0; i < n; i++)
  {
    arr_sum += arr[i];
    if (arr[i] > max_element)
    {
      max_element = arr[i];
    }

    if (arr[i] < min_element)
    {
      min_element = arr[i];
    }
  }
  // subtrating maximum element in array from array sum to find the min sum that can be found with n-1 element of array
  min_sum = arr_sum - max_element;
  // subtrating minimum element in array from array sum to find the max sum that can be found with n-1 element of array
  max_sum = arr_sum - min_element;
  cout << min_sum << " " << max_sum << endl;
}

int main()
{
  int n;
  cout << "Enter size: ";
  cin >> n; // Taking size as input

  int arr[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Input value: ";
    cin >> arr[i];
  }

  minMaxSum(arr, n);
  return 0;
}