## Plus Minus

Given an array of integers, calculate the ratios of its elements that are **positive**, **negative**, and **zero**. Print the decimal value of each fraction on a new line with _6_ places after the decimal.

```
Note: This challenge introduces precision problems.
```

#### Example

- arr = [1, 1, 0, -1, -1]

- There are _n = 5_ elements, two positive, two negative and one zero. Their ratios are _2/5 = 0.400000_, _2/5 = 0.400000_ and _1/5 = 0.200000_. Results are printed as:

```
0.400000
0.400000
0.200000
```

#### Function Description

The function has the following parameter(s):

- **int arr[n]**: an array of integers

#### Print

- Print the ratios of **positive**, **negative** and **zero** values in the array. Each value should be printed on a separate line with _6_ digits after the decimal. The function should not return a value.

#### Input Format

- The first line contains an integer, _n_, the size of the array.
- The second line contains _n_ space-separated integers that describe _arr[n]_.

#### Constraints

- 0 < n < 100
- -100 <= arr[i] <= 100
