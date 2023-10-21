// 1. Selection Sort ---------------------------------------->

// Selection sort is a simple and efficient sorting algorithm
// that works by repeatedly selecting the smallest
// (or largest) element from the unsorted portion of the list
// and moving it to the sorted portion of the list. 

// C++ program for implementation of
// selection sort
#include <bits/stdc++.h>
using namespace std;
 
// Function for Selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
 
        // Swap the found minimum element
        // with the first element
        if (min_idx != i)
            swap(arr[min_idx], arr[i]);
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}
 
// Driver program
int main()
{
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    selectionSort(arr, n);
    cout << "Sorted array: \n";
    printArray(arr, n);
    return 0;
}


// 1. Bubble Sort ---------------------------------------->

// Bubble Sort is the simplest sorting algorithm that works 
// by repeatedly swapping the adjacent elements if they are 
// in the wrong order. This algorithm is not suitable for large
// data sets as its average and worst-case time complexity is quite high.

// Optimized implementation of Bubble sort
#include <bits/stdc++.h>
using namespace std;
 
// An optimized version of Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
 
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << " " << arr[i];
}
 
// Driver program to test above functions
int main()
{
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}


// 1. Insertion Sort ---------------------------------------->

// Insertion sort is a simple sorting algorithm that works similar
// to the way you sort playing cards in your hands. The array is 
// virtually split into a sorted and an unsorted part. Values from 
// the unsorted part are picked and placed at the correct position 
// in the sorted part.

// C++ program for insertion sort
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to sort an array using
// insertion sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        // Move elements of arr[0..i-1],
        // that are greater than key, 
        // to one position ahead of their
        // current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
 
// A utility function to print an array
// of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, N);
    printArray(arr, N);
 
    return 0;
}


// 4. Merge Sort ---------------------------------------->

// Merge sort is defined as a sorting algorithm that works by dividing
// an array into smaller subarrays, sorting each subarray, and then 
// merging the sorted subarrays back together to form the final sorted array.

// C++ program for Merge Sort
#include <bits/stdc++.h>
using namespace std;
 
// Merges two subarrays of array[].
// First subarray is arr[begin..mid]
// Second subarray is arr[mid+1..end]
void merge(int array[], int const left, int const mid,
           int const right)
{
    int const subArrayOne = mid - left + 1;
    int const subArrayTwo = right - mid;
 
    // Create temp arrays
    auto *leftArray = new int[subArrayOne],
         *rightArray = new int[subArrayTwo];
 
    // Copy data to temp arrays leftArray[] and rightArray[]
    for (auto i = 0; i < subArrayOne; i++)
        leftArray[i] = array[left + i];
    for (auto j = 0; j < subArrayTwo; j++)
        rightArray[j] = array[mid + 1 + j];
 
    auto indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
    int indexOfMergedArray = left;
 
    // Merge the temp arrays back into array[left..right]
    while (indexOfSubArrayOne < subArrayOne
           && indexOfSubArrayTwo < subArrayTwo) {
        if (leftArray[indexOfSubArrayOne]
            <= rightArray[indexOfSubArrayTwo]) {
            array[indexOfMergedArray]
                = leftArray[indexOfSubArrayOne];
            indexOfSubArrayOne++;
        }
        else {
            array[indexOfMergedArray]
                = rightArray[indexOfSubArrayTwo];
            indexOfSubArrayTwo++;
        }
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // left[], if there are any
    while (indexOfSubArrayOne < subArrayOne) {
        array[indexOfMergedArray]
            = leftArray[indexOfSubArrayOne];
        indexOfSubArrayOne++;
        indexOfMergedArray++;
    }
 
    // Copy the remaining elements of
    // right[], if there are any
    while (indexOfSubArrayTwo < subArrayTwo) {
        array[indexOfMergedArray]
            = rightArray[indexOfSubArrayTwo];
        indexOfSubArrayTwo++;
        indexOfMergedArray++;
    }
    delete[] leftArray;
    delete[] rightArray;
}
 
// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;
 
    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}
 
// UTILITY FUNCTIONS
// Function to print an array
void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}
 
// Driver code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}


// 4. Quick Sort ---------------------------------------->

// QuickSort is a sorting algorithm based on the Divide and Conquer
// algorithm that picks an element as a pivot and partitions the given
// array around the picked pivot by placing the pivot in its correct
//  position in the sorted array.

#include <bits/stdc++.h>
using namespace std;
 
