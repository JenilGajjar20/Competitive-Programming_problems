## Divisible Sum Pairs

Given an array of integers and a positive integer `k`, determine the number of `(i, j)` pairs where `i < j` and `ar[i] + ar[j]` is divisible by `k`.

#### Example

```
ar = [1, 2, 3, 4, 5, 6]
k = 5
```

Three pairs meet the criteria: `[1, 4], [2, 3]` and `[4, 6]`.

#### Function Description

The function has the following parameter(s):

- `int n`: the length of array
- `int ar[n]`: an array of integers
- `int k`: the integer divisor

#### Returns

- `int`: the number of pairs

#### Input Format

- The first line contains `2` space-separated integers, `n` and `k`;
- The second line contains `n` space-separated integers, each a value of `arr[i]`.

#### Constraints

- `2 <= n <= 100`
- `1 <= k <= 100`
- `1 <= ar[i] <= 100`
