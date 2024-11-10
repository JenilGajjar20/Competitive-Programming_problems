
A string `s` is called **happy** if it satisfies the following conditions:

1. `s` only contains the letters **'a'**, **'b'**, and **'c'**.
2. `s` does not contain any of the following as a substring:
   - `"aaa"`
   - `"bbb"`
   - `"ccc"`
3. `s` contains at most **a** occurrences of the letter `'a'`.
4. `s` contains at most **b** occurrences of the letter `'b'`.
5. `s` contains at most **c** occurrences of the letter `'c'`.

## Problem Statement

Given three integers **a**, **b**, and **c**, return the longest possible happy string. 

- If there are multiple longest happy strings, return any of them.
- If there is no such string, return the empty string `""`.

## Note

A **substring** is a contiguous sequence of characters within a string.