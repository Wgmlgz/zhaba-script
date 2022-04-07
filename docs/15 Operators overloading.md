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

# Advanced overloading

Zhaba-script also allows you to overload _Function call_ `()` and _Subscript_ `[]` operators. To do that you need to define member functions named `call` and `sub` respectively.

Note, that you can pass any number of arguments, even zero.

## Syntax

```zh
impl <Type>
  fn <ReturnType> sub <args>
    <code_block>
  fn <ReturnType> call <args>
    <code_block>
```

## Examples:

```zh
/** From vec.zh */

/** Vector subscript - v[id] */
impl Vec
  fn TR sub int id
    ? id < 0: id += slf.size
    <<< slf.at(id)

/** Generate array from Range */
impl Range
  fn Vec<int> call
    res := Vec<int>()
    @ i, *slf: res += i
    <<< res
```
