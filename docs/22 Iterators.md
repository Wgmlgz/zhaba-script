# Iterators

An Iterator is an object that can be used to loop through collections, like `Vec<T>` or `Map<K V>`. It is called an "iterator" because "iterating" is the technical term for looping.

Iterators isn't a part of zhaba-script, but they are rather implemented throw standard library.

## Using iterators

When using iterators we have _**begin**_ and _**end**_, begin is included in collection and end isn't.

Zhaba-script iterators has this convention:

First, get iterator range with `iter()` function.
Then, get begin and end iterators from it.
And finally increment iterator using prefix `++` operator, while you didn't reach the end. You can check if iterator reached end using `!=` binary operator.
To get content of iterator use overloaded prefix operator `*`.

Here is example if doing that:

```zh
use std

fn main
  v := iota(0 10)

  iters := iter(v)
  begin := iters.begin()
  end := iters.end()
  cur := begin
  @ cur != end
    val := *cur
    out val
    ++cur
```

## Iterators + foreach
Using iterators like that isn't cool, so zhaba-script has [foreach](8%20Loops.md) loop for that:

```zh
use std

fn main
  v := iota(0 10)

  @ cur v
    val := *cur
    out val
```
