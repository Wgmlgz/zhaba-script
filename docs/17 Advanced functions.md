# Advanced functions

Zhaba-script support first-class functions, and that means that you can pass functions as arguments to other functions, returning them as the values from other functions, and assigning them to variables or storing them in data structures. Zhaba-script has anonymous functions (function literals) as well.

## Functions type

All functions have type of `F<...>`, inside `< >` there is return type and types of function arguments.

```zh
F<ReturnType [Arg1Type [Arg2Type [...]]]>
```

## Referencing function

To do something with your functions you need to reference it. Just write function name like it is a variable. In function is overloaded, the last overload will be referenced.

Storing function:

```zh
fn int test int a int b: <<< a + b

fn main
  f := test
  out f(2 4)
```

Passing function as argument:

```zh
fn int test F<int int int> f
  <<< f(1 6)

fn int sum int a int b
  <<< a + b

fn main
  out test(sum)
```
