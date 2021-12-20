# Generic types

Zhaba-script supports generic types. Generics is the idea to allow type (int, str, … etc and user-defined types) to be a parameter to types. For example `Vec<T>` allows to store dynamic array of any type without need to make new implementations every time. Generics are implemented by replacing types, so, for example if you try so sort types for which comparison is not defined, compiler won't resolve this code. 
## Syntax:

```rust
type <name> <genecic types>
  <type> <name1> <name2>...
  <type> <name1> <name2>...
  ...
```

When writing implementation you don't need to write generic types: 
```rust
type <name>
  <fn 1>
  <fn 2>
  ...
```
## Examples:
``` rust
type Vec T
  int size
  int capacity
  TP head
```
```rust
impl Vec
  fn free_mem
    ? ! !(slf.head as int): free(slf.head as int)
    slf.size = 0
    slf.capacity = 0
    slf.head = 0 as TP
```
```rust
type Tp3 T1 T2 T3
  T1 v1
  T2 v2
  T3 v3
```
Note: You don't have to start type with `T`.

To use generic types use folowing syntax:
```rust
typename<T1, T2 ...>
```
## Examples:
```rust
Vec<char> data
```
```rust
Tp3<char i32 bool> data
```
Note: When you are using generic type inside another generic type you need to separate closing `>`.

## Example:
```rust
Vec<Vec<char>> data // wrong
Vec<Vec<char> > data // correct
```