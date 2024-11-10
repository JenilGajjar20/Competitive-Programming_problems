## Sherlock and Squares

Watson likes to challenge Sherlock's math ability. He will provide a starting and ending value that describe a range of integers, inclusive of the endpoints. Sherlock must determine the number of square integers within that range.

**Note**: A square integer is an integer which is the square of an integer, e.g. `1`, `4`, `9`, `16`, `25`.

#### Example

```
a = 24
b = 49
```

There are three square integers in the range: `25`, `36` and `49`. Return `3`.

#### Function Description

The squares function should return an integer representing the number of square integers in the inclusive range from `a` to `b`.

squares has the following parameter(s):

- `int a`: the lower range boundary
- `int b`: the upper range boundary

#### Returns

- `int`: the number of square integers in the range

#### Input Format

- The first line contains `q`, the number of test cases.
- Each of the next lines contains two space-separated integers,`a` and `b`, the starting and ending integers in the ranges.

#### Constraints

- `1 <= q <= 100`
- `1 <= a <= b <= 10^9`
