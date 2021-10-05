# `if`, `else`, `else if` statements in `zhaba-script`

## `if` statement
In zhaba-script you can use `?` to create `if` statement like this:

```c
? condition code-block
```
### Some usage examples:
Regular style:
```c
? 2 + 2 == 4
  out 'Seems legit'
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
## `else` statement:
To extend `if` with `else`, you need to start new line with `\`
```c
? 2 + 2 == 4: out 'cool!'
\ out 'how?'
```
## `else if ` 
You can also create `else if` statement by using `|`
```c
? i %% 15: out 'FizzBuzz'
| i %% 3: out 'Fizz'
| i %% 5: out 'Buzz'
\ out i
```