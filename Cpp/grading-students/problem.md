## Grading Students

HackerLand University has the following grading policy:

- Every student receives a **_grade_** in the inclusive range from **0** to **100**.
- Any **_grade_** less than **40** is a failing grade.

Sam is a professor at the university and likes to round each student's **_grade_** according to these rules:

- If the difference between the **_grade_** and the next multiple of **5** is less than **3**, round **_grade_** up to the next multiple of **5**.
- If the value of **_grade_** is less than **38**, no rounding occurs as the result will still be a failing grade.

#### Examples

- **_grade_** = **84** round to **85** (**85 - 84** is less than **3**).
- **_grade_** = **29** do not round (result is less than 40).
- **_grade_** = **57** do not round (**60 - 57** is **3** or higher).

Given the initial value of **_grade_** for each of Sam's **_n_** students, write code to automate the rounding process.

#### Function Description

The function has the following parameter(s):

- **int grades[n]**: the grades before rounding

#### Returns

- **int[n]**: the grades after rounding as appropriate

#### Input Format

- The first line contains a single integer, _n_, the number of students.
- Each line _i_ of the _n_ subsequent lines contain a single integer, **_grades[i]_**.

#### Constraints

- 1 <= n <= 60
- 0 <= grades[i] <= 100
