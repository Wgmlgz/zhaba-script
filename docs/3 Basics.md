# Basics

# Identifiers

In most languages identifiers (variable names, function names, etc.) are litter followed by letter or number (`_` counted as letter). Zhaba-script identifiers can be, in addition to the usual identifiers, also a sequence of these characters: `~,.+-*\%<>=^&:;|/!#$@?`. Note, that you can choose on or another and cannot't mix them.

# Keywords

Zhaba-script doesn't have regular keywords. Instead, all keywords are context depended. For example `fn` is used to declare functions and `?` for if statement, but you can use them as variables when them are not in expected context.

```zh
fn main
  int fn = 5 op = 4 ? = 1 @ = 7
  out(fn + op + ? + @) // 17
```

# Code blocks

Unlike Rust, JS or C Zhaba-script uses both Python-style indentation to indicate blocks of code.
A new block of code stats when the indentation is different from previous line, and closes when indentation of current line is less then previous line and matched indentation of some past opened block. In this case that like would go to the matching block. Here is some example of that:

```zh
fn test int mx
  ? mx > 50     // block 1 starts
    out 1       // block 2 starts
    out 2
    ? mx < 100  // block 3 starts
      out 3     // block 3 ends
    out 4
    ? mx > 100  // block 4 starts
      out 5     // block 4 ends
      out 6     // block 1, 2 and 4 ends
```

But also you can start new block with `:`. In this case content after will go to the next block. If the next line has same indentation as this line block will start and end at the same line.

```zh
fn test int mx
  ? mx > 50: out 1
    out 2
    ? mx < 100: out 3
    out 4
    ? mx > 100
      out 5
      out 6
```

If you want write multiple expressions at the same line you can use `;` to separate them.

```zh
fn test int mx
  ? mx > 50
    out 1
    out 2
    ? mx < 100: out 3
    out 4
    ? mx > 100: out 5; out 6
```

You can also use `;;` to close block for very short, but unreadable code.

```zh
fn test int mx: ?mx > 50:out 1;out 2; ?mx < 100:out 3;;out 4; ?mx>100:out 5; out 6
```

Here is some code to test examples from above:

```zh
fn test int mx
  ? mx > 50     // block 1 starts
    out 1       // block 2 starts
    out 2
    ? mx < 100  // block 3 starts
      out 3     // block 3 ends
    out 4
    ? mx > 100  // block 4 starts
      out 5     // block 4 ends
      out 6     // block 1, 2 and 4 ends

fn main
  // test(0)    // nothing
  test(200)  // 1 2 4 5 6
  // test(100)  // 1 2 4
  // test(60)   // 1 2 3 4
```

# Implicit commas

# Types

## String

## Int

## Bool

# Input and output
