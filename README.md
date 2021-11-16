# Zhaba script

🐸 Zhaba(Russian: ˈʐabə, жаба(frog)) script - is a general purpose, open source, statically typed, compiled to C frog programming language, focused at minimaizing code size.

Inpired by Rust, C++ and Python🐍

## Hello world

```ruby
include 'std.zh'

fn main
  out 'hi world!'
```

## Setup

- Clone repo
- Set enviroment variable `zhstd` to `repo_path/std`
- Compile [repo_path/src/Zhaba/zhaba.cpp](./Src/Zhaba/zhaba.cpp) with C++20 compiler
- use compiled binary to run your `.zh` files with `./zhaba <filename.zh>`

_note_: To build Zhaba script compiler you can also use [this Makefile](./Src/Zhaba/Makefile) `$ make build`

## Docs
Note: features with TODO are existing in language, but don't have docs😞
- [TODO introduction](./docs/introduction.md)
- [TODO compiler](./docs/compiler.md)
- [TODO program structure](./docs/program.md)
- [expressions](./docs/expressions.md)
- [if, else if, else](./docs/if.md)
- [TODO loops](./docs/loops.md)
- [functions](./docs/functions.md)
- [struct](./docs/struct.md)
- [TODO operators overload](./docs/operators_overload.md)
- [TODO generics](./docs/generics.md)
- [TODO standart lib](./docs/std.md)
- More later...

## Examples

Just some code:

```c++
include 'std.zh'
include 'vec.zh'
include 'range.zh'
include 'util.zh'

op 9 int < char a char b: <<< a as int < b as int

impl Vec
  fn swap TP a TP b
    T t = *a
    *a = *b
    *b = t

  fn int get_item_size
    T item
    int item_size
    #'item_size = sizeof(item)'
    <<< item_size

  fn next_ptr TPP ptr: *ptr = (*ptr as int + slf.get_item_size()) as TP
  fn prev_ptr TPP ptr: *ptr = (*ptr as int - slf.get_item_size()) as TP

  fn int ptr_uneq TP a TP b
    <<< a as int != b as int

  fn TP partition TP low TP high
    slf.prev_ptr(&high)
    TP pivot = high i = low j = low
    TP i = low

    @ (j = low) (slf.ptr_uneq(j pivot)) (slf.next_ptr(&j))
      ? *j < *pivot
        slf.swap(i j)
        slf.next_ptr(&i)

    slf.swap(i  pivot)
    <<< i

  fn qsort TP lhs TP rhs
    ? rhs as int - lhs as int > 8
      auto pi = slf.partition(lhs rhs)
      slf.qsort(lhs pi)
      slf.next_ptr(&pi)
      slf.qsort(pi rhs)

  fn sort
    slf.qsort(slf.begin() slf.end())

fn main
  Vec<int> a
  a.ctor()
  auto r = 0..20
  @ r.nxt(): a.push_back(rng() % 10)
  out 'Vec<int> sort:'
  a.print()
  a.sort()
  a.print()
  a.dtor()

  Vec<char> b
  b.ctor()
  r = 0..20
  @ r.nxt(): b.push_back((rng() % 26 + aschar('a') as int) as char)
  out 'Vec<char> sort:'
  b.print()
  b.sort()
  b.print()
  b.dtor()

```

- [std](./std) (most code here)
- [examples](./examples) (less code here)
- More later...
