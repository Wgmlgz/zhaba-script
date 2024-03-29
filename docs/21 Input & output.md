# Input and output

By default zhaba-script input system has `out` and `put` prefix operators for basic types. `out` will print your expression followed by newline character and `put` will just print without newline.

```zh
out 'hi'
out 2
put(5 - 2)
```

For input there are several functions, when called they will return inputted type:

```zh
in_i8()
in_i16()
in_i32()
in_i64()
in_u8()
in_u16()
in_u32()
out_u64()
in_u64()
in_str()
in_char()
in_bool()
in_f32()
in_f64()
```

However zhaba-script has different, more handy way for input and output. To achieve this there are overloaded `<` and `>` operators. To use them write `use std` at the top of your file.

Here is usage example:

```zh
< 1 // outputs ' ' at end
< 1
< 1 < 2 < 3 < 4 <  // you can chain `<`, last `<` will print newline character

v := 0
> v // user typed '54' for example
< v < // input items must be lval or ref

/** output:

1 1 1 2 3 4
54

*/
```
