# Pythagorean Theorem Problem

## Problem Description

The Pythagorean Theorem states that in a right-angled triangle, the square of the length of the hypotenuse (the side opposite the right angle) is equal to the sum of the squares of the lengths of the other two sides. This relationship can be expressed mathematically as:

\[
a^2 + b^2 = c^2
\]

where:
- \( a \) and \( b \) are the lengths of the legs of the triangle.
- \( c \) is the length of the hypotenuse.

### Task

Given the lengths of the two legs of a right triangle, calculate the length of the hypotenuse using the Pythagorean Theorem.

## Input

Two positive integers or floating-point numbers, \( a \) and \( b \), representing the lengths of the two legs of a right triangle.

- Constraints:
  - \( a > 0 \)
  - \( b > 0 \)

## Output

A floating-point number representing the length of the hypotenuse, rounded to two decimal places.

## Examples

### Example 1:
```md
Input: 
a = 3, b = 4

Output: 
c = 5.00

Explanation: 
According to the Pythagorean Theorem: 
\( 3^2 + 4^2 = 9 + 16 = 25 \), so \( c = \sqrt{25} = 5 \).
