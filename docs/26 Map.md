# Map

## Definition

```zh
type MapNode K V
  K key
  V val
```

```zh
type Map K V
  AVLTree<MapNode<K V> > tree
```

`Map<K V>` is a sorted associative container that contains key-value pairs with unique keys. Keys are sorted by using the comparison operator `<`. Search, removal, and insertion operations have logarithmic complexity. Maps wraps `AVLTree<T>` and uses `MapNode<K V>` for data storage. Map iterators are also `AVLTree<MapNode<K V> >` iterators.

## `MapNode<K V>` member functions

| Functions                                     | Description                        |
| --------------------------------------------- | ---------------------------------- |
| `fn ctor`                                     | Default constructor                |
| `fn ctor KR key VR val`                       | Constructor                        |
| `fn dtor`                                     | Destructor                         |
| `op 4 bool < MapNode<K V>R a MapNode<K V>R b` | Comparator compares by `key` value |
| `lop put MapNode<K V>R slf`                   | Outputs content with '\n`          |
| `lop out MapNode<K V>R node`                  | Outputs content                    |
| `rop Out < MapNode<K V>R i`                   | Outputs content                    |
| `lop Out < MapNode<K V>R i`                   | Outputs content                    |
| `op 9 Out < Out o MapNode<K V>R i`            | Outputs content                    |

## `Map<K V>` member functions

| Functions                                          | Description                       |
| -------------------------------------------------- | --------------------------------- |
| `fn ctor`                                          | Default constructor               |
| `fn dtor`                                          | Destructor                        |
| `fn VR sub KR key`                                 | Access specified element by `key` |
| `fn insert KR key VR val`                          | Inserts element                   |
| `fn Vec<MapNode<K V> > call`                       | Converts content to vector        |
| `fn print`                                         | Prints content                    |
| `lop put Map<K V>R slf`                            | Outputs content                   |
| `lop out Map<K V>R slf`                            | Outputs content                   |
| `rop Out < Map<K V>R i`                            | Outputs content                   |
| `lop Out < Map<K V>R i`                            | Outputs content                   |
| `op 9 Out < Out o Map<K V>R i`                     | Outputs content                   |
| `lop AVLIterRange<MapNode<K V> > iter Map<K V>R m` | Returns iterator range            |
