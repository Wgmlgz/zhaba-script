# Objects lifetime

A lifetime is a construct the compiler uses to ensure create and destroy object. Specifically, a variable's lifetime begins when it is created and ends when it is destroyed. Later, more specific mechanisms and the time of creation and destruction of objects will be described.

## Example

```zh
fn main
  i := 0  // lifetime for `v` starts. ------┐
  > i                                   //  │
                                        //  │
  ? i == 4:                             //  │
    a := 7  // `a` lifetime starts. -------┐│
    < (a + i) <                         // ││
    // `a` lifetime ends. -----------------┘│
                                        //  │
  // `i` lifetime ends. --------------------┘
```

# Constructor

By default, newly created object is just contains uninitialized space for it's members, but you can initialize it with special function called `ctor` (constructor). Constructor is just a function with any args that returns 1 object of it's constructed type. To create constructor use `impl` block. To call constructor use type name as function and call it

```zh
impl Vec
  fn ctor int size // constructor for `Vec` that takes `int size` as argument
    Vec<T> slf
    slf.head = 0 as TP
    slf.size = 0
    slf.capacity = 0
    @ slf.capacity < size: slf.double_capacity()
    slf.size = size
    slf.capacity = size
    <<< slf // don't forget to return!

fn main
  v := Vec<int>(4) // calling `Vec<int>` constructor with `int size` = 4
  < v <
```

Note, that constructors does't have implicit `slf` argument so, for example you can use them like this:

```zh
impl Vec
  fn ctor: <<< Vec<T>(0)
```

# Copy constructor

Copy constructor is a special constructor that used when compiler needs a copy of some other object, but you can use them by yourself. Copy constructors must have only 1 argument of reference to returning type.

## Example

```zh
impl Vec
  fn ctor Vec<T>R other
    out 'copy!'
    slf := Vec<T>(other.size)
    @ i 0..other.size: slf.at(i) = other.at(i)
    <<< slf
```

## When copy constructor is called?

- Variable declaration with `:=`
- Assignment with `=`
- Passing arguments fo functions without `P` or `R` (by copy)

# Destructor

A `dtor` (destructor) is a special member function that is called when the lifetime of an object ends. The purpose of the destructor is to free the resources that the object may have acquired during its lifetime

```zh
impl Vec
  fn dtor
    ? ! !(slf.head as int): free(slf.head as int)
    slf.size = 0
    slf.capacity = 0
    slf.head = 0 as TP
```

## When destructor is called?

- Local scope variables at scope end
- All accessible local variables and function args when function returns except return value
- When expression return value is not used

# Return and destruction

As follows from the description above local object is not destructed and not copied when it is used as function return value, but it can be reallocated in stack memory. So it is important to not store references or pointers to it's members or itself, but pointers to heap are 100% valid.
