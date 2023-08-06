## Diagonal Difference

Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix **arr** is shown below:

```
1 2 3
4 5 6
9 8 9
```

The left-to-right diagonal = **1 + 5 + 9 = 15**. The right to left diagonal = **3 + 5 + 9 = 17**. Their absolute difference is **|15 - 17| = 2**.

#### Function description

The function takes the following parameter:

- **int arr[n][m]**: an array of integers

#### Return

- **int**: the absolute diagonal difference

#### Input Format

- The first line contains a single integer, _n_, the number of rows and columns in the square matrix _arr_.
- Each of the next _n_ lines describes a row, _arr[i]_, and consists of _n_ space-separated integers _arr[i][j]_.

#### Constraints

- -100 <= arr[i][j] <= 100

#### Output Format

- Return the absolute difference between the sums of the matrix's two diagonals as a single integer.
