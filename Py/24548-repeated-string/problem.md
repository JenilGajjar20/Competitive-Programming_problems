# [Repeated String](https://www.hackerrank.com/challenges/repeated-string/problem)
There is a string, , of lowercase English letters that is repeated infinitely many times. Given an integer, , find and print the number of letter a's in the first  letters of the infinite string.

### Example
```
s = 'abcac'
n = 10
```

The substring we consider is , the first  characters of the infinite string. There are  occurrences of a in the substring.

### Function Description

Complete the repeatedString function in the editor below.

repeatedString has the following parameter(s):

- s: a string to repeat
- n: the number of characters to consider

### Returns
- int: the frequency of a in the substring

### Input Format

The first line contains a single string,s.

The second line contains an integer,s.

### Constraints
- 1 <= s <= 100
- 1 <= n <= 10^12
- For 25% of the test cases, n <= 10^6 .

### Sample Input 0
```
aba
10
```

### Sample Output 0
```
7
```

### Explanation 0
The first  letters of the infinite string are abaabaabaa. Because there are  a's, we return .


### Sample Input 1
```
a
1000000000000
```

### Sample Output 1
```
1000000000000
```

### Explanation 1
Because all of the first  letters of the infinite string are a, we return .