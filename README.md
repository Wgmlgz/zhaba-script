# Zhaba script
Zhaba script - is a general purpose, open souce, statically typed, source-to-source compiled 🐸 language.

# Quick start
## Windows
To run your first Zhaba script programm you can use [`zhaba.exe`](https://github.com/Wgmlgz/Zhaba-script-lang/blob/main/Bin/zhaba.exe)
```console
$ .\zhaba.exe path\to\program.zh
```
Hellow world program example:
```py
main
  out 'hi world!'
```
## Other platforms
You need to build compiler from source
## Build compiler from source
To build Zhaba script compiler from source you need to build [./Src/Zhaba/zhaba.cpp](https://github.com/Wgmlgz/Zhaba-script-lang/blob/main/Src/Zhaba/zhaba.cpp). To do this you can use [this Makefile](https://github.com/Wgmlgz/Zhaba-script-lang/blob/main/Src/Zhaba/Makefile):
```console
$ make build
```
Also you can use your favourite c++ compiler (with c++ 20 standart) 
# Docs

[`if, else if, else statements`](https://github.com/Wgmlgz/Zhaba-script-lang/blob/main/Docs/if.md)

[`Custom types (structs)`](https://github.com/Wgmlgz/Zhaba-script-lang/blob/main/Docs/struct.md)

# Examples