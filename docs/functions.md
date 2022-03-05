# Functions

Functions are the core of programming in zhaba-script. To define your function use the `fn` keyword followed by return type (don't write it if the function doesn't anything), then function_name and finally set of arguments which are pairs of type and name.
To return something from a function use `<<<`.
To call function write its name followed by `()`.

## Syntax

### Declaration

```rust
fn <return type(optional)> function_name <type name> <type name>...
  <function body>
```

### Call

```
 <function name>(<args>)
```

## Examples

```rust
// int return type 2 args
fn int plus int a int b
  <<< a + b // to return use <<<
```

```rust
// char return type 1 argument
fn char aschar str s: <<< *(s as charP) // body at the same line
```

```rust
/// no return type 1 argument
fn fizz_buzz int mx
  auto r = 0..mx
  @ r.nxt()
    auto i = r.cur
    ? i %% 3 && i %% 5: out 'FizzBuzz'
    | i %% 3: out 'Fizz'
    | i %% 5: out 'Buzz'
    \ out i
```

```rust
// no return type and no args
fn main
  fizz_buzz(50) // call example
```
