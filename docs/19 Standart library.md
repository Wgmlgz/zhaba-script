# Standard library

Some languages like python or javascript declare their functionality in their core, and others like C++ do this in standard library. For example `Map` in javascript is available at any moment without including or importing anything, and in C++ you need to `#include <map>` to use `std::map`. Zhaba-script takes C++ approach, so standard library is very important and contains many of cool zhaba-script features.

## Using standard library

If you want to use all standard library at once, write `use std` at the top of your file, but if you only need one or two of it's features, it is good idea to use only needed modules, like `use map` or `use vec`.

## Standard library content

| File             | Description                                       |
| ---------------- | ------------------------------------------------- |
| std/avl.zh       | `AVLTree<T>`: avl binary search tree              |
| std/complex.zh   | `V2`: complex numbers                             |
| std/frog.zh      | cool frog image                                   |
| std/map.zh       | `Map<K V>`: wrapper for avl tree                  |
| std/operators.zh | some advanced operators like `%%` or `+=`         |
| std/io.zh        | overloaded `<` and `>` operators for input/output |
| std/range.zh     | `Range`: int range                                |
| std/rng.zh       | `Rng`: random number generator                    |
| std/str.zh       | `Str`: dynamic string                             |
| std/util.zh      | utilities functions                               |
| std/vec.zh       | `Vec<T>`: dynamic generic array                   |
| std/std.zh       | Includes all standard library                     |
