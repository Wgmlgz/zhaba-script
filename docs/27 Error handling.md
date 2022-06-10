# Error handling

Errors are a fact of life in software, so Zhaba-script has a number of features for handling situations in which something goes wrong. Zhaba-script takes similar approach to Rust is this topic.

Zhaba-script groups errors into two major categories: recoverable and unrecoverable errors. For a recoverable error, such as a file not found error, we most likely just want to report the problem to the user and retry the operation. Unrecoverable errors are always symptoms of bugs, and so we want to immediately stop the program.

Most languages don’t distinguish between these two kinds of errors and handle both in the same way, using mechanisms such as exceptions. Zhaba-script doesn’t have exceptions. Instead, it has the type `Result<T E>` for recoverable errors and the `panic` function that stops execution when the program encounters an unrecoverable error. Note, that you can can't use this in bytecode, because of dependence to stdlib.h. To use `panic` import `c/std` or `c/stdlib.c` (more about C api in next chapter) and to use `Result` import `result`.

## Recoverable errors with `Result<T E>`

```zh
type Result T E
  bool is_err
  T val
  E err
```

Essentially this type allows you to combine 2 types: _good_ type `T`, in which case all went OK, and _bad_ type `E`, in which you might want to put some info about your error. `Result` is most handy for function return value. Here is an example from zhaba-script standard library (more about `Err` type later):

```zh
fn Result<File Err> open Str s Str mode
  f := fopen(s.cstr() mode.cstr())
  ? f != (0 as FILEP): <<< Result<File Err>(File(f))
  <<< Result<File Err>(Err('canno\'t open ' + s))
```

This function tries to open file using C api. If C function `fopen` returned valid pointer, we return `Result<File Err>(File(f))`, but if pointer is null, we return `Result<File Err>(Err('canno\'t open ' + s))`.

And then, to use file you can do look at `is_err` value:

```zh
f := open('file.txt')
? f.is_err: out 'everything is bad'
\ out f.val.read()
```

Another way to process recoverable errors is with `unwrap` function:

```zh
f := open('file.txt').unwrap()
out f.read()
```

This function will return _good_ value, and otherwise will raise unrecoverable error.

## Simple errors with `Err` type

```zh
type Err: Str val
```

In most cases, when error is accrued, you don't need to have some fancy information about the error itself and for that purposes zhaba-script has `Err` type, which simply wraps `Str`.

## Unrecoverable errors with `panic`

Sometimes, when something very bad happened or when you unwrap `Result` value, you may want to immediately exit program execution. To do that zhaba-script has `panic` function which will print what went wrong end then stop program execution:

```zh
Program panic at zhaba_tmp.c:3782:
can't open some-invalid-file.txt
```
