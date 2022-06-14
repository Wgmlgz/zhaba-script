![frog_img](https://raw.githubusercontent.com/Wgmlgz/zhaba-script/main/img/frog.jpg)

# Introduction

Zhaba-script (Russian: ˈʐabə, жаба(toad)) - is a multi-paradigm, high-level, statically typed, interpreted or source to source compiled language, designed to be as performant as C, but as beautiful as Python.

## Motivation

C is one of my favorite languages because of it's power and performance, but at the same time it's syntax is over 50 years old and doest't have lots of amazing features of modern programming languages. For example to simply loop over int range you have to use something like this: `for (int i = 0; i < n; ++i)`. Can we do better? In python you can use `for i in range(0, n)`, this is already a huge improvement, but can we do even better? Of course! Zhaba-script solution to this task looks like this: `@ i 0..n`. Another example is function pointers: the C syntax for them is very unintuitive: `int (*foo) (int, int)`. It puts variable name inside of type definition, which can be very confusing. Zhaba-script function pointer looks like this: `F<int int int> foo`. This is relatively simple examples, but them can show what zhaba-script is tries to achieve.

So, the main goal of zhaba-script is to make your programs smaller while also maintain readability and performance. To do this, zhaba-script is using C and C++ semantic concepts and bringing them with short python-like syntax.

## Syntax

The zhaba-script syntax is the most different and interesting part from other programming languages and mostly resembles python, which does't use `{}` to declare blocks of code. But zhaba-script takes a step forward by removing almost all unnecessary syntax elements like `,` in some places. For example in this expression: `print(1, 2, 4)` it is obvious where commas should be so you don't need to explicitly write them. Other syntax elements like `;` or `:` are not required, but their use is put to make your code even shorter. Also most common keywords such as `if` or `return` are reduced to simple symbols, to make code shorter and even more readable. Other very big feature is ability to overload any operator and even create your onw new ones.

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

## FizzBuzz

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

## File reading

```
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

## Links

The best way to feel zhaba-script is to use this playground, to play with examples right now! -> https://wgmlgz.github.io/zhaba/

Also there are docs with syntax highlighting -> https://wgmlgz.github.io/zhaba/?page=docs

Code in your's favorite frog programming language in your favorite IDE -> https://marketplace.visualstudio.com/items?itemName=wgmlgz.zhaba-script
