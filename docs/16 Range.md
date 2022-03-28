# Range

```zh
type Range: int begin end
```

A (half-open) range bounded inclusively below and exclusively above [start..end).

The range start..end contains all values with start <= x < end. It is empty if start >= end.

## Creating range

Range can be created using `..` operator with it's prefix, postfix or infix overloads. Prefix and postfix operators create infinite (limited by i64 min/max values) ranges:

```zh

10..  // 10..9223372036854775807
..40  // -9223372036854775807..40
3..10 // 3..10

```

## Usage

Range can be used in foreach loops:

```zh
@ i 5..10 : < i
// 5 6 7 8 9
```

Range can be used in patter matching:

```zh
t := 5
?? t
  10.. : out '10..'
  15.. : out '15..'
  ..3: out '..3'
  3..10: out '3..10'
  0..2: out '0..2'
  5: out 5
  _: out 'any'

// 3..10
```

Range can be also used to index array, more about that at [next chapter](https://wgmlgz.github.io/zhaba/?page=docs&chapter=15).

## P.S

Inspired by Rust and Python!
