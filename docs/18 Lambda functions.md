# Lambda function expressions

An lambda function expression is a compact alternative to a traditional function expression, but is limited and can't be used in all situations.

There are differences between lambda functions and traditional functions, as well as some limitations:

Lambda function return type is automatically inferred and cannot be explicitly set.
Lambda function body can only be an expression, so, for example, ifs or loops cannot be inside lambda function body.

## Syntax

To create lambda function write arguments list wrapped in parentheses followed by `->` and expression.

```zh
(Type1 arg1[, Type2 arg2[, ...]]) -> expression
```

## Examples

```zh
/** Storing lambda */
f := (intR i) -> i*i // f type is `F<int intR>`

out iota(0 10).filter((intR i) -> i %% 2).map(f)
/**   Inline lambda   ^^^^^^^^^^^^^^^^^^  */

sum := (int a int b) -> a + b
out sum(1 5)
```
