# Generic types

Zhaba-script supports generic types. Generics is the idea to allow type (int, str, … etc and user-defined types) to be a parameter to types. For example `Vec<T>` allows to store dynamic array of any type without need to make new implementations every time. Note, that you don't have to name your type as `T`. Generics are implemented by replacing types, so, for example if you try so sort types for which comparison operator is not defined, compiler will give you an error.

## Syntax:

```zh
type TypeName [TypeName1 [TypeName2 [TypeName3]]]
  MemberType1 [name1 [name2 [...name3]]]
  MemberType2 [name1 [name2 [...name3]]]
  MemberType3 [name1 [name2 [...name3]]]
  ...
```

## Examples:

```zh
type Vec T
  int size
  int capacity
  TP head
```

```zh
type Tp3 T1 T2 T3
  T1 v1
  T2 v2
  T3 v3
```

To use generic types use following syntax:

```zh
TypeName<T1[ T2[ ...T3]]>
```

## Examples:

```zh
Vec<char> data

Tp3<char i32 bool> data
```

## Note

When you are using generic type inside another generic type you need to separate closing `>`.

```zh
Vec<Vec<char>> data // wrong
Vec<Vec<char> > data // correct
```

# Generic types and member functions

Like a normal types, generic types can also have member functions. To define them create `impl` block followed by the type name, but without generic parameters.

## Syntax:

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

## Examples:

```zh
impl Vec
  fn free_mem
    ? ! !(slf.head as int): free(slf.head as int)
    slf.size = 0
    slf.capacity = 0
    slf.head = 0 as TP
```

# Generic types and operators overloading

Generic `impl` block allows you not only to create member function, but also to overload prefix, postfix or binary operators. They would behave like other overloaded operators and would not have implicit `slf` argument. The main difference and benefit is that you can use generic parameters in them.

```zh
impl Vec
  op 17 += Vec<T>R slf T val: slf.push(val)

  op 17 += Vec<T>R slf Vec<T> other
    @ i other: slf.push(*i)

  lop put Vec<T>R slf: slf.print()
  lop out Vec<T>R slf: slf.print(); out ''

  ...
```
