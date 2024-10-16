# Merge k Sorted Lists

## Problem Statement

You are given an array of `k` linked-lists, each linked-list is sorted in ascending order.

Merge all the linked-lists into one sorted linked-list and return it.

## Example

**Input:**
```plaintext
[
  1 -> 4 -> 5,
  1 -> 3 -> 4,
  2 -> 6
]
```

**Output:**
```
1 -> 1 -> 2 -> 3 -> 4 -> 4 -> 5 -> 6
```

## Constraints

- `k == lists.length`
- `0 <= k <= 10^4`
- `0 <= lists[i].length <= 500`
- `-10^4 <= lists[i][j] <= 10^4`
- `lists[i]` is sorted in ascending order.
- The sum of `lists[i].length` will not exceed `10^4`.
