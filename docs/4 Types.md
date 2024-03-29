# Types

The concept of type is very important in zhaba-script. Every variable, function argument, and function return value must have a type in order to be compiled. Also, every expression (including literal values) is implicitly given a type by the compiler before it is evaluated. Some examples of types include `int` to store integer values, `f64` to store floating-point values (also known as scalar data types). You can also create your own types. The type specifies the amount of memory that will be allocated for the variable (or expression result), the kinds of values that may be stored in that variable, how those values (as bit patterns) are interpreted, and the operations that can be performed on it.

## Integer numbers

For signed integers there are `i8`, `i16`, `i32` and `i64`. The number at the end of `i` represents the amount of bits allocated to one integer. Integers can also be unsigned, `u8`, `u16`, `u32` and `u64` are used for that. There is also `int` type which is alias for `i64`. To create `int`, write sequence of numbers, and if you want to specify it type, you can use `i`, `i8`, `i16`, `i32`, `i64`, `u`, `u8`, `u16`, `u32` or `u64` suffix. If you write number without any suffix the type will be `i64` (not `i32` like in most languages, for example C).

```zh
_u8 = 0u8 - 1u8
_u16 = 0u16 - 1u16
_u32 = 0u32 - 1u32
_u64 = 0u64 - 1u64

_i8 = 0i8 - 1i8
_i16 = 0i16 - 1i16
_i32 = 0i32 - 1i32
_i64 = 0i64 - 1i64

< 'Unsinged -1:' < < _u8 < _u16 < _u32 < _u64 <
< 'Singed -1:' < < _i8 < _i16 < _i32 < _i64 <
/**
 * Unsinged -1:
 * 255 65535 4294967295 18446744073709551615
 * Singed -1:
 * -1 -1 -1 -1
 */
```

Int literals are written in base-10 system by default, but you can also use binary or hexadecimal systems. To use them use `0x` or `0b` prefix for hexadecimal and binary systems respectively.

```zh
< 100 < // 100
< 0xff < // 255
< 0b101 < // 5
```

## Floating point numbers

For floating point or scalar numbers zhaba-script have `f32` and `f64` types. `f32` is equivalent to `float` in C and `f64` is equivalent to `double`. You can create floating point numbers by putting `.` somewhere in number. You can also use `f`, `f32` or `f64` suffices to specify a type. If you write number without any suffix the type will be `f64` (not `f32` or `float` like in most languages, for example C).

```zh
< 0.5 <    // 0.5
< 1f <     // 1.0
< 1. <     // 1.0
< .1 <     // 0.1
< 1.1 <    // 1.1
< 1.1f64 < // 1.1
< 1.1f32 < // 1.1
```

## Other types

Zhaba-script string literals have `str` (`Str` from std is a different type) type which is equivalent to `char*`.
For single characters we have `char` (wow).
There is also `bool` type with `true` and `false` literals. But zhaba-script have more short `tru` and `fls` versions.

## Custom types

You can also create your own types with custom logic. More information is here [TODO]().

## Lval & rval semantics

Like C++ zhaba-script have _**lvalue**_ (lval) and _**rvalue**_(rval) concept. The difference is that you can use address-of (`&`) operator and assign value to it `a = b` with lval and cannot with rval.

These expressions are concentered lval:

- Variables
- Object members `a.b`
- Dereferenced expressions `*a`
- References

All the others expressions are considered to be rval.

## Rval to lval conversion

Zhaba-script can convert rval to lvar if you pass parameter which requires reference and is not lval. This conversion is also made if you try to access member of rval object.

```zh
fn testRef intR a
  a += 2

fn main
  a := 3
  testRef(a)
  testRef(5)
  out a
```

Read more about rval and lval in C++ to understand this concept more [here](https://en.cppreference.com/w/cpp/language/value_category).

## Type casting

To cast one type to another use `as` operator and you can only cast types with the same size.

```zh
exp as TypeName
```
