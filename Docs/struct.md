# `type` (structs)
Custom data types ([structs](https://en.wikipedia.org/wiki/Passive_data_structure)) can be created as follows:
```py
type <struct name>
  <variables decalration>
  <variables decalration>
  ...
```
Actual code exmaple:
```py
type IntVector
  intP head
  int size
  int capacity
```
## [C++](https://en.wikipedia.org/wiki/C%2B%2B) translation
When translated to [C++](https://en.wikipedia.org/wiki/C%2B%2B) struct name will be `__zhstruct_` + `yourstructname`. At the top of output file there is also a prototype.
Code from example above:

```cpp
struct __zhstruct_IntVector;

...

struct __zhstruct_IntVector {
  int64_t capacity;
  int64_t size;
  int64_t* head;
};
```