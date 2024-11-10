**Problem Statement:**

Write a C++ program to evaluate a postfix expression using a stack. The expression consists of single-digit operands and operators (+, -, *, /).

**Algorithm used:**

- initialize stack to store operands
- scan the expression from left to right and do the following for every element
- if the element is an operand, push it into the stack
- if the element is an operator, pop two operands from the stack and apply the operator, push the result back into the stack
- when the expression is ended, the number in the stack is the final result

**Example:**

Given expression = 53+82-*

Push 5, Push 3 (since both are operands)
When + is encountered, pop 2 recently pushed operands and evaluate 5+3=8, push 8 back onto stack.
Push 8, Push 2 (since both are operands)
When - is encountered, pop 2 recently pushed operands and evaluate 8-2=6, push 6 onto stack.
When * is encountered, pop 2 recently pushed operands and evaluate 8*6=48, push 48 onto stack.
Entire expression has been traversed through, remaining element in the stack (48) is the result.