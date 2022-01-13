# if, else, elif statements

In zhaba-script you can use `?` to create _if_ statements, `|` for elif(else if) and `\` for else.

## Syntax

```rust
         ? <condition> <if block>
optional | <condition> <else if block>
optional | <condition> <else if block>
         | ...
optional \ <else block>
```

## Examples:

Regular style:

```c
? 2 + 2 == 4
  out 'Seems'
  out 'legit'
```

One liner:

```c
? 666 > 2: out '666 is greater then 2'
```

Nested also works:

```c
? 1 < 2
  ? 2 > 1
    out 'Double check'
```

if else

```c
? 2 + 2 == 4: out 'cool!'
\ out 'how?'
```

if elseif elseif else

```c
? i %% 15: out 'FizzBuzz'
| i %% 3: out 'Fizz'
| i %% 5: out 'Buzz'
\ out i
```

other variant

```c
? i %% 15
  out 'FizzBuzz'
| i %% 3
  out 'Fizz'
| i %% 5
  out 'Buzz'
\ out i
```
