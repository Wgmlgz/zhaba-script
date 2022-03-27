# Zhaba script programming language🐸

Zhaba script (Russian: ˈʐabə, жаба(frog)) - is a multi-paradigm, high-level, statically typed, interpreted or source to source compiled language, which focuses at minimizing programs size and maximizing development speed and comfort.

Inspired by JS, Rust, C++, and Python🐍

## Docs

Here is a zhaba-script docs website with syntax highlighting -> https://wgmlgz.github.io/zhaba/?page=docs

## Hello world!

```zh
use std

fn main
  < 'hi world!' <
```

## Setup

- Set environment variable `zhstd` to `repo_path/std`
- If you are using VSCode you can install [this](https://marketplace.visualstudio.com/items?itemName=wgmlgz.zhaba-script) extension for syntax highlighting
- To develop
  - This is a CMake project, so you need to check how to set up it in your IDE
    - VSCode: I am using vscode with CMake extension, so to set up project run command `CMake: Configure`, and to add run arguments add `"cmake.debugConfig": { "args": [ your args here ] }` to settings.json
    - CLion: You probably can just open it with none or some minimal configuration
  - use compiled binary to run your `.zh` files with `./zhaba <filename.zh>`
- To use zhaba-script
  - Download the latest binary from [releases](https://github.com/Wgmlgz/zhaba-script/releases) / or use [web IDE](https://wgmlgz.github.io/zhaba/)

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

## Motivation

C++ is one of my favorite languages because of it's power and performance, but at the same time it is very old and doest't have lots of amazing features of modern programming languages. For example to simply loop over int range you have to use something like this: `for (int i = 0; i < n; ++i)`. Can we do better? In python you can use `for i in range(0, n)`, this is already a huge improvement, but can we do even better? Of course! Zhaba-script solution to this task looks like this: `@ i 0..n`. This example can show how some of the syntax elements are not necessary and can be reduced. To be fair in C++20 we can do `for (auto i : std::ranges::iota_view(0, 10))` or with reduced namespaces `for (auto i : iota_view(0, 10))`, this is definitely good, but still longer then python.

## Goal

So, the main goal of zhaba-script is to make your programs smaller while also maintain readability and performance. To do this, zhaba-script is using C++ low level semantic concepts and bringing them with python-like syntax.

## Syntax

The zhaba-script syntax is the most different and interesting part from other programming languages and mostly resembles python, which does't use `{}` to declare blocks of code. But zhaba-script takes a step forward by removing almost all unnecessary syntax elements like `,` in some places. For example in this expression: `print(1, 2, 4)` it is obvious where commas should be so you don't need to explicitly write them. Other syntax elements like `;` or `:` are not required, but their use is put to make your code even shorter. Also most common keywords such as `if` or `return` are reduced to simple symbols, to make code shorter and even more readable. You can read more about all the syntax elements TODO [here]().

## Memory model

Zhaba-script memory model is similar to the C memory model, which consists of stack, heap and pointers to manage it. In general: stack is faster and used for storing variables, while heap is slower, but can be accessed in any part of a program thought pointers.
