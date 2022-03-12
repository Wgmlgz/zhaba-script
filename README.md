![](https://img.shields.io/github/stars/wgmlgz/zhaba-script)
# Zhaba script programming language🐸

Zhaba script (Russian: ˈʐabə, жаба(frog)) - is a multi-paradigm, high-level, statically typed, interpreted or source to source compiled language, which focuses at minimizing programs size and maximizing development speed and comfort.

Inspired by JS, Rust, C++, and Python🐍

## Hello world!

```zh
use std

fn main
  < 'hi world!' <
```

## Setup

- Set environment variable `zhstd` to `repo_path/std`
- If you are using VSCode you can install [this](https://marketplace.visualstudio.com/items?itemName=wgmlgz.zhaba-script) extension for syntax highlighting
- Choose your destiny
  - To develop
    - This is a CMake project, so you need to check how to set up it in your IDE
      - VSCode: I am using vscode with CMake extension, so to set up project run command `CMake: Configure`, and to add run arguments add `"cmake.debugConfig": { "args": [ your args here ] }` to settings.json
      - CLion: You probably can just open it with none or some minimal configuration
    - use compiled binary to run your `.zh` files with `./zhaba <filename.zh>`
  - To use zhaba-script
    - Download the latest binary from [releases](https://github.com/Wgmlgz/zhaba-script/releases)

## List of features

- Basics:
  - Basic types like int, bool or char
  - All C operators like (+ - \* %)
  - If, else, else if
  - While loop
  - C-style for loop
  - Single and multi-line comments
  - Functions
  - Other files usage

- More advanced features:
  - Foreach loop
  - Functions overloading
  - Any operator overloading
  - New operators creation
  - Local (relative to scope) functions and operators definition
  - Pointers
  - References

- OOP:
  - Classes
  - Member functions
  - Constructors
  - Destructors
  - generic types like `Vec<T>`

- Standard library
  - `Vec<T>` - generic dynamic array
  - `Str` - String class
  - `Range` - int range, can be created with `..` operator
  - `'frog.zh'` - file with cool ASCII image of 🐸
  - `operators.zh` - more advanced operators like %%

## Docs

!!!revorking!!!
# Examples

## Game of life

```zh
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

```zh
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