int partition(int arr[],int low,int high)
{
  //choose the pivot
   
  int pivot=arr[high];
  //Index of smaller element and Indicate
  //the right position of pivot found so far
  int i=(low-1);
   
  for(int j=low;j<=high;j++)
  {
    //If current element is smaller than the pivot
    if(arr[j]<pivot)
    {
      //Increment index of smaller element
      i++;
      swap(arr[i],arr[j]);
    }
  }
  swap(arr[i+1],arr[high]);
  return (i+1);
}
 
// The Quicksort function Implement
            
void quickSort(int arr[],int low,int high)
{
  // when low is less than high
  if(low<high)
  {
    // pi is the partition return index of pivot
     
    int pi=partition(arr,low,high);
     
    //Recursion Call
    //smaller element than pivot goes left and
    //higher element goes right
    quickSort(arr,low,pi-1);
    quickSort(arr,pi+1,high);
  }
}
              
  
int main() {
  int arr[]={10,7,8,9,1,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  // Function call
  quickSort(arr,0,n-1);
  //Print the sorted array
  cout<<"Sorted Array\n";
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}


// 4. Heap Sort ---------------------------------------->

// Heap sort is a comparison-based sorting technique based on 
// Binary Heap data structure. It is similar to the selection 
// sort where we first find the minimum element and place the 
// minimum element at the beginning. Repeat the same process for 
// the remaining elements.

// C++ program for implementation of Heap Sort
 
#include <iostream>
using namespace std;
 
// To heapify a subtree rooted with node i
// which is an index in arr[].
// n is size of heap
void heapify(int arr[], int N, int i)
{
 
    // Initialize largest as root
    int largest = i;
 
    // left = 2*i + 1
    int l = 2 * i + 1;
 
    // right = 2*i + 2
    int r = 2 * i + 2;
 
    // If left child is larger than root
    if (l < N && arr[l] > arr[largest])
        largest = l;
 
    // If right child is larger than largest
    // so far
    if (r < N && arr[r] > arr[largest])
        largest = r;
 
    // If largest is not root
    if (largest != i) {
        swap(arr[i], arr[largest]);
 
        // Recursively heapify the affected
        // sub-tree
        heapify(arr, N, largest);
    }
}
 
// Main function to do heap sort
void heapSort(int arr[], int N)
{
 
    // Build heap (rearrange array)
    for (int i = N / 2 - 1; i >= 0; i--)
        heapify(arr, N, i);
 
    // One by one extract an element
    // from heap
    for (int i = N - 1; i > 0; i--) {
 
        // Move current root to end
        swap(arr[0], arr[i]);
 
        // call max heapify on the reduced heap
        heapify(arr, i, 0);
    }
}
 
// A utility function to print array of size n
void printArray(int arr[], int N)
{
    for (int i = 0; i < N; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}
 
// Driver's code
int main()
{
    int arr[] = { 12, 11, 13, 5, 6, 7 };
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    heapSort(arr, N);
 
    cout << "Sorted array is \n";
    printArray(arr, N);
}


// 4. Counting Sort ---------------------------------------------->

// Counting Sort is a non-comparison-based sorting algorithm that 
// works well when there is limited range of input values. 
// It is particularly efficient when the range of input values is 
// small compared to the number of elements to be sorted. 
// The basic idea behind Counting Sort is to count the frequency 
// of each distinct element in the input array and use that 
// information to place the elements in their correct sorted positions.

#include <bits/stdc++.h>
using namespace std;
 
vector<int> countSort(vector<int>& inputArray)
{
 
    int N = inputArray.size();
 
    // Finding the maximum element of array inputArray[].
    int M = 0;
 
    for (int i = 0; i < N; i++)
        M = max(M, inputArray[i]);
 
    // Initializing countArray[] with 0
    vector<int> countArray(M + 1, 0);
 
    // Mapping each element of inputArray[] as an index
    // of countArray[] array
 
    for (int i = 0; i < N; i++)
        countArray[inputArray[i]]++;
 
    // Calculating prefix sum at every index
    // of array countArray[]
    for (int i = 1; i <= M; i++)
        countArray[i] += countArray[i - 1];
 
    // Creating outputArray[] from countArray[] array
    vector<int> outputArray(N);
 
    for (int i = N - 1; i >= 0; i--)
 
    {
        outputArray[countArray[inputArray[i]] - 1]
            = inputArray[i];
 
        countArray[inputArray[i]]--;
    }
 
    return outputArray;
}
 
// Driver code
int main()
 
{
 
    // Input array
    vector<int> inputArray = { 4, 3, 12, 1, 5, 5, 3, 9 };
 
    // Output array
    vector<int> outputArray = countSort(inputArray);
 
    for (int i = 0; i < inputArray.size(); i++)
        cout << outputArray[i] << " ";
 
    return 0;
}



// 4. Radix Sort ---------------------------------------------->

// Radix Sort is a linear sorting algorithm that sorts elements by 
// processing them digit by digit. It is an efficient sorting 
// algorithm for integers or strings with fixed-size keys. 

  
#include <iostream> 
using namespace std; 
  
// A utility function to get maximum 
// value in arr[] 
int getMax(int arr[], int n) 
{ 
    int mx = arr[0]; 
    for (int i = 1; i < n; i++) 
        if (arr[i] > mx) 
            mx = arr[i]; 
    return mx; 
} 
  
// A function to do counting sort of arr[] 
// according to the digit 
// represented by exp. 
void countSort(int arr[], int n, int exp) 
{ 
  
    // Output array 
    int output[n]; 
    int i, count[10] = { 0 }; 
  
    // Store count of occurrences 
    // in count[] 
    for (i = 0; i < n; i++) 
        count[(arr[i] / exp) % 10]++; 
  
    // Change count[i] so that count[i] 
    // now contains actual position 
    // of this digit in output[] 
    for (i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    // Build the output array 
    for (i = n - 1; i >= 0; i--) { 
        output[count[(arr[i] / exp) % 10] - 1] = arr[i]; 
        count[(arr[i] / exp) % 10]--; 
    } 
  
    // Copy the output array to arr[], 
    // so that arr[] now contains sorted 
    // numbers according to current digit 
    for (i = 0; i < n; i++) 
        arr[i] = output[i]; 
} 
  
// The main function to that sorts arr[] 
// of size n using Radix Sort 
void radixsort(int arr[], int n) 
{ 
  
    // Find the maximum number to 
    // know number of digits 
    int m = getMax(arr, n); 
  
    // Do counting sort for every digit. 
    // Note that instead of passing digit 
    // number, exp is passed. exp is 10^i 
    // where i is current digit number 
    for (int exp = 1; m / exp > 0; exp *= 10) 
        countSort(arr, n, exp); 
} 
  
// A utility function to print an array 
void print(int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 
  
// Driver Code 
int main() 
{ 
    int arr[] = { 543, 986, 217, 765, 329 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // Function Call 
    radixsort(arr, n); 
    print(arr, n); 
    return 0; 
}


// 4. Bucket Sort ------------------------------------------------>

// Bucket sort is a sorting technique that involves dividing 
// elements into various groups, or buckets. These buckets are 
// formed by uniformly distributing the elements. Once the elements 
// are divided into buckets, they can be sorted using any other 
// sorting algorithm. Finally, the sorted elements are gathered 
// together in an ordered fashion.


// C++ program to sort an array using bucket sort
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
 
// Function to sort arr[] of
// size n using bucket sort
void bucketSort(float arr[], int n)
{
 
    // 1) Create n empty buckets
    vector<float> b[n];
 
    // 2) Put array elements
    // in different buckets
    for (int i = 0; i < n; i++) {
 
        // Index in bucket
        int bi = n * arr[i];
        b[bi].push_back(arr[i]);
    }
 
    // 3) Sort individual buckets
    for (int i = 0; i < n; i++)
        sort(b[i].begin(), b[i].end());
 
    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];
}
 
// Driver program to test above function
int main()
{
    float arr[]
        = { 0.897, 0.565, 0.656, 0.1234, 0.665, 0.3434 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, n);
 
    cout << "Sorted array is \n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// 4. ShellSort ------------------------------------------------->

// Shell sort is mainly a variation of Insertion Sort. 
// In insertion sort, we move elements only one position 
// ahead. When an element has to be moved far ahead, many 
// movements are involved. The idea of ShellSort is to allow the 
// exchange of far items. In Shell sort, we make the array h-sorted 
// for a large value of h. We keep reducing the value of h until 
// it becomes 1. An array is said to be h-sorted if all sublists 
// of every h’th element are sorted.

// C++ implementation of Shell Sort 
#include  <iostream> 
using namespace std; 
  
/* function to sort arr using shellSort */
int shellSort(int arr[], int n) 
{ 
    // Start with a big gap, then reduce the gap 
    for (int gap = n/2; gap > 0; gap /= 2) 
    { 
        // Do a gapped insertion sort for this gap size. 
        // The first gap elements a[0..gap-1] are already in gapped order 
        // keep adding one more element until the entire array is 
        // gap sorted  
        for (int i = gap; i < n; i += 1) 
        { 
            // add a[i] to the elements that have been gap sorted 
            // save a[i] in temp and make a hole at position i 
            int temp = arr[i]; 
  
            // shift earlier gap-sorted elements up until the correct  
            // location for a[i] is found 
            int j;             
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
                arr[j] = arr[j - gap]; 
              
            //  put temp (the original a[i]) in its correct location 
            arr[j] = temp; 
        } 
    } 
    return 0; 
} 
  
void printArray(int arr[], int n) 
{ 
    for (int i=0; i<n; i++) 
        cout << arr[i] << " "; 
} 
  
int main() 
{ 
    int arr[] = {12, 34, 54, 2, 3}, i; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    cout << "Array before sorting: \n"; 
    printArray(arr, n); 
  
    shellSort(arr, n); 
  
    cout << "\nArray after sorting: \n"; 
    printArray(arr, n); 
  
    return 0; 
} 


// 4. Tim Sort --------------------------------------------------->

// Tim Sort is a hybrid sorting algorithm derived from merge sort 
// and insertion sort. It was designed to perform well on many 
// kinds of real-world data. Tim Sort is the default sorting 
// algorithm used by Python’s sorted() and list.sort() functions.

// C++ program to perform TimSort.
#include <bits/stdc++.h>
using namespace std;
const int RUN = 32;

// This function sorts array from left
// index to to right index which is
// of size atmost RUN
void insertionSort(int arr[], int left, int right)
{
    for (int i = left + 1; i <= right; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > temp) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

// Merge function merges the sorted runs
void merge(int arr[], int l, int m, int r)
{

    // Original array is broken in two
    // parts left and right array
    int len1 = m - l + 1, len2 = r - m;
    int left[len1], right[len2];
    for (int i = 0; i < len1; i++)
        left[i] = arr[l + i];
    for (int i = 0; i < len2; i++)
        right[i] = arr[m + 1 + i];

    int i = 0;
    int j = 0;
    int k = l;

    // After comparing, we
    // merge those two array
    // in larger sub array
    while (i < len1 && j < len2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of
    // left, if any
    while (i < len1) {
        arr[k] = left[i];
        k++;
        i++;
    }

    // Copy remaining element of
    // right, if any
    while (j < len2) {
        arr[k] = right[j];
        k++;
        j++;
    }
}

// Iterative Timsort function to sort the
// array[0...n-1] (similar to merge sort)
void timSort(int arr[], int n)
{

    // Sort individual subarrays of size RUN
    for (int i = 0; i < n; i += RUN)
        insertionSort(arr, i, min((i + RUN - 1), (n - 1)));

    // Start merging from size RUN (or 32).
    // It will merge
    // to form size 64, then 128, 256
    // and so on ....
    for (int size = RUN; size < n; size = 2 * size) {

        // pick starting point of
        // left sub array. We
        // are going to merge
        // arr[left..left+size-1]
        // and arr[left+size, left+2*size-1]
        // After every merge, we
        // increase left by 2*size
        for (int left = 0; left < n; left += 2 * size) {

            // Find ending point of
            // left sub array
            // mid+1 is starting point
            // of right sub array
            int mid = left + size - 1;
            int right = min((left + 2 * size - 1), (n - 1));

            // merge sub array arr[left.....mid] &
            // arr[mid+1....right]
            if (mid < right)
                merge(arr, left, mid, right);
        }
    }
}

// Utility function to print the Array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d  ", arr[i]);
    printf("\n");
}

// Driver program to test above function
int main()
{
    int arr[] = { -2, 7,  15,  -14, 0, 15,  0, 7,
                  -7, -4, -13, 5,   8, -14, 12 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Given Array is\n");
    printArray(arr, n);

    // Function Call
    timSort(arr, n);

    printf("After Sorting Array is\n");
    printArray(arr, n);
    return 0;
}


// 4. Cycle Sort --------------------------------------------------->

// The basic idea behind cycle sort is to divide the input array 
// into cycles, where each cycle consists of elements that belong 
// to the same position in the sorted output array. The algorithm 
// then performs a series of swaps to place each element in its 
// correct position within its cycle, until all cycles are complete 
// and the array is sorted.

// C++ program to implement cycle sort
#include <iostream>
using namespace std;
 
// Function sort the array using Cycle sort
void cycleSort(int arr[], int n)
{
    // count number of memory writes
    int writes = 0;
 
    // traverse array elements and put it to on
    // the right place
    for (int cycle_start = 0; cycle_start <= n - 2; cycle_start++) {
        // initialize item as starting point
        int item = arr[cycle_start];
 
        // Find position where we put the item. We basically
        // count all smaller elements on right side of item.
        int pos = cycle_start;
        for (int i = cycle_start + 1; i < n; i++)
            if (arr[i] < item)
                pos++;
 
        // If item is already in correct position
        if (pos == cycle_start)
            continue;
 
        // ignore all duplicate  elements
        while (item == arr[pos])
            pos += 1;
 
        // put the item to it's right position
        if (pos != cycle_start) {
            swap(item, arr[pos]);
            writes++;
        }
 
        // Rotate rest of the cycle
        while (pos != cycle_start) {
            pos = cycle_start;
 
            // Find position where we put the element
            for (int i = cycle_start + 1; i < n; i++)
                if (arr[i] < item)
                    pos += 1;
 
            // ignore all duplicate  elements
            while (item == arr[pos])
                pos += 1;
 
            // put the item to it's right position
            if (item != arr[pos]) {
                swap(item, arr[pos]);
                writes++;
            }
        }
    }
 
    // Number of memory writes or swaps
    // cout << writes << endl ;
}
 
// Driver program to test above function
int main()
{
    int arr[] = { 1, 8, 3, 9, 10, 10, 2, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    cycleSort(arr, n);
 
    cout << "After sort : " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

// 4. Tree Sort --------------------------------------------------->

// Tree sort is a sorting algorithm that is based on Binary Search 
// Tree data structure. It first creates a binary search tree from 
// the elements of the input list or array and then performs an 
// in-order traversal on the created binary search tree to get 
// the elements in sorted order. 


// C++ program to implement Tree Sort 
#include<bits/stdc++.h> 
  
using namespace std; 
  
struct Node 
{ 
    int key; 
    struct Node *left, *right; 
}; 
  
// A utility function to create a new BST Node 
struct Node *newNode(int item) 
{ 
    struct Node *temp = new Node; 
    temp->key = item; 
    temp->left = temp->right = NULL; 
    return temp; 
} 
  
// Stores inorder traversal of the BST 
// in arr[] 
void storeSorted(Node *root, int arr[], int &i) 
{ 
    if (root != NULL) 
    { 
        storeSorted(root->left, arr, i); 
        arr[i++] = root->key; 
        storeSorted(root->right, arr, i); 
    } 
} 
  
/* A utility function to insert a new 
   Node with given key in BST */
Node* insert(Node* node, int key) 
{ 
    /* If the tree is empty, return a new Node */
    if (node == NULL) return newNode(key); 
  
    /* Otherwise, recur down the tree */
    if (key < node->key) 
        node->left  = insert(node->left, key); 
    else if (key > node->key) 
        node->right = insert(node->right, key); 
  
    /* return the (unchanged) Node pointer */
    return node; 
} 
  
// This function sorts arr[0..n-1] using Tree Sort 
void treeSort(int arr[], int n) 
{ 
    struct Node *root = NULL; 
  
    // Construct the BST 
    root = insert(root, arr[0]); 
    for (int i=1; i<n; i++) 
        root = insert(root, arr[i]); 
  
    // Store inorder traversal of the BST 
    // in arr[] 
    int i = 0; 
    storeSorted(root, arr, i); 
} 
  
// Driver Program to test above functions 
int main() 
{ 
    //create input array 
    int arr[] = {5, 4, 7, 2, 11}; 
    int n = sizeof(arr)/sizeof(arr[0]); 
  
    treeSort(arr, n); 
  
        for (int i=0; i<n; i++) 
       cout << arr[i] << " "; 
  
    return 0; 
} 

// 4. Odd-Even Sort / Brick Sort -------------------------------------->

// This is basically a variation of bubble-sort. 
// This algorithm is divided into two phases- Odd and Even Phase. 
// The algorithm runs until the array elements are sorted 
// and in each iteration two phases occurs- Odd and Even Phases.
// In the odd phase, we perform a bubble sort on odd indexed 
// elements and in the even phase, we perform a bubble sort 
// on even indexed elements.

// A C++ Program to implement Odd-Even / Brick Sort
#include<bits/stdc++.h>
using namespace std;
 
// A function to sort the algorithm using Odd Even sort
void oddEvenSort(int arr[], int n)
{
    bool isSorted = false; // Initially array is unsorted
 
    while (!isSorted)
    {
        isSorted = true;
 
        // Perform Bubble sort on odd indexed element
        for (int i=1; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
             {
                swap(arr[i], arr[i+1]);
                isSorted = false;
              }
        }
 
        // Perform Bubble sort on even indexed element
        for (int i=0; i<=n-2; i=i+2)
        {
            if (arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                isSorted = false;
            }
        }
    }
 
    return;
}
 
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
   for (int i=0; i < n; i++)
       cout << arr[i] << " ";
   cout << "\n";
}
 
// Driver program to test above functions.
int main()
{
    int arr[] = {34, 2, 10, -9};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    oddEvenSort(arr, n);
    printArray(arr, n);
 
    return (0);
}