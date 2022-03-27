# Operators overloading

Zhaba-script allows you to overload any prefix, postfix or infix operator. Remember about correct [identifiers](https://wgmlgz.github.io/zhaba/?page=docs&chapter=2). You can read more about operators and expressions [here](https://wgmlgz.github.io/zhaba/?page=docs&chapter=3). And [here](https://en.cppreference.com/w/cpp/language/operator_precedence) - C++ operators precedence table for reference.

## Syntax

Declaration:

```zh
// Infix (binary operators):
// put operator precedence instead of 5
op 5 [return-type(optional)] operator-name [type name [type name [...type name]]]
  code-block

// Prefix operators:
lop [return-type(optional)] operator-name [type name [type name [...type name]]]
  code-block

// Suffix operators:
rop [return-type(optional)] operator-name [type name [type name [...type name]]]
  code-block
```

Examples:

```zh
/** From operators.zh */
op 5  bool %% int a int b: <<< !(a % b);

op 16 += intR a int b: a = a + b
op 16 -= intR a int b: a = a - b
op 16 /= intR a int b: a = a / b
op 16 %= intR a int b: a = a % b
op 16 *= intR a int b: a = a * b

lop ++ intR val: val += 1
lop -- intR val: val -= 1
lop ++ u8R val: val = val + 1u8
lop -- u8R val: val = val - 1u8


/** From range.zh */
op 9 Range .. int begin int end
  Range slf
  slf.begin = begin
  slf.end = end
  <<< slf

rop Range .. int begin: <<< begin..9223372036854775807

lop Range .. int end: <<< -9223372036854775807..end

op 10 bool == int i Range r
  ? r.begin < r.end: <<< r.begin <= i && i < r.end
  \ <<< r.end <= i && i < r.begin
```
