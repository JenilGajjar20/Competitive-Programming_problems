# [New Year Chaos](https://www.hackerrank.com/challenges/new-year-chaos/problem)

You will be given a list of 32 bit unsigned integers. Flip all the bits ( and ) and return the result as an unsigned integer.

### Example
```
n = 9
9 (decimal) = 1001 (binary)
00000000000000000000000000001001 = 9 (decimal)
11111111111111111111111111110110 = 4294967286 (decimal)

Return 4294967286
```

### Function Description

Complete the flippingBits function in the editor below.

flippingBits has the following parameter(s):

- int n: an integer

### Returns

int: the unsigned decimal integer result

### Input Format

The first line of the input contains , the number of queries.
Each of the next  lines contain an integer, , to process.

### Constraints

1 <= q <= 100

0 <= n < 2^32

### Sample Input 0
```
3
2147483647
1
0
```

### Sample Output 0
```
2147483648
4294967294
4294967295
```

### Sample Input 1
```
2
4
123456
```

### Sample Output 1
```
4294967291
4294843839
Explanation 1
```

### Sample Input 2
```
3
0
802743475
35601423
```

### Sample Output 2
```
4294967295
3492223820
4259365872
```
