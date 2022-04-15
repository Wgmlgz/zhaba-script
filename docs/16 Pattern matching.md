# Pattern matching

Zhaba-script has pattern matching feature which allows to compare some value with a number of different values and it is something between C `switch-case` and rust `match`. If you want to match any expression, use `_`, this branch will allays be matched.

## Syntax

```zh
?? <test-exp>
  <match1>
    <block>
  <match2>
    <block>
  <match3>
    <block>
```

## Example

```zh
use std

fn main
  a := 4

  ?? a
    2: < '2' <
    0..2: < '0..2' <
    6..8: < '6..8' <
    -1..5: < '-1..5' <
    _: < '_' <
```

## How it works?

Pattern matching statement converted to if statement like so:

```zh
switch := <test-exp>

? switch == <match1>
  <block1>
| switch == <match2>
  <block2>
| switch == <match3>
  <block3>
```

Because pattern matching uses `==` operator, you can overload it to match your custom types. For example you can match `Range` with `int` (declared at std/range):

```zh
/** int in range */
op 10 bool == int i Range r
  ? r.begin < r.end: <<< r.begin <= i && i < r.end
  \ <<< r.end <= i && i < r.begin
```
