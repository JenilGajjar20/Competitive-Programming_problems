A boolean expression is an expression that evaluates to either true or false, and it can have the following forms:

1. `'t'`: evaluates to true.
2. `'f'`: evaluates to false.
3. `'!(subExpr)'`: evaluates to the logical NOT of the inner expression `subExpr`.
4. `'&(subExpr1, subExpr2, ..., subExprn)'`: evaluates to the logical AND of the inner expressions `subExpr1, subExpr2, ..., subExprn`, where `n >= 1`.
5. `'|(subExpr1, subExpr2, ..., subExprn)'`: evaluates to the logical OR of the inner expressions `subExpr1, subExpr2, ..., subExprn`, where `n >= 1`.

Given a string `expression` that represents a boolean expression, return its evaluation. It is guaranteed that the expression is valid and follows the rules described above.

---
