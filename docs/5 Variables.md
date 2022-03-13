# Variables

Variables are essential part of most of programming languages and zhaba-script is not an exception! They are stored in stack and allow to access memory by variable name. The are multiple ways to declare a variable in zhaba-script:

## Explicitly typed

```zh
TypeName name1[ = exp] [name2[ = exp] [...name3[ = exp]]]
```

If exp type is different you will get compile error:

```zh
int c = 37 d = 5i8

// 5 |   int c = 37 d = 5i8
//   |                ^
//   | Types (i64 i8) for '='(init) are different
```

## Implicitly typed (C-like)

```zh
auto name1 = exp [name2 = exp [...name3 = exp]]
```

Types can be different:

```zh
auto e = 6i8 f = 'aboba'
```

## Implicitly typed (Go-like)

```zh
name := exp // variable type is automatically inferred
```

## Examples

```zh
int a b

int c = 3 d = 5

auto c = 6i8 d = 'aboba'

t := 10
```
