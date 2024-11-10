# N-Queens

## Problem Description
The **N-Queens** puzzle requires placing `n` queens on an `n x n` chessboard such that no two queens threaten each other. A queen can attack any piece in the same row, column, or diagonal. 

Given an integer `n`, the task is to find all distinct solutions to the N-Queens puzzle. Each solution should be represented as a distinct board configuration where `'Q'` denotes a queen, and `'.'` denotes an empty square.

## Objective
Return all possible configurations of the N-Queens puzzle in any order, where each configuration is a list of strings representing the chessboard.

---

### Constraints
- `1 <= n <= 9`

### Example
**Input**
```plaintext
n = 4
```


**Output**
```plaintext
[[".Q..","...Q","Q...","..Q."],
 ["..Q.","Q...","...Q",".Q.."]]
```
