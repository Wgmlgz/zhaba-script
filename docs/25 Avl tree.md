# Avl Tree

```zh
type AVLNode T
  int h
  T val
  AVLNode<T>P lhs rhs par
```

```zh
type AVLTree T: AVLNode<T>P root
```

Avl tree in zhaba-script standard library is an associative container that contains a sorted set of unique objects of type `T`. Sorting is done using the key comparison operator `<`. Search, removal, and insertion operations have logarithmic complexity. `AVLTree<T>` is very similar to `std::set` in C++.

Type `AVLTree<T>` is a wrapper for `AVLNode<T>` and `AVLNode<T>` functions aren't presented here, because they are concentered to be private.

## `AVLTree<T>` member functions

| Functions                                  | Description                                           |
| ------------------------------------------ | ----------------------------------------------------- |
| `fn ctor`                                  | Default constructor                                   |
| `fn dtor`                                  | Destructor                                            |
| `fn AVLIter<T> begin`                      | Returns an iterator to the beginning                  |
| `fn AVLIter<T> end`                        | Returns an iterator to the end                        |
| `lop AVLIterRange<T> iter AVLTree<T>R slf` | Returns iterator range                                |
| `fn insert T val`                          | Inserts element                                       |
| `fn TR sub T val`                          | Access specified element                              |
| `op 17 += AVLTree<T>R slf T val`           | Inserts single item                                   |
| `fn Vec<T> call`                           | Converts tree content to vector via inorder traversal |
| `fn show`                                  | Pretty prints tree structure                          |

## Iterators

`AVLTree<T>` iterators provide inorder access to tree elements and aren't random access, so you can't jump any number of elements, only one at a time.

```zh
type AVLIter T: AVLNode<T>P next
```

```zh
type AVLIterRange T: AVLIter<T> begin end
```

## `AVLIter<T>` member functions

| Functions                                 | Description   |
| ----------------------------------------- | ------------- |
| `fn ctor AVLNode<T>P root`                | Constructor   |
| `lop AVLNode<T>P ++ AVLIter<T>R slf`      | Next iterator |
| `op 10 bool != AVLIter<T> a AVLIter<T> b` | Check unequal |
| `lop TR * AVLIter<T> it`                  | Dereference   |

## `AVLIterRange<T>` member functions

| Functions                                  | Description    |
| ------------------------------------------ | -------------- |
| ` fn ctor AVLIter<T> begin AVLIter<T> end` | Constructor    |
| ` fn AVLIter<T> begin`                     | `begin` getter |
| ` fn AVLIter<T> end`                       | `end` getter   |
