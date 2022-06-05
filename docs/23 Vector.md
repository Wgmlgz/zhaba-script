# `Vec<T>` type

## Definition

```zh
type Vec T
  int size
  int cap
  TP head
```

The elements are stored contiguously, which means that elements can be accessed not only through iterators, but also using offsets to regular pointers to elements. This means that a pointer to an element of a vector may be passed to any function that expects a pointer to an element of an array.

The storage of the vector is handled automatically, being expanded and contracted as needed. Vectors usually occupy more space than static arrays, because more memory is allocated to handle future growth. This way a vector does not need to reallocate each time an element is inserted, but only when the additional memory is exhausted.

## `Vec` member functions

| Functions                              | Description                                                                                     |
| -------------------------------------- | ----------------------------------------------------------------------------------------------- |
| `fn ctor int size`                     | Constructor, creates vector with given size                                                     |
| `fn ctor int size T default`           | Constructor, creates vector with given size initialized with given value                        |
| `fn ctor`                              | Constructor, creates empty vector                                                               |
| `fn ctor Vec<T>R other`                | Copy constructor                                                                                |
| `fn dtor`                              | Destructor                                                                                      |
| `fn TP atP int pos`                    | Access pointer to specified element                                                             |
| `fn TR at int pos`                     | Access specified element                                                                        |
| `fn print`                             | Prints vector content in this form: `[0 1 3 4]`                                                 |
| `fn println`                           | Prints every vector element from new line, doesn't print `[]`                                   |
| `fn double_cap`                        | Doubles vector's capacity                                                                       |
| `fn push_back T val`                   | Adds an element to the end                                                                      |
| `fn pop_back`                          | Removes the last element                                                                        |
| `fn VecIter<T> begin`                  | Returns an iterator to the beginning                                                            |
| `fn VecIter<T> end`                    | Returns an iterator to the end                                                                  |
| `lop VecIterRange<T> iter Vec<T>R slf` | Returns iterator range                                                                          |
| `fn TR front`                          | Access the first element                                                                        |
| `fn TR back`                           | Access the last element                                                                         |
| `op 17 += Vec<T>R slf T val`           | Append single item to vector                                                                    |
| `op 17 += Vec<T>R slf Vec<T>R other`   | Append other vector item to given vector                                                        |
| `op 2 Vec<T> ,, T a T b`               | Short syntax for creating vector from multiple items: `0,,1,,2,,3`                              |
| `op 2 Vec<T>R ,, Vec<T>R v T a`        | Short syntax for creating vector from multiple items: `0,,1,,2,,3`                              |
| `lop out Vec<T>R slf`                  | Outputs vector with '\n'                                                                        |
| `lop put Vec<T>R slf`                  | Outputs vector                                                                                  |
| `rop Out < Vec<T>R i`                  | Outputs vector                                                                                  |
| `lop Out < Vec<T>R i`                  | Outputs vector                                                                                  |
| `op 9 Out < Out o Vec<T>R i`           | Outputs vector                                                                                  |
| `fn TR sub int id`                     | Access specified element                                                                        |
| `fn Vec<T> sub int begin int end`      | Get subvector from indexes [begin, end)                                                         |
| `fn Vec<T> sub Range<int> r`           | Get subvector from indexes [begin, end), from range                                             |
| `fn Vec<T> sub`                        | Get subvector from 0..size                                                                      |
| `op 9 bool < Vec<T>R a Vec<T>R b`      | Lexicographically compares the values in the vector                                             |
| `lop TP partition TP lo TP hi`         | Partitions vector                                                                               |
| `lop qsort TP lhs TP rhs`              | Qsort algorithm                                                                                 |
| `fn sort`                              | Sort vector's content                                                                           |
| `lop sort Vec<T>R slf`                 | Sort vector's content                                                                           |
| `fn Vec<T> map F<T TR> f`              | Creates a new vector with all elements that pass the provided function                          |
| `fn Vec<T> filter F<bool TR> f`        | Creates a new vector populated with the results of calling a provided function on every element |

## `Vec` non-member functions

| Functions                               | Description                                                     |
| --------------------------------------- | --------------------------------------------------------------- |
| `fn Vec<int> iota int begin int end`    | Fills the range [begin end) with sequentially increasing values |
| `fn<T O> Vec<O> mp Vec<T>R v F<O TR> f` | Pseudo-generic function, same as `map` call:`mp<T O>(vec fn)`   |

## Iterators

Vector also has iterators, which can be used as random access iterators. After `push_back` iterators may be invalid.

```zh
type VecIter T: TP ptr
```

```zh
type VecIterRange T: VecIter<T> begin end
```

## `VecIter<T>` member functions

| Functions                                 | Description    |
| ----------------------------------------- | -------------- |
| `fn ctor TP ptr:`                         | Constructor    |
| `lop ++ VecIter<T>R slf`                  | Next iterator  |
| `op 6 VecIter<T> + VecIter<T> slf int i`  | Sum 2 pointers |
| `op 10 bool != VecIter<T> a VecIter<T> b` | Check unequal  |
| `lop TR * VecIter<T> slf`                 | Dereference    |

## `VecIterRange<T>` member functions

| Functions                                 | Description    |
| ----------------------------------------- | -------------- |
| `fn ctor VecIter<T> begin VecIter<T> end` | Constructor    |
| `fn VecIter<T> begin: <<< slf.begin`      | `begin` getter |
| `fn VecIter<T> end: <<< slf.end`          | `end` getter   |
