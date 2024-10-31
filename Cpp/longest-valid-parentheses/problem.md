# Longest Valid Parentheses

## Problem Description

You are given a string `s` consisting of characters `'('` and `')'`, representing parentheses. Your goal is to determine the length of the longest valid (well-formed) parentheses substring within `s`.

A valid parentheses substring is defined as a sequence of parentheses where every opening parenthesis `(` has a corresponding closing parenthesis `)`, and they are arranged in the correct order.

## Objective

Return the length of the longest well-formed (valid) parentheses substring in the given string `s`.

---

### Examples

**Input 1:**

```plaintext
s = "(()"
```

**Output 1:**

```plaintext
2
```

**Input 2:**

```plaintext
s = "(())()())"
```

**Output 2:**

```plaintext
4
```

**Input 3:**

```plaintext
s = ""
```

**Output 3:**

```plaintext
0
```

---

### Constraints

- `0 <= s.length <= 30000`
- `s` consists of only the characters `'('` and `')'`.
