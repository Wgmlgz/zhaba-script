# Loops

Zhaba-script has 3 types of loops: while, for and foreach. To create a loop, use the `@` symbol and after that write your loop expression. Loop type is defined by a number of arguments, that have been passed to the loop: 1-while, 2-foreach, 3-for.

## Syntax

```zh
@ <exp>
 <body>
```

# While

While loop accepts 1 argument and runs _while_ its body while the condition is still true.

## Examples

```zh
@ i < 5: out 'infinite loop!!!'
```

```zh
@ i < 5
  out 'hi'
```

# For

For loop is similar to the C for loop and accepts 3 argument: init, condition and loop expression.

## Examples

```zh
@ i:=0 i<100 i+=1
  out i
```

The above syntax produces code equivalent to:

```zh
i:=0
@ i<100
  out i
  i+=1
```

# Foreach

Foreach loop executes a for loop over a range and accepts 2 arguments: a variable name and range expression. Variable name must be identifier and range expression must have `.begin()` and `.end()` methods. Value protected by `.begin()` must be able to be compared with `.end()` value by `!=` operator and also must be able to be incremented by prefix `++` operator. Produced code is equivalent to this:

```zh
__range := range-expression
__begin := __range.begin()
__end := __range.end()
__cur := __begin
@ __cur.uneq(__end)
  <body>
  __cur.next()
```

### Examples

```zh
use 'range.zh'
@ i 0..10
  out i
```

```zh
@ i some_vector
  out *i
```
