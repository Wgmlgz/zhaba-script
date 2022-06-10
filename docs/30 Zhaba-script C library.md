# Zhaba-script C library

Zhaba-script standard library defines most of necessary C functions and type like `FILE` or `printf`, in `c/std` module, and also has other cross-platform defined functions like `clrscr`.

## Using C standard library

The best way to use C standard library is to import `c/std` module, but you can also import only needed modules, but some of them are depend on others, so it is recommended to simply use `c/std` module.

## C Standard library content

| File                 | Description                                              |
| -------------------- | -------------------------------------------------------- |
| std/c/keyboard.c     | Cross platform keyboard functions                        |
| std/c/math.c         | Defines `<math.h>` for `f64`                             |
| std/c/preprocessor.c | Common preprocessor macros like `__FILE__` or `__LINE__` |
| std/c/screen.c       | Cross platform terminal functions                        |
| std/c/stdio.c        | `<stdio.h>`                                              |
| std/c/stdlib.c       | `<stdlib.h>`                                             |
| std/c/time.c         | Different time functions                                 |
| std/c/valist.c       | Definitions for working with C variadic functions        |
| std/c/panic.c        | Defined `panic`                                          |
| std/c/std.zh         | All C standard library                                   |
