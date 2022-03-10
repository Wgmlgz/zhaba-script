# Custom data types (structs)

Zhaba-script custom data types are similar to rust structs. To define a struct, enter the keyword `type` and name the entire struct. Then, inside the next block, define the type and names of the pieces of data, which are called members. The formal syntax is shown below.

```rust
type TypeName
  MemberType1 name [name[ name[ ...name]]]
  MemberType2 name [name[ name[ ...name]]]
  MemberType3 name [name[ name[ ...name]]]
  ...
```

This is an example of Vector data structure.

```rust
type VecInt
  int size
  int capacity
  intP head
```

# Code style

In zhaba-script code style, you should name your custom types in `PascalCase` and members in `snake_case`.

# Member functions

Zhaba-script support member functions call. To define some of these functions you can use the keyword `impl` and then enter the type for which you are writing implementation. Note that this type can be any type, even primitive (like `int`). Inside this block just write regular functions. To call member function write `object.function_name(args)`

## Syntax

```rust
impl TypeName
  fn func-header
    func-body
  fn func-header
    func-body
  fn func-header
    func-body
  ...
```

To access the object for which you are writing implementation you can use `slf` who is the first argument that is provided implicitly to your function. `slf` has the type of a pointer to a type written after `impl`.
Continuing the example about the Vector, this is some example of `impl` and `slf` usage.

```rust
impl VecInt // implementation block for VecInt
  fn intP begin
    <<< slf.head

  fn intP end
    <<< slf.atP(slf.size)

  fn push_back int val
    ? slf.size == slf.capacity: slf.double_capacity()
    *slf.atP(slf.size) = val
    &slf.size += 1
```
