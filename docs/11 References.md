# References

A reference variable is an alias, that is, another name for an already existing variable. Once a reference is initialized with a variable, either the variable name or the reference name may be used to refer to the variable. Internally references are converted to pointers with `&` and `*` operators when needed.

## Creating References in zhaba-script

Think of a variable name as a label attached to the variable's location in memory. You can then think of a reference as a second label attached to that memory location. Therefore, you can access the contents of the variable through either the original variable name or the reference. But zhaba-script doesn't allows to store them directly, only returning them or using them as function arguments. To create reference use `R` at the end of variable name.

## Syntax

```zh
TypeNameR
```

## Passing references as arguments

References are mostly used when you want to use some variable without copping it. Here is example of this:

```zh
use std

fn add_copy int a
  ++a
fn add_ref intR a
  ++a

fn main
  t := 5
  < t < // 5
  add_ref(t)
  < t < // 6
  add_copy(t)
  < t < // 6
```

## Returning references

You can also return reference and then modify it's content. For example `Vec<T>` returns a reference when you call `[]` or `.at()`.

```zh
/** From std/vec.zh */
impl Vec
  fn TP atP int pos: <<< (slf.head + pos) as TP
  fn TR at int pos: <<< *slf.atP(pos)

fn main
  v := Vec<int>(5)
  v[3] = 4
  < v < // [0 0 0 4 0]
```

## References and lval + rval semantics

References are referring to some valid variable or object in memory. Because of that they cannot be created from rval expression. Read more about rval/lval TODO [here]().

```zh
use std

fn add_ref intR a
  ++a

fn main
  a := 5
  add_ref(a) // Ok
  add_ref(5 + 5)
  /**
   *  error :( -> test.zh:9:12
   *  9 |   add_ref(5 + 5)
   *    |             ^
   *    | Expression must be lval to be able pass by reference
   */
```
