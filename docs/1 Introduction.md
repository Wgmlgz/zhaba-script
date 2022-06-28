![frog_img](https://raw.githubusercontent.com/Wgmlgz/zhaba-script/main/img/frog.jpg)

# Introduction

Zhaba-script (Russian: ˈʐabə, жаба(toad)) - is a multi-paradigm, high-level, statically typed, interpreted or source to source compiled language, designed to be as performant as C, but as beautiful as Python.

The syntax of zhaba-script is the most interesting and different feature from other programming languages. It basically resembles python, which uses indents instead of curly brackets to declare code blocks. But zhaba-script takes a step forward by making many syntactic elements, such as commas, optional. For example, in the expression: `print(1, 2, 4)` it is obvious where the commas should be, and zhaba-script makes them optional in some places. Other syntactic elements, such as colons or semicolons, are also optional. In addition, the most common keywords in other languages, such as `if` or `while`, are reduced to simple characters, for example `?` or `@` to make the code shorter and more readable. Another very important syntactic feature is the ability to overload any operations and even create new ones.

Semantically, the language is similar to such system languages as C, C++ or Rust. Like C, zhaba-script provides low-level memory control and combines it with so-called zero-cost abstractions. For example, among them are references, function overloading, template types, constructors and destructors.

Combining its syntactic and semantic properties, zhaba-script strives to provide the developer with a language that is as fast and convenient as possible.

Zhaba-script was conceived as translatable in C, which allows you to achieve a theoretical maximum of performance and use its already existing ecosystem to create real applications right now. The compiler provides an easy way to import C code. The main part of the C standard library has also been ported. However, programs can also be executed directly by compiling them into bytecode, which makes the language free from C and allows it to be used without runtime dependencies, which allows, for example, to run programs in an online compiler, on the client side.

Also an important part of the language is the standard library, which complements and allows you to use it to solve real problems. In its relation, the C++ approach is used, which brings many basic elements of the language into it, for example, dynamic arrays, and does not include them in the “core” of the language, such as python. So, the standard library adds the ability to work with files, complex and random numbers, exceptions, contains containers such as a dynamic array (`Vec<T>`), sorted associative container (`Map<K V>`) or dynamic strings and adds many other objects and methods for solving various tasks.

Here is an example of a program written in zhaba-script:

```zh
use std

fn fizz_buzz int mx
  @ i 1..=mx
    ? i %% 15: < 'FizzBuzz' <
    | i %% 3: < 'Fizz' <
    | i %% 5: < 'Buzz' <
    \ < i <
fn main: fizz_buzz(20)
```

So, the main goal of zhaba-script is to make your programs smaller while also maintain readability and performance. To do this, zhaba-script is using C and C++ semantic concepts and bringing them with short python-like syntax.

The project itself, in addition to the language compiler, includes a web application with an online compiler and documentation. It also includes an extension for Visual Studio Code that adds syntax highlighting.

## List of Zhaba-script features

Complier & dev environment:

- Interpretation throw bytecode
- Interpretation in web environment
- Syntax highlighter VSCode extension
- Web code editor
- Docs website
- C api

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
- Local functions and operators definition
- Pointers
- Function pointers
- References
- Object & array destructuring
- Custom types (classes/structs)
- Member functions
- Constructors
- Copy constructors (and implicit calls)
- Destructors (and implicit calls)
- Generic types

Standard library:

- `Vec<T>`, `Str`, `Map<K V>`, `Pair<A B>` `Option` - most common data containers
- `Result<T E>` and `panic` - for error handling
- `Rng`, `V2`, `Out`, `File` and more for other different use cases
- `c/std` - most necessary parts of C library is also ported
- And many other features!

## Examples

Here is some of zhaba-script code examples:

## Hello world

```zh
fn main: out 'Hi world'
```

## File reading

```zh
use file
use c/std

/** Read file in pure C */
fn fileReadC
  name := 'file-reader.zh'
  f := fopen(name 'r')

  ? f == (0 as FILEP)
    out 'File read error'
    exit(EXIT_FAILURE())

  ch := fgetc(f)
  @ ch != -1 as char
    printf('%c', va ch)
    ch = fgetc(f)

/** Read file in Zhaba-script (single line!) */
fn fileReadZH
  out open('file-reader.zh').unwrap().read()

fn main
  // fileReadC()
  fileReadZH()
```

## Snake game:

```zh
/** Import Zhaba-script standart library */
use std
/** Import C standart library */
use c/std

fn main
  /** Initialize game data */
  sx := 20 sy := 40 tick := 100
  screen := Vec<Str>(sx ' ' * sy)
  head := Pair<int int>(10 20)
  snake := Vec<Pair<int int> >(1 head)
  rng := Rng()

  /** Lambda function to put x in range 0..mx */
  mod := (int x int mx) -> (x % mx + mx) % mx

  /** Place 2 random items */
  screen[mod(rng() sx)][mod(rng() sy)] = chr('@')
  screen[mod(rng() sx)][mod(rng() sy)] = chr('@')

  ch := chr('d')
  @ ch != chr('x')
    /** Delay and input */
    start := clock()
    @ dif(clock() start) < tick
      ? ! !kbhit()
        t := getch()
        ? t in $'wasdx': ch = t

    /** Clear screen */
    clrscr()
    /** Move head */
    ?? ch
      'w': head.a = mod(head.a - 1 sx)
      'a': head.b = mod(head.b - 1 sy)
      's': head.a = mod(head.a + 1 sx)
      'd': head.b = mod(head.b + 1 sy)

    ?? screen[head.a][head.b]
      /** Collide with self */
      'o':
        ? ch == chr('x'): out 'Exit'
        \ out 'Game over('
        ch = chr('x')
      /** Just go */
      ' ':
        {a b} := snake[0]
        screen[a][b] = chr(' ')
        snake.erase(0)
      /** Eat item */
      '@': screen[mod(rng() sx)][mod(rng() sy)] = chr('@')

    /** Add new head position to snake */
    snake += head
    screen[head.a][head.b] = chr('o')

    screen.println()
```

## Brainfuck interpreter

```zh
use std

fn brainfuck Str s
  m := Vec<int>(s.size 0)
  stack := Vec<int>()

  @ i:=0, i<s.size, ++i
    ?? s[i]:
      '[': stack += i
      ']':
        t := stack.pop()
        m[i] = t
        m[t] = i

  p := malloc(3000) as u8P

  @ i=0 i<s.size, ++i: ?? s[i]:
    '>': p = p + 1
    '<': p = p - 1
    '+': (*p) += 1u8
    '-': (*p) -= 1u8
    '.': put (*p as char)
    ',': > *(p as charP)
    '[': ? *p == 0u8: i = m[i]
    ']': ? *p != 0u8: i = m[i] - 1

```

## Links

The best way to feel zhaba-script is to use this playground, to play with examples right now! -> https://wgmlgz.github.io/zhaba/

Also there are docs with syntax highlighting -> https://wgmlgz.github.io/zhaba/?page=docs

Code in your's favorite frog programming language in your favorite IDE -> https://marketplace.visualstudio.com/items?itemName=wgmlgz.zhaba-script
