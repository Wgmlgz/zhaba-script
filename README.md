 Zhaba-script-lang
 Exprssions test only (for now)

```
Test expression calculator with space char wieght:


if spaces near operator ater equal '.. + ..' this is binary operator (operator with 2 operands)
else operator concidered postfix or prefix depending on spaces near it:
  if operator looks like this '.. ++   ..' this is postfix operator (spaces pefore operator are less the after it)
  else if operator looks like this '..   ++ ..' this is postfix operator (spaces pefore operator are less the after it)

examples:
 2 + 2 = 2 + 2
 2 + 2++ = 2 + 2++
 2 + 2  ++ = (2 + 2)++
 ++   ++  ++ ++1++ ++  ++   ++ = ++(++(++(++1++)++)++)++
 
2 + 2 * 2 = 6
  ^   ^ equal amaunt of spaces   ->   regual priorities

2 + 2  *  2 = 8
  ^    ^ there is 2 spaces near '*'   ->   this caluculated later
  ^ there is 1 space near '+'   ->   this calculated earlier

allowed symbols:
 numbers like: 0 666 54
 operators: + * ++
 space: ' ' (for magic separation)
```
