## Circular Array Rotations

John Watson knows of an operation called a right circular rotation on an array of integers. One rotation operation moves the last array element to the first position and shifts all remaining elements right one. To test Sherlock's abilities, Watson provides Sherlock with an array of integers. Sherlock is to perform the rotation operation a number of times then determine the value of the element at a given position.

For each array, perform a number of right circular rotations and return the values of the elements at the given indices.

#### Example

```
a = [3, 4, 5]
k = 2
queries = [1, 2]
```

Here `k` is the number of rotations on `a`, and `queries` holds the list of indices to report. First we perform the two rotations:
`[3, 4, 5] -> [5, 3, 4] -> [4, 5, 3]`. Now return the values from the zero-based indices `1` and `2` as indicated in the `queries` array.

```
a[1] = 5
a[2] = 3
```

#### Function Description

circularArrayRotation has the following parameter(s):

- `int a[n]`: the array to rotate
- `int k`: the rotation count
- `int queries[1]`: the indices to report

#### Returns

- `int[q]`: the values in the rotated `a` as requested in `m`.

#### Input Format

- The first line contains `3` space-separated integers, `n`, `k`, and `q`, the number of elements in the integer array, the rotation count and the number of queries.
- The second line contains `n` space-separated integers, where each integer `i` describes array element `a[i]` (where `0 <= i < n`).
- Each of the `q` subsequent lines contains a single integer, `queries[i]`, an index of an element in `a` to return.

#### Constraints

- `1 <= n <= 10^5`
- `1 <= a[i] <= 10^5`
- `1 <= k <= 10^5`
- `1 <= q <= 500`
- `0 <= queries[i] < n`
