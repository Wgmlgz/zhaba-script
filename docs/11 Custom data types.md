# Custom data types

Zhaba-script custom data types are similar to rust structs. To define a data type, enter the keyword `type` and name the entire data type. Then, inside the next block, define the type and names of the pieces of data, which are called members. To access member use `.` operator.

## Syntax

```zh
type TypeName
  MemberType1 name [name[ name[ ...name]]]
  MemberType2 name [name[ name[ ...name]]]
  MemberType3 name [name[ name[ ...name]]]
  ...
```

# Examples

This is an example of Vector data structure.

```zh
type VecInt
  int size
  int capacity
  intP head

fn main
  VecInt v
  < v.size <
```

# Code style

In zhaba-script code style, you should name your custom types in `PascalCase` and members in `snake_case`.

# Member functions

Zhaba-script support member functions call. To define some of these functions you can use the keyword `impl` and then enter the type for which you are writing implementation. Note that this type can be any type, even primitive (like `int`). Inside this block just write regular functions. To call member function write `object.function_name(args)`

## Syntax

```zh
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

```zh
impl VecInt // implementation block for VecInt
  fn intP begin
    <<< slf.head

  fn intP end
    <<< slf.atP(slf.size)

  fn push int val
    ? slf.size == slf.capacity: slf.double_capacity()
    *slf.atP(slf.size) = val
    &slf.size += 1
```

# Incomplete types

When declaring type you sometimes need to reference itself in his body (in structures like trees for example). However it is not possible because this would mean that type need to include infinitely many copies of it.

```
.-type---------------------.
| .--type------------.     |
| | .-type-----.     |     |
| | |  ...type |     |     |
`--------------------------'
```

To solve this problem you can use pointer or reference to type itself, because it's size is known and fixed.

```
.--------type--------.
| | ptr |            |
`--------------------'
```

So, if you try to reference a type in it self, you will get `Incomplete type error`, but referencing pointer or reference is perfectly fine.

```zh
type Node
  NodeP lhs // Ok
  Node rhs /** error :( -> test.zh:5:2
            *  5 |   Node rhs
            *    |   ^^^^^
            *    | Incomplete type is not allowed here (you probably need to make it ref of ptr)
            */
```
