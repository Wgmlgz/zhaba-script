# Expressions

Expressions in Zhaba-script are very different from expressions in most other languages. They consist of operators and literals. Brackets `()` are used only to manipulate the operator's priorities and detect function calls. Here is some basic expression example:

```zh
// In this expression out is prefix operator and 'Hi frogs' is a str literal.
out 'Hi frogs'
```

## Inline tuples

Any operator in Zhaba-script accepts **_inline tuple_** which in fact just a collection of other expressions separated by `,`. So this expression

```zh
//  sum
//    \
//  (1, 2)
sum(1, 2)
```

is in fact a prefix operator that actepts **_inline tuple_** of 1 and 2.
But the main goal of Zhaba-script is minimizing code size so in most cases `,` are optional. And because of that, it is possible to write expression above like that:

```zh
sum(1 2)
```

**_Inline tuples_** can also be empty, and to create one of those just use `()`:

```zh
// In this case `begin` is a prefix operator that accepts empty inline tuple
//   begin
//      \
//      ()
begin()
```

## Binary (infix) operators

Binary operator is an operator that accepts 2 arguments from different sides:

```zh
//     +
//    / \
//   2   2
2 + 2

//     ..
//    / \
//   0  10
0..10

//       *
//      / \
//     +   3
//    / \
//   1   2
1 + 2 * 3
```

But binary operators can also accept more or less than 2 arguments. In this case, they have 1 argument on the left side and others on the right size. At first, it may seem useless, but in fact all member function calls are implicitly converted to binary operators:

```zh
// .push acts like binary operator

//   .push
//     /  \
//   vec   1
vec.push(1)

//   .reverse
//     /  \
//   vec  (1 2)
vec.reverse(1 2)

//   .pop
//     /  \
//   vec  ()
vec.pop()

```

## Operator precedence

Zhaba-script built-in operator precedence table:

| Precedence | Operator          | Description                                               |
| ---------- | ----------------- | --------------------------------------------------------- |
| 2          | `a.b`             | Member access                                             |
| 3          | `*a`              | Dereference                                               |
|            | `&a`              | Address-of                                                |
|            | `-a`              | Unary minus                                               |
|            | `+a`              | Unary plus                                                |
|            | `!a`              | Logical NOT                                               |
| 4          | `a as T`          | type cast                                                 |
| 5          | `a*b` `a/b` `a%b` | Multiplication, division, and remainder                   |
| 6          | `a+b` `a-b`       | Addition and subtraction                                  |
| 9          | `<` `<=` `>` `>=` | For relational operators < and ≤ and > and ≥ respectively |
| 10         | `==` `!=`         | For equality operators = and ≠ respectively               |
| 14         | `&&`              | Logical AND                                               |
| 15         | `\|\|`            | Logical OR                                                |
| 16         | `=`               | Assignment                                                |
| 17         | `,` ` `           | Inline tuple comma, Implicit inline tuple comma           |

Zhaba-script std operator precedence table:

| Precedence | Operator       | Description                                             |
| ---------- | -------------- | ------------------------------------------------------- |
| 5          | `a%%b`         | Is b an a divisor                                       |
| 9          | `a..b`         | range creation                                          |
| 16         | `+=` `-=`      | Compound assignment by sum and difference               |
|            | `*=` `/=` `%=` | Compound assignment by product, quotient, and remainder |
