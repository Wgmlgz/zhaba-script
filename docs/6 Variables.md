# Variables

Variables are essential part of most of programming languages and zhaba-script is not an exception! They allow to access memory by variable name. All variables in zhaba-script are mutable.

Zhaba-script has multiple ways to declare a variable, but the preferred one is using `:=` operator:

```zh
name := exp
```

This syntax is inspired by Go and variable type is inferred from `exp` type. But there are other ways for variable declaration which are more _C-like_:

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

You can also infer type automatically with `auto`:

```zh
auto name1 = exp [name2 = exp [...name3 = exp]]
```

Types can be different:

```zh
auto e = 6i8 f = 'aboba'
```

Note, that this syntax doesn't call any constructors, so use `:=` when it's possible, but when you just need to get memory (for example in constructor definition), this is 100% valid way to do this.

```zh
valid := Vec<int>()
out(valid.size) // 0

Vec<int> wrong
out(wrong.size) // undefined (can be any value)
```

## Object and array destructuring

You can also declare variables with destructuring using `:=` operator. Zhaba-script provides 2 ways of destructuring: by names and by indexes.

To destructure value by names wrap variable names with `{}` like so:

```zh
{a b} := exp
```

This syntax is equivalent to this:

```zh
tmp := exp // `tmp` isn't public name and can be different
a := tmp.a
b := tmp.b
```

But when dealing with arrays destructuring by indexes might be more useful. To do that use `[]`.

```zh
[a1 a2 a3] := exp
```

This syntax is equivalent to this:

```zh
tmp := exp // `tmp` isn't public name and can be different
a1 := tmp[0]
a2 := tmp[1]
a3 := tmp[2]
```

Note that with `{}` you must use valid variables identificators, but `[]` allows to put any expression inside them, so you can nest `{}` and `[]` inside `[]`:

```zh
[a {b c} d] := exp
```
