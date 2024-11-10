
## Problem Description

Given a list of folder paths, return the list of folders after removing all sub-folders contained within other folders. You can return the result in any order.

### Definition of Sub-folder
A folder `i` is considered a sub-folder of another folder `j` if it is located within `j`. Specifically, for `folder[i]` to be a sub-folder of `folder[j]`, it must start with `folder[j]`, followed by a `"/"`. 

For example:
- `"/a/b"` is a sub-folder of `"/a"`, but
- `"/b"` is **not** a sub-folder of `"/a/b/c"`.

### Path Format

- A valid path consists of one or more concatenated strings of the form: `'/'` followed by one or more lowercase English letters.
  
  Examples of valid paths:
  - `"/leetcode"`
  - `"/leetcode/problems"`
  
  Examples of invalid paths:
  - An empty string `""`
  - A path consisting of only a `'/'`

## Example

Given the input:

```plaintext
["/a", "/a/b", "/c/d", "/c/d/e", "/c/f"]