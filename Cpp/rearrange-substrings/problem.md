# Count Substrings That Can Be Rearranged to Contain a String II

## Problem Description

You are given two strings, `word1` and `word2`. Your task is to count all possible substrings of `word1` that can be rearranged to contain `word2` as a subsequence.

In other words, for each substring of `word1`, if you can rearrange its characters to form a string that contains `word2` as a subsequence, then this substring is considered valid. The order of characters in `word2` should be preserved within the rearranged substring.

## Objective

Return the total number of such valid substrings of `word1` that meet the requirement of containing `word2` as a subsequence. The answer may be large, so return it as a 64-bit integer.

---

### Constraints

- `1 <= word1.length, word2.length <= 1000`
- `word1` and `word2` consist only of lowercase English letters.

### Example

**Input**
```plaintext
word1 = "abcabc", word2 = "abc"
```

**Output**
```plaintext
10
```