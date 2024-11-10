## Sequence Equation

Given a sequence of `n` integers, `p(1), p(2), ... , p(n)` where each element is distinct and satisfies `1 <= p(x) <= n`. For each `x` where `1 <= x <= n`, that is `x` increments from `1` to `n`, find any integer `y` such that `p(p(y)) ≡ x` and keep a history of the values of `y` in a return array.

#### Example

`p = [5, 2, 1, 3, 4]`

Each value of `x` between `1` and `5`, the length of the sequence, is analyzed as follows:

```
1. x = 1 ≡ p[3], p[4] = 3, so p[p[4]] = 1
2. x = 2 ≡ p[2], p[2] = 2, so p[p[2]] = 2
3. x = 3 ≡ p[4], p[5] = 4, so p[p[5]] = 3
4. x = 4 ≡ p[5], p[1] = 5, so p[p[1]] = 4
5. x = 5 ≡ p[1], p[3] = 1, so p[p[3]] = 5
```

The values for `y` are `[4, 2, 5, 1, 3]`

#### Function Description

permutationEquation has the following parameter(s):

- `int p[n]`: an array of integers.

#### Returns

- `int[n]`: the values of `y` for all `x` in the arithmetic sequence `1` to `n`.

#### Input Format

- The first line contains an integer `n`, the number of elements in the sequence.
- The second line contains `n` space-separated integers `p[i]` where `1 <= i <= n`.

#### Constraints

- `1 <= n <= 50`
- `1 <= p[i] <= 50`, where `1 <= i <= n`.
- Each element in the sequence is distinct.
