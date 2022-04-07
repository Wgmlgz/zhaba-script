# Functions

Functions are the core of programming in zhaba-script. To define your function use the `fn` keyword followed by return type (don't write it if the function doesn't anything), then function_name and finally set of arguments which are pairs of type and name. Functions can be declared at the global level, but also in local scope (like variables).
To return something from a function use `<<<` and to call if write its name followed by `()`.

## Syntax

Declaration:

```zh
fn [return-type(optional)] function-name [type name [type name [...type name]]]
  code-block
```

Call with args:

```
 function_name(args)
```

Call without args:

```
 function_name()
```

## Examples

```zh
/** int return type 2 args */
fn int plus int a int b
  <<< a + b // to return use <<<

/** char return type 1 argument */
fn char aschar str s: <<< *(s as charP) // body at the same line

/** No return type 1 argument */
fn fizz_buzz int mx
  auto r = 0..mx
  @ r.nxt()
    auto i = r.cur
    ? i %% 3 && i %% 5: out 'FizzBuzz'
    | i %% 3: out 'Fizz'
    | i %% 5: out 'Buzz'
    \ out i

/** No return type 1 argument */
fn func1 int mx
  fn func2: <<< 5
  < (func2()  + func2()) <

/** No return type and no args */
fn main
  fizz_buzz(50) // call example
```
