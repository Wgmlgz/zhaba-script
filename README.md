# Zhaba script

🐸 Zhaba(Russian: ˈʐabə, жаба(frog)) script - is a general purpose, open source, statically typed, compiled to C frog programming language, focused at minimaizing code size.

Inpired by Rust, C++ and Python🐍

## Hello world

```ruby
include 'std.zh'
fn main: out 'hi world!'
```

## Setup

- 1 Clone repo
- 2 Set enviroment variable `zhstd` to `repo_path/std`
- 3 Compile [repo_path/src/Zhaba/zhaba.cpp](./Src/Zhaba/zhaba.cpp) with C++20 compiler
- 4 use compiled binary to run your `.zh` files with `./zhaba <filename.zh>`

_note_: To build Zhaba script compiler you can also use [this Makefile](./Src/Zhaba/Makefile) `$ make build`

## Docs

- [TODO intruduction]()
- [if, else if, else](./docs/if.md)
- [expressions](./docs/expressions.md)
- [functions](./docs/functions.md)
- [TODO program structure](./docs/program.md)
- [TODO standart lib](./docs/std.md)
- [Structs](./docs/struct.md)
- More later...

## Examples

- [std](./std)
- [examples](./examples)
- More later...
