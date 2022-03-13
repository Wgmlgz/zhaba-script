# Introduction

Zhaba script (Russian: ˈʐabə, жаба(frog)) - is a multi-paradigm, high-level, statically typed, interpreted or source to source compiled language, which focuses at minimizing programs size and maximizing development speed and comfort.

## Motivation

C++ is one of my favorite languages because of it's power and performance, but at the same time it is very old and doest't have lots of amazing features of modern programming languages. For example to simply loop over int range you have to use something like this: `for (int i = 0; i < n; ++i)`. Can we do better? In python you can use `for i in range(0, n)`, this is already a huge improvement, but can we do even better? Of course! Zhaba-script solution to this task looks like this: `@ i 0..n`. This example can show how some of the syntax elements are not necessary and can be reduced. To be fair in C++20 we can do `for (auto i : std::ranges::iota_view(0, 10))` or with reduced namespaces `for (auto i : iota_view(0, 10))`, this is definitely good, but still longer then python.

## Goal

So, the main goal of zhaba-script is to make your programs smaller while also maintain readability and performance. To do this, zhaba-script is using C++ low level semantic concepts and bringing them with python-like syntax.

## Syntax

The zhaba-script syntax is the most different and interesting part from other programming languages and mostly resembles python, which does't use `{}` to declare blocks of code. But zhaba-script takes a step forward by removing almost all unnecessary syntax elements like `,` in some places. For example in this expression: `print(1, 2, 4)` it is obvious where commas should be so you don't need to explicitly write them. Other syntax elements like `;` or `:` are not required, but their use is put to make your code even shorter. Also most common keywords such as `if` or `return` are reduced to simple symbols, to make code shorter and even more readable. You can read more about all the syntax elements TODO [here]().

## Memory model

Zhaba-script memory model is similar to the C memory model, which consists of stack, heap and pointers to manage it. In general: stack is faster and used for storing variables, while heap is slower, but can be accessed in any part of a program thought pointers.
