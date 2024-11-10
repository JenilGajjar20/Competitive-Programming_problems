## Utopian Tree

The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.

A Utopian Tree sapling with a height of 1 meter is planted at the onset of spring. How tall will the tree be after `n` growth cycles?

For example, if the number of growth cycles is `n = 5`, the calculations are as follows:

```
Period  Height
0          1
1          2
2          3
3          6
4          7
5          14
```

#### Function Description

utopianTree has the following parameter(s):

- `int n`: the number of growth cycles to simulate

#### Returns

- `int`: the height of the tree after the given number of cycles

#### Input Format

- The first line contains an integer, `t`, the number of test cases.
- `t` subsequent lines each contain an integer, `n`, the number of cycles for that test case.

#### Constraints

- `1 <= t <= 10`
- `0 <= n <= 60`
