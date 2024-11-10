## Minimum String Length After Removing Substrings

You are given a string `s` consisting only of uppercase English letters.

You can apply some operations to this string where, in one operation, you can remove any occurrence of one of the substrings **"AB"** or **"CD"** from `s`.

The goal is to return the **minimum possible length** of the resulting string that can be obtained.

> **Note**: The string concatenates after removing the substring and could produce new **"AB"** or **"CD"** substrings.

---

### Example 1:

**Input**:
s = "ABFCACDB"

**Output**: 2

**Explanation**:
We can do the following operations:

- Remove the substring **"AB"**, so `s = "FCACDB"`.
- Remove the substring **"CD"**, so `s = "FCAB"`.
- Remove the substring **"AB"**, so `s = "FC"`.

So the resulting length of the string is `2`.  
It can be shown that this is the **minimum** length we can obtain.

---

### Example 2:

**Input**:
s = "ACBBD"

**Output**: 5

**Explanation**:
We cannot perform any operations on the string, so the length remains the same.

---

### Example 3:

**Input**:
s = "AABBCCDD"

**Output**: 0

**Explanation**:
Explanation:
We can remove all the substrings:

- Remove **"AB"**, so s = "BBCCDD".
- Remove **"AB"**, so s = "CCDD".
- Remove **"CD"**, so s = "DD".
- Remove **"CD"**, so s = "" (empty string).

The resulting length of the string is 0.

---

## Constraints

- `1 <= s.length <= 100`
- `s` consists only of uppercase English letters.

### Function Signature

```cpp
class Solution {
public:
    int minLength(string s) {

    }
};
```
