# Pointers

While Zhaba-script is designed for fast development, but the other goal is to do this without sacrificing the performance. Unlike JS or python there is no garbage collector, and you need to manually manage memory like in C or C++. A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location. Under the hood pointer is just a 64-bit integer or `i64` in zhaba-script.

# Declaring pointers

Unlike C, in zhaba-script you can append `P` to the type to declare a pointer.

```
int var
intP ptr
```

In this example var is variable and ptr is a pointer.

# Address-of operator `&`

The address of a variable can be obtained by preceding the name of a variable with an ampersand sign '&', known as address-of operator. For example:

```
ptr = &var;
```

This would assign the address of variable `var` to `ptr`; by preceding the name of the variable `var` with the address-of operator `&`, we are no longer assigning the content of the variable itself to foo, but its address.

# Dereference operator `*`

As just seen, a variable which stores the address of another variable is called a pointer. Pointers are said to "point to" the variable whose address they store.

An interesting property of pointers is that they can be used to access the variable they point to directly. This is done by preceding the pointer name with the dereference operator `*`. The operator itself can be read as "value pointed to by".

Therefore, following with the values of the previous example, the following statement:

```
baz = *ptr;
```

This could be read as: "`baz` equal to value pointed to by `ptr`".

# Heap

The heap is a large pool of memory that can be used dynamically. This is memory that is not automatically managed – you have to explicitly allocate (using malloc), and deallocate (e.g. free) the memory.

# `malloc`

## Declaration:

```
lop malloc int size
```

## Description:

`malloc` is a built in operator that allocates the requested memory and returns a pointer to it.

# `free`

## Declaration:

```
lop free int ptr
```

## Description:

`free` is a built in operator that deallocates the space previously allocated by `malloc`.

# Heap in interpreter

Zhaba-script virtual machine tries to make work with pointers as safe as possible, and to achieve that it does some slow checks.

# Pointer arithmetics

When dealing with continuos memory like array or string you can shift pointer forward and backward with `+` and `-`. Using this operators will shift pointer at the size of the underlying type multiplied by shift size.

## Example:

```zh
size := 10
p := malloc(sizeof(int) * size) as intP
out 'ptr + x'
@ i 0..size: *(p + i) = i
@ i 0..size: out(*(p + i))

out 'x + ptr'
@ i 0..size: *(i + p) = i
@ i 0..size: out(*(i + p))

out 'ptr - x'
t := p + 5
t = t - 2
out(*t)
```
