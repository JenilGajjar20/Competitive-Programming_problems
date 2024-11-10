# Binary tree maximum path sum

## Problem Description

A path in a binary tree is defined as a sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can appear in the sequence only once. Importantly, the path does not need to pass through the root.

The **path sum** of a path is the sum of the node values along that path.

Given the `root` of a binary tree, return the **maximum path sum** of any non-empty path.

---

## Examples

**Input 1:**

```plaintext
root = [1,2,3]
```

**Output 1:**

```plaintext
6
```

**Input 2:**

```plaintext
root = [-10,9,20,null,null,15,7]
```

**Output 2:**

```plaintext
42
```

---

## Constraints

- The number of nodes in the tree is in the range `[1, 3 * 10^4]`.
- Each node's value is in the range `[-1000, 1000]`.
