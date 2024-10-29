# 48. Rotate Image

[Problem Link](https://leetcode.com/problems/rotate-image/description/)

## Problem Description
You are given an `n x n` 2D matrix representing an image, and you need to rotate the image by 90 degrees clockwise. 

You must rotate the image **in-place**, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix for the rotation.

### Constraints
- `n == matrix.length == matrix[i].length`
- `1 <= n <= 20`
- `-1000 <= matrix[i][j] <= 1000`

## Examples

### Example 1
![Example 1](https://assets.leetcode.com/uploads/2020/08/28/mat1.jpg)

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[7,4,1],[8,5,2],[9,6,3]

### Example 2
![Example 2](https://assets.leetcode.com/uploads/2020/08/28/mat2.jpg)

Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]