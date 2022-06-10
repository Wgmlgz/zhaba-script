# Interacting with C

Zhaba-script is a new language, and what if somebody want to write web server in it? How can that person do that? Of course, it is not possible to put everything in the language itself or it's standard library. To achieve this goal zhaba-script use the power and simplicity of C to be able to do anything. It means that almost everything you can do in C, you can do in zhaba-script.

## Using json to import C

Zhaba-script uses json as universal bridge to C, however you can embed json into C directly, more about that later. To use this json file you can just `use file.json` to import it. Here is it's shape, written as typescript type:

```ts
type extern_c_def = {
  c_path: String
  types: ({ zh_def: String; c_name: String } | [String, String])[]
  functions: ({ zh_def: String; c_name: String } | [String, String])[]
}
```

- `c_path` is a path to C file, what will be imported
- `types` imported array of C types (structs), `zh_def` is type definition, written in zhaba-script without `type TypeName` and `c_name` is a name of a type from C.
- `functions` imported array of C functions, `zh_def` is function definition (or even operator), written in zhaba-script and `c_name` is a name of a C function.

Alternatively, you can express types and functions not like an object, but like a tuple array, where `zh_def` is a first element, and `c_name` is second element.

Here is an example that json file (suppose we want to import `stdio.h`):

```json
{
  "c_path": "stdio.h",
  "types": [
    {
      "zh_def": "bool _", // In C standard File implementations is't defined,
      "c_name": "FILE" // so we can leave some useless value here
    }
  ],
  "functions": [
    {
      "zh_def": "fn FILEP fopen str filename str mode",
      "c_name": "fopen"
    },
    ["fn i32 fclose FILEP f", "fclose"] // Alternative array syntax
  ]
}
```

## Importing C code directly

Writing this huge json files isn't cool, and zhaba-script is also about minimalism, so we can import C files directly! Comments are used to do that. Begin your comment with `@zh-type` or `@zh-fn` and follow it with type or  function definition respectively. When importing files this way, you can think of imaginary json object with `c_path` equal to file path, and every time `@zh-...` found, content after that appended to `types` and `functions` arrays. `//` or `/* */` can be used for comments, but each comment can be used for only one definition. Any file extension like `.c`, `.h`, `.cpp`, `.cxx` is valid (other from `.zh` and `.json`). Here is the same example as above, but with this syntax:

```c
#include <stdio.h>

// @zh-type ["bool _", "FILE"]

// @zh-fn ["fn FILEP fopen str filename str mode", "fopen"]
// @zh-fn ["fn i32 fclose FILEP f", "fclose"]
```
