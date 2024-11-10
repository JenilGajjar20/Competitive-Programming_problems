# N-Queens II

## Problem Description
The **N-Queens puzzle** is the problem of placing `n` queens on an `n x n` chessboard so that no two queens can attack each other (no same row, column, or diagonal). This variation of the problem, N-Queens II, requires counting the number of distinct solutions rather than returning each configuration.

Given an integer `n`, return the number of unique ways to arrange the queens on the chessboard.

## Objective
Return the count of all valid configurations for the N-Queens puzzle, where each configuration ensures that no two queens attack each other.

---

### Constraints
- `1 <= n <= 9`

### Examples

**Example 1**

**Input**
```plaintext
n = 4
```

**Output**
```plaintext
2
```

**Example 2**

**Input**
```plaintext
n = 1
```

**Output**
```plaintext
1
```