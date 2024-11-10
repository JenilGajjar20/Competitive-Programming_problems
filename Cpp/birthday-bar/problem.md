## Birthday Bar

Two children, **Lily** and **Ron**, want to share a chocolate bar. Each of the squares has an integer on it.

Lily decides to share a contiguous segment of the bar selected such that:

- The length of the segment matches Ron's birth month, and,
- The sum of the integers on the squares is equal to his birth day.

Determine how many ways she can divide the chocolate.

#### Example

```
s = [2, 2, 1, 3, 2]
d = 4
m = 2
```

Lily wants to find segments summing to Ron's birth day,`d = 4` with a length equalling his birth month,`m = 2` . In this case, there are two segments meeting her criteria: `[2, 2]` and `[1, 3]`.

#### Function Description

The function has the following parameter(s):

- `int s[n]`: the numbers on each of the squares of chocolate
- `int d`: Ron's birth day
- `int m`: Ron's birth month

#### Returns

- `int`: the number of ways the bar can be divided

#### Input Format

- The first line contains an integer `n`, the number of squares in the chocolate bar.
- The second line contains `n` space-separated integers `s[i]`, the numbers on the chocolate squares where `0 <= i < n`.
- The third line contains two space-separated integers, `d` and `m`, Ron's birth day and his birth month.

#### Constraints

- `1 <= n <= 100`
- `1 <= s[i] < 5`, where `(0 <= i < n)`
- `1 <= d <= 31`
- `1 <= m <= 12`
