# Zhaba script programming language🐸

Zhaba script (Russian: ˈʐabə, жаба(frog)) - is a multi-paradigm, high-level, statically typed programming language, that compiles to C and focuses at minimaizing your code size. It has partial OOP support, including user-created types, member functions and operators overloading, also there is support for generic types such as Vec\<T\>.

Inspired by Rust, C++ and Python🐍

## Hello world

```ruby
use 'std.zh'

fn main: out 'hi world!'
```

## Setup

- Clone repo
- Set enviroment variable `zhstd` to `repo_path/std`
- Compile [repo_path/src/Zhaba/zhaba.cpp](./Src/Zhaba/zhaba.cpp) with C++20 compiler
- use compiled binary to run your `.zh` files with `./zhaba <filename.zh>`

_note_: To build Zhaba script compiler you can also use [this Makefile](./Src/Zhaba/Makefile) `$ make build`

## List of features

### Lang

- basic types like `int` or `char`
- all C operators like (+ - \* %)
- if, else, else if
- while loop
- C-style for loop
- foreach loop
- single and multi line comments
- functions
- functions overloading
- support for overloading any operator
- C code injection
- other files usage
- functions overloading
- custom types(structs)
- member functions
- pointers
- references
- generic types like `Vec<T>`

### std

- `Vec<T>` - generic Vector data structure
- `Str` - String class, can be used in foreach
- `Range` - int range, can be created with `..` operator
- `Tp[1-9]` - tuple up to 9 types
- `'frog.zh'` - file with cool ascii image of 🐸
## Docs

Note: features with TODO are existing in language, but don't have docs😞

- [Syntax](./docs/syntax.pdf)
- [TODO introduction](./docs/introduction.md)
- [TODO compiler](./docs/compiler.md)
- [TODO program structure](./docs/program.md)
- [Expressions](./docs/expressions.md)
- [if, else if, else](./docs/if.md)
- [Loops](./docs/loops.md)
- [Functions](./docs/functions.md)
- [TODO operators overload](./docs/operators_overload.md)
- [Custom types](./docs/struct.md)
- [Generic types](./docs/generic_types.md)
- [TODO standart lib](./docs/std.md)
- More later...

# Examples

## Game of life

```c++
fn main
  w := 30 h := 30
  c := newCnv(w h)
  r := 54
  dead := asch('.') live := asch('#')
  c.fill(dead)

  @ i 0..c.h
    @ j 0..c.w
      ? rng() as int % 2
        *c.at(i j) = live

  @ k 0..500
    nc := newCnv(w h)
    nc.fill(dead)

    @ i 1..c.h-1
      @ j 1..c.h-1
        near := 0
        @ x, -1..2
          @ y, -1..2
            ? !(y == 0 && x == 0) && c.get(i+x j+y) == live
              &near += 1

        ? *c.at(i j) == live && near == 2 || near == 3: *nc.at(i j) = live
        | near == 3: *nc.at(i j) = live

    c = nc
    cls()
    out &c
    sleep(50)
```

And because zhaba script main goal is to minimize your code, Game of life from above can be written in 8 lines like so:

```c++
fn main: w:=30 h:=30 c:=newCnv(w h) r:=54 d:=asch('.') l:=asch('#') c.fill(d)
  @i 0..c.h: @ j 0..c.w: ?rng() as int%2: *c.at(i j)=l
  @k 0..500: nc:=newCnv(w h) nc.fill(d)
    @i 1..c.h-1: @ j 1..c.h-1: n:=0
      @x, -1..2: @ y, -1..2: ? !(y==0&&x==0)&&c.get(i+x j+y)==l: &n+=1
      ? *c.at(i j)==l&&n==2||n==3: *nc.at(i j)=l
      | n==3: *nc.at(i j)=l
    c = nc, cls(), out &c, sleep(50)
```

- [std](./std) (most code here)
- [examples](./examples) (less code here)
- More later...
