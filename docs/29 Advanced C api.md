# Advanced C api

## Macros

Zhaba-script doesn't support macros, but it is possible to trick compiler into thinking that macro is a function and use it:

```c
/** `panic` definition */

// @zh-fn ["fn panic str s", "panic_macro"]

#define panic_macro(s) panic_c(s, __FILE__, __LINE__)

void panic_c(const char* s, const char* file, int line) {
  fprintf(stderr, "Program panic at %s:%d:\n%s\n", file, line, s);
  exit(EXIT_FAILURE);
}
```

## Constants

Another similar approach can be taking with global objects and constants, by defining getter-like macro, that expands to desirable value:

```c
// @zh-fn ["fn EXIT_CODE EXIT_SUCCESS", "GET_EXIT_SUCCESS"]
#define GET_EXIT_SUCCESS() EXIT_SUCCESS
// @zh-fn ["fn EXIT_CODE EXIT_FAILURE ", "GET_EXIT_FAILURE "]
#define GET_EXIT_FAILURE() EXIT_FAILURE
```

## Cross platform definitions

Another ability is to make cross platform definitions, because for zhaba-script compiler only the shape of function or type matters:

```c
/** From `c/screen.c` */

// @zh-fn ["fn clrscr", "clrscr"]
void clrscr() {
#ifdef _WIN32
  HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD coord = {0, 0};
  DWORD count;
  CONSOLE_SCREEN_BUFFER_INFO csbi;
  GetConsoleScreenBufferInfo(hStdOut, &csbi);
  FillConsoleOutputCharacter(hStdOut, ' ', csbi.dwSize.X * csbi.dwSize.Y, coord,
                             &count);
  SetConsoleCursorPosition(hStdOut, coord);
#else
  printf("\033[2J\033[1; 1H");
#endif
}
```

## Variadic functions

Many C functions like `printf` are variadic, but zhaba-script doesn't support them, but we `c/valist.c` provides `va` operators, that acts like `Vec<T>`'s operator `,,` but you need to put `va` in front of sequence too:

```zh
use c/std

fn main
  printf('number: %d, string: %s\n', va 55 va 'frog')
```

Note, that because `va` is operator, you need to put `,` in front of it.

## C++

Zhaba-script isn't designed to target C++, but you can do that by changing C compiler to the C++ one with `-c` flag. You will probably also need to create some kind of wrappers for you C++ code.
