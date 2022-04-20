# Zhaba script programming language🐸

Zhaba script (Russian: ˈʐabə, жаба(frog)) - is a multi-paradigm, high-level, statically typed, interpreted or source to source compiled language, which focuses at minimizing programs size and maximizing development speed and comfort.

Inspired by JS, Rust, C++, and Python🐍

![frog_img](https://raw.githubusercontent.com/Wgmlgz/zhaba-script/main/img/frog.jpg)

# Useful links 🔗

## Try it now!

I created this web playground, so you can play with examples right now! -> https://wgmlgz.github.io/zhaba/

## Docs 📑

Here is a zhaba-script docs website with syntax highlighting -> https://wgmlgz.github.io/zhaba/?page=docs

## VS Code support

You can code in your's favorite frog programming language in your favorite IDE -> https://marketplace.visualstudio.com/items?itemName=wgmlgz.zhaba-script

# Hello world! 👋

```zh
use std

fn main
  < 'hi world!' <
```

# List of features

Complier & dev environment:

- Interpretation (throw bytecode)
- Interpretation in web environment
- Web code editor
- Docs website
- Translation to C

Basics:

- Basic types like int, bool or char
- Variables (and local redefinition)
- All C operators like (+ - \* %)
- If, else, elif
- While loop
- C-style for loop
- Single and multi-line comments
- Functions
- Other files usage

More advanced features:

- Foreach loop
- Patten matching
- Functions overloading
- Any operator overloading
- Subscript `[]` and call `()` overload
- New operators creation
- Local (relative to scope) functions and operators definition
- Pointers
- Full references support (pass, return and store)
- Rvalue to lvalue conversion

Objects:

- Custom types (classes/structs)
- Member functions
- Constructors
- Copy constructors (and implicit calls)
- Destructors (and implicit calls)
- Generic types like `Vec<T>`
- First-class functions

Standard library

- `Vec<T>` - generic dynamic array
- `Str` - String class
- Easy input/output throw `<` and `>` overloaded operators
- `Range` - int range, can be created with `..` operator, used in loops or `Vec` slicing
- `frog.zh` - file with cool ASCII image of 🐸
- `operators.zh` - more advanced operators like %%
- `brainfuck.zh` - brainfuck interpreter

TODO:

Lang core:

- bool cast in if and for
- More terminal features (OS independent colors, wait for input in web, control characters)
- Modules instead of preprocessing
- C modules
- Object & Array destructuring
- Better patten matching 
- Object destructuring
- Inline loops (`exp @ loop_exp`), mixed with other inline operations `exp @ loop_exp ? if_exp`
- Ternary operator (`exp ? true_exp : false_exp`) this syntax will not work, so refactoring is needed

Functional features:

- Generic functions (args without type or even template metaprogramming)
- Function operators (`|>`, `map`, `reduce`, `filter`)
- Lambda functions (`args -> exp`, `args -> {block}`)

OOP features:

- Inheritance
- Virtual inheritance (vtable is needed to generic functions)

Std:

- `Set<T>`

# Why? 🤔

## Motivation

C++ is one of my favorite languages because of it's power and performance, but at the same time it is very old and doest't have lots of amazing features of modern programming languages. For example to simply loop over int range you have to use something like this: `for (int i = 0; i < n; ++i)`. Can we do better? In python you can use `for i in range(0, n)`, this is already a huge improvement, but can we do even better? Of course! Zhaba-script solution to this task looks like this: `@ i 0..n`. This example can show how some of the syntax elements are not necessary and can be reduced. To be fair in C++20 we can do `for (auto i : std::ranges::iota_view(0, 10))` or with reduced namespaces `for (auto i : iota_view(0, 10))`, this is definitely good, but still longer then python.

## Goal

So, the main goal of zhaba-script is to make your programs smaller while also maintain readability and performance. To do this, zhaba-script is using C++ low level semantic concepts and bringing them with short python-like syntax.

## Syntax

The zhaba-script syntax is the most different and interesting part from other programming languages and mostly resembles python, which does't use `{}` to declare blocks of code. But zhaba-script takes a step forward by removing almost all unnecessary syntax elements like `,` in some places. For example in this expression: `print(1, 2, 4)` it is obvious where commas should be so you don't need to explicitly write them. Other syntax elements like `;` or `:` are not required, but their use is put to make your code even shorter. Also most common keywords such as `if` or `return` are reduced to simple symbols, to make code shorter and even more readable. Other very big feature is ability to overload any operator and even create your onw new ones. You can read more about all the syntax elements TODO [here](https://wgmlgz.github.io/zhaba/?page=docs&chapter=2).

## Memory model

Zhaba-script memory model is similar to the C memory model, which consists of stack, heap and pointers to manage it.

# Compatibility

Zhaba-script currently requires zero external dependencies in interpretation mode and C compiler like GCC if you want to translate programs to C. Also You will need a C++20 compiler with Cmake to build it. Zhaba-script has been successfully tested on Linux, MacOS and Windows.

# Setup ⚙️

If you want to run/develop zhaba-script on your own machine here is instruction for you

- Set environment variable `zhstd` to `repo_path/std`
- If you are using VSCode you can install [this](https://marketplace.visualstudio.com/items?itemName=wgmlgz.zhaba-script) extension for syntax highlighting
- To develop
  - This is a CMake project, so you need to check how to set up it in your IDE
    - VSCode: I am using vscode with CMake extension, so to set up project run command `CMake: Configure`, and to add run arguments add `"cmake.debugConfig": { "args": [ your args here ] }` to settings.json
    - CLion: You probably can just open it with none or some minimal configuration
  - use compiled binary to run your `.zh` files with `./zhaba <filename.zh>`
- To use zhaba-script
  - Download the latest binary from [releases](https://github.com/Wgmlgz/zhaba-script/releases) / or use [web IDE](https://wgmlgz.github.io/zhaba/)

# Some demonstration examples

Classic FizzBuzz:

```zh
use std

fn fizz_buzz int mx
  @ i 1..mx+1
    ? i %% 15: <'FizzBuzz'<
    | i %% 3: <'Fizz'<
    | i %% 5: <'Buzz'<
    \ <i<

fn main: fizz_buzz(20)
```

Brainfuck 🤯 interpreter:

```zh
fn brainfuck str s
  p := malloc(3000) as u8P
  b := 0
  @ i 0..len(s)
    v := *p
    c := s^i
    ?? c
      '>': p = p + 1
      '<': p = p - 1
      '+': ++(*p)
      '-': --(*p)
      '.': put (v as char)
      ',': >(*p)
      '[': ? !v:
            ++b
            @ ! !b
              ++i
              ? s^i == '[': ++b
              ? s^i == ']': --b
      ']': ? ! !v:
            ? c == ']': ++b
            @ ! !b
              --i
              ?s^i=='[': --b
              ?s^i==']': ++b
            --i

/** Hello world! */
fn main: brainfuck(`
  ++++++++[>++++[>++>+++>+++>+<<<<-]>+>->+>>
  +[<]<-]>>.>>---.+++++++..+++.>.<<-.>.+++.-
  -----.--------.>+.>++.
  `)

```

Here is my favorite demonstration of zhaba-script standard library. There is `Vec`, slicing, `Range` and also rval to lval conversion. And all of this is make throw zhaba-script code, so that means that you can also replicate this in your own code, ore even do more crazy stuff!

```zh
use vec

fn main
  v := iota(0 10)

  out v
  out v[2]
  out v[-1]
  out v[2..4]
  out v[..3]
  out v[3..]
  out v[]
  out v[-4..-2]
  out v[-4..]
  out v[..-2]
```

And of course zhaba-script is shipped with frog by default 🐸!

```zh
use std

fn main
  out frog()

/**
        _____
       /       \__
     /             \
   /   ^    ^        |
  |     ..            |
  /|        _/       /
 / .\_____/         /
/U\|    \___|   |__/
            /  /
            |/U\
*/
```

# The end!

So now I welcome you to can play with zhaba-script in this web IDE -> https://wgmlgz.github.io/zhaba

Love frogs and frogs will love you 🐸💖.

⭐ this repo if you liked it!

![frog_img](https://raw.githubusercontent.com/Wgmlgz/zhaba-script/main/img/cute-frog.jpg)
