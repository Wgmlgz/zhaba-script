# `Str` type

## Definition

```zh
type Str
  Vec<char> data
  int size
```

Strings are objects that represent sequences of characters ending with null ('\0').

The standard string provides support for such objects with an interface similar to `Vec<T>`, but adding features specifically designed to operate with strings of single-byte characters.

Note that this class handles bytes independently of the encoding used: If used to handle sequences of multi-byte or variable-length characters (such as UTF-8), all members of this class (such as length or size), as well as its iterators, will still operate in terms of bytes (not actual encoded characters).

## Iterators

`Str` rely on `Vec<T>`, so it uses it's iterators.

## `str` member functions

| Functions             | Description |
| --------------------- | ----------- |
| `fn char sub int pos` |             |
| `fn ctor`             |             |

## `str` non-member functions

| Functions                     | Description |
| ----------------------------- | ----------- |
| `op 10 bool == char ch str s` |             |
| `lop char chr str s`          |             |
| `fn int len str s`            | Return s    |

## `Str` member functions

| Functions                            | Description                        |
| ------------------------------------ | ---------------------------------- |
| `fn ctor`                            | Default constructor                |
| `fn ctor str s`                      | Constructor from `str`             |
| `fn ctor StrR s`                     | Copy constructor                   |
| `fn dtor`                            | Destructor                         |
| `fn str cstr`                        | Returns `str`                      |
| `lop VecIterRange<char> iter StrR s` | Returns iterator range             |
| `fn charR at int pos`                | Get character in string            |
| `fn charR sub int pos`               | Get character in string            |
| `fn charP atP int pos`               | Get pointer to character in string |
| `fn push_back char ch`               | Append character to string         |
| `fn pop_back`                        | Delete last character              |
| `fn sort`                            | Sorts string                       |

## `Str` non-member functions

| Functions                           | Description                                |
| ----------------------------------- | ------------------------------------------ |
| `lop out StrR s`                    | Outputs string with '\n'                   |
| `lop put StrR s`                    | Outputs string                             |
| `op 17 += StrR a char ch`           | Append to string                           |
| `op 17 += StrR a StrR b`            | Append to string                           |
| `op 17 += StrR a str b`             | Append to string                           |
| `op 6 Str + StrR a StrR b`          | Concatenate strings                        |
| `op 6 Str + str a str b`            | Concatenate strings                        |
| `rop Out < StrR i`                  | Outputs string                             |
| `lop Out < StrR i`                  | Outputs string                             |
| `op 9 Out < Out o StrR i`           | Outputs string                             |
| `op 9 bool < StrR a StrR b`         | Compare strings                            |
| `op 5 Str * str s int i`            | Python-like string multiplication          |
| `lop Str $ str s`                   | Short syntax for `str` to `Str` conversion |
| `lop up StrR s`                     | Converts string to uppercase               |
| `lop low StrR s`                    | Converts string to lowercase               |
| `lop VecIterRange<char> iter str s` | Returns iterator range                     |
