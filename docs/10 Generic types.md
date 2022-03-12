# Generic types

Zhaba-script supports generic types. Generics is the idea to allow type (int, str, … etc and user-defined types) to be a parameter to types. For example `Vec<T>` allows to store dynamic array of any type without need to make new implementations every time. Note, that you don't have to name your type as `T`. Generics are implemented by replacing types, so, for example if you try so sort types for which comparison operator is not defined, compiler will give you an error.

## Syntax:

```zh
type TypeName [TypeName1 [TypeName2 [TypeName3]]]
  MemberType1 [name1 [name2 [...name3]]]
  MemberType2 [name1 [name2 [...name3]]]
  MemberType3 [name1 [name2 [...name3]]]
  ...
```


## Examples:

```zh
type Vec T
  int size
  int capacity
  TP head
```

```zh
type Tp3 T1 T2 T3
  T1 v1
  T2 v2
  T3 v3
```

To use generic types use following syntax:

```zh
TypeName<T1[ T2[ ...T3]]>
```

## Examples:

```zh
Vec<char> data
```

```zh
Tp3<char i32 bool> data
```

## Note

When you are using generic type inside another generic type you need to separate closing `>`.

```zh
Vec<Vec<char>> data // wrong
Vec<Vec<char> > data // correct
```

# Generic types and member functions

Like a normal types, generic types can also have member functions. To define them create `impl` block followed by the type name, but without generic parameters.
## Syntax:

```zh
impl TypeName
  fn func-header
    func-body
  fn func-header
    func-body
  fn func-header
    func-body
  ...
```


## Examples:

```zh
impl Vec
  fn free_mem
    ? ! !(slf.head as int): free(slf.head as int)
    slf.size = 0
    slf.capacity = 0
    slf.head = 0 as TP
```

# Generic types and operators overloading 

Generic `impl` block allows you not only to create member function, but also to overload prefix, postfix or binary operators. They would behave like other overloaded operators and would not have implicit `slf` argument. The main difference and benefit is that you can use generic parameters in them.

```zh
impl Vec
  op 16 += Vec<T>R slf T val: slf.push_back(val)
  
  op 16 += Vec<T>R slf Vec<T> other
    @ i other: slf.push_back(*i)

  lop put Vec<T>R slf: slf.print()
  lop out Vec<T>R slf: slf.print(); out ''

  ...
```

<pre class="code"><span class="pl-k">use</span><span class="pl-s"> range</span>
<span class="pl-k">use</span><span class="pl-s"> operators</span>
<span class="pl-k">use</span><span class="pl-s"> out</span>

<span class="pl-k">type</span> <span class="pl-en">Vec</span> <span class="pl-en">T</span><span class="pl-k">:</span> <span class="pl-k">int</span> <span class="pl-v">size</span>; 
  <span class="pl-k">int</span> <span class="pl-v">capacity</span>
  <span class="pl-en">T</span><span class="pl-k">P</span> <span class="pl-v">head</span>

<span class="pl-k">type</span> <span class="pl-en">VecIter</span> <span class="pl-en">T</span><span class="pl-k">:</span> <span class="pl-en">T</span><span class="pl-k">P</span> <span class="pl-v">ptr</span>

<span class="pl-k">impl</span> <span class="pl-en">VecIter</span>
  <span class="pl-k">fn</span> <span class="pl-en">next</span><span class="pl-k">:</span> <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">ptr</span> <span class="pl-k">=</span> <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">ptr</span> <span class="pl-k">+</span> <span class="pl-c1">1</span>
  <span class="pl-k">fn</span> <span class="pl-k">bool</span> <span class="pl-en">uneq</span> <span class="pl-en">VecIter</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span> <span class="pl-v">other</span><span class="pl-k">:</span> <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">ptr</span> <span class="pl-k">!=</span> <span class="pl-v">other</span><span class="pl-k">.</span><span class="pl-v">ptr</span>
  <span class="pl-k">lop</span> <span class="pl-en">T</span><span class="pl-k">R</span> <span class="pl-en">*</span> <span class="pl-en">VecIter</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span> <span class="pl-v">slf</span><span class="pl-k">:</span> <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-k">*</span><span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">ptr</span>

<span class="pl-k">impl</span> <span class="pl-en">Vec</span>
  <span class="pl-k">fn</span> <span class="pl-en">free_mem</span>
    <span class="pl-k">?</span> <span class="pl-k">!</span> <span class="pl-k">!</span>(<span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">head</span> <span class="pl-k">as</span> <span class="pl-k">int</span>)<span class="pl-k">:</span> <span class="pl-en">free</span>(<span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">head</span> <span class="pl-k">as</span> <span class="pl-k">int</span>)
    <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">size</span> <span class="pl-k">=</span> <span class="pl-c1">0</span>
    <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">capacity</span> <span class="pl-k">=</span> <span class="pl-c1">0</span>
    <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">head</span> <span class="pl-k">=</span> <span class="pl-c1">0</span> <span class="pl-k">as</span> <span class="pl-en">T</span><span class="pl-k">P</span>

  <span class="pl-k">fn</span> <span class="pl-en">T</span><span class="pl-k">P</span> <span class="pl-en">atP</span> <span class="pl-k">int</span> <span class="pl-v">pos</span><span class="pl-k">:</span> <span class="pl-k">&lt;&lt;&lt;</span> (<span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">head</span> <span class="pl-k">+</span> <span class="pl-v">pos</span>) <span class="pl-k">as</span> <span class="pl-en">T</span><span class="pl-k">P</span>
  <span class="pl-k">fn</span> <span class="pl-en">T</span><span class="pl-k">R</span> <span class="pl-en">at</span> <span class="pl-k">int</span> <span class="pl-v">pos</span><span class="pl-k">:</span> <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-k">*</span><span class="pl-c1">slf</span>.<span class="pl-en">atP</span>(<span class="pl-v">pos</span>)
    
  <span class="pl-k">fn</span> <span class="pl-en">print</span>
    <span class="pl-k">put</span> <span class="pl-s">'['</span>
    <span class="pl-k">@</span> <span class="pl-v">i</span> <span class="pl-c1">0</span><span class="pl-k">..</span><span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">size</span>
      <span class="pl-k">?</span> <span class="pl-k">!</span> <span class="pl-k">!</span><span class="pl-v">i</span><span class="pl-k">:</span> <span class="pl-k">put</span> <span class="pl-s">' '</span>
      <span class="pl-k">put</span> (<span class="pl-k">*</span><span class="pl-c1">slf</span>.<span class="pl-en">atP</span>(<span class="pl-v">i</span>))
    <span class="pl-k">put</span> <span class="pl-s">']'</span> 

  <span class="pl-k">fn</span> <span class="pl-en">double_capacity</span>
    <span class="pl-v">new_capacity</span> <span class="pl-k">:=</span> <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">capacity</span>
    <span class="pl-k">?</span> <span class="pl-v">new_capacity</span> <span class="pl-k">==</span> <span class="pl-c1">0</span>
      <span class="pl-v">new_capacity</span> <span class="pl-k">=</span> <span class="pl-c1">1</span>
      <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">head</span> <span class="pl-k">=</span> <span class="pl-en">malloc</span>(<span class="pl-k">sizeof</span> <span class="pl-en">T</span>) <span class="pl-k">as</span> <span class="pl-en">T</span><span class="pl-k">P</span>
      <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">capacity</span> <span class="pl-k">=</span> <span class="pl-v">new_capacity</span>
    <span class="pl-k">\</span> <span class="pl-v">new_capacity</span> <span class="pl-k">*=</span> <span class="pl-c1">2</span>
      <span class="pl-v">new_head</span> <span class="pl-k">:=</span> <span class="pl-en">malloc</span>(<span class="pl-v">new_capacity</span> <span class="pl-k">*</span> <span class="pl-k">sizeof</span> <span class="pl-en">T</span>) <span class="pl-k">as</span> <span class="pl-en">T</span><span class="pl-k">P</span>
      <span class="pl-k">@</span> <span class="pl-v">i</span> <span class="pl-c1">0</span><span class="pl-k">..</span><span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">size</span><span class="pl-k">:</span> <span class="pl-k">*</span>(<span class="pl-v">new_head</span> <span class="pl-k">+</span> <span class="pl-v">i</span>) <span class="pl-k">=</span> <span class="pl-c1">slf</span>.<span class="pl-en">at</span>(<span class="pl-v">i</span>)
      <span class="pl-en">free</span>(<span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">head</span> <span class="pl-k">as</span> <span class="pl-k">int</span>)
      <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">head</span> <span class="pl-k">=</span> <span class="pl-v">new_head</span>
    <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">capacity</span> <span class="pl-k">=</span> <span class="pl-v">new_capacity</span>

  <span class="pl-k">fn</span> <span class="pl-en">push_back</span> <span class="pl-en">T</span> <span class="pl-v">val</span>
    <span class="pl-k">?</span> <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">size</span> <span class="pl-k">==</span> <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">capacity</span><span class="pl-k">:</span> <span class="pl-c1">slf</span>.<span class="pl-en">double_capacity</span>()
    <span class="pl-c1">slf</span>.<span class="pl-en">at</span>(<span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">size</span>) <span class="pl-k">=</span> <span class="pl-v">val</span>
    <span class="pl-k">++</span><span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">size</span>
    
  <span class="pl-k">fn</span> <span class="pl-en">pop_back</span><span class="pl-k">:</span> <span class="pl-k">--</span><span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">size</span>
  
  <span class="pl-k">fn</span> <span class="pl-en">VecIter</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span> <span class="pl-en">begin</span><span class="pl-k">:</span> <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">head</span> <span class="pl-k">as</span> <span class="pl-en">VecIter</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span> 
  <span class="pl-k">fn</span> <span class="pl-en">VecIter</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span> <span class="pl-en">end</span><span class="pl-k">:</span> <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-c1">slf</span>.<span class="pl-en">atP</span>(<span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">size</span>) <span class="pl-k">as</span> <span class="pl-en">VecIter</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span>
  <span class="pl-k">fn</span> <span class="pl-en">T</span><span class="pl-k">R</span> <span class="pl-en">front</span><span class="pl-k">:</span> <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-k">*</span><span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">head</span>
  <span class="pl-k">fn</span> <span class="pl-en">T</span><span class="pl-k">R</span> <span class="pl-en">back</span><span class="pl-k">:</span> <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-k">*</span><span class="pl-c1">slf</span>.<span class="pl-en">atP</span>(<span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">size</span><span class="pl-k">-</span><span class="pl-c1">1</span>)

  <span class="pl-k">fn</span> <span class="pl-en">dtor</span><span class="pl-k">:</span> <span class="pl-c1">slf</span>.<span class="pl-en">free_mem</span>()

  <span class="pl-c">/** Constructors */</span>
  <span class="pl-k">fn</span> <span class="pl-en">ctor</span> <span class="pl-k">int</span> <span class="pl-v">size</span>
    <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span> <span class="pl-c1">slf</span>
    <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">head</span> <span class="pl-k">=</span> <span class="pl-c1">0</span> <span class="pl-k">as</span> <span class="pl-en">T</span><span class="pl-k">P</span>
    <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">size</span> <span class="pl-k">=</span> <span class="pl-c1">0</span>
    <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">capacity</span> <span class="pl-k">=</span> <span class="pl-c1">0</span>
    <span class="pl-k">@</span> <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">capacity</span> <span class="pl-k">&lt;</span> <span class="pl-v">size</span><span class="pl-k">:</span> <span class="pl-c1">slf</span>.<span class="pl-en">double_capacity</span>()
    <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">size</span> <span class="pl-k">=</span> <span class="pl-v">size</span>
    <span class="pl-c1">slf</span><span class="pl-k">.</span><span class="pl-v">capacity</span> <span class="pl-k">=</span> <span class="pl-v">size</span>
  
  <span class="pl-k">fn</span> <span class="pl-en">ctor</span>
    <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span> <span class="pl-c1">slf</span>
    <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span>(<span class="pl-c1">0</span>)

  <span class="pl-k">fn</span> <span class="pl-en">ctor</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;R</span> <span class="pl-v">other</span>
    <span class="pl-k">out</span> <span class="pl-s">'copy!'</span>
    <span class="pl-c1">slf</span> <span class="pl-k">:=</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span>(<span class="pl-v">other</span><span class="pl-k">.</span><span class="pl-v">size</span>)
    <span class="pl-k">@</span> <span class="pl-v">i</span> <span class="pl-c1">0</span><span class="pl-k">..</span><span class="pl-v">other</span><span class="pl-k">.</span><span class="pl-v">size</span><span class="pl-k">:</span> <span class="pl-c1">slf</span>.<span class="pl-en">at</span>(<span class="pl-v">i</span>) <span class="pl-k">=</span> <span class="pl-v">other</span>.<span class="pl-en">at</span>(<span class="pl-v">i</span>)
    <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-c1">slf</span>

  <span class="pl-c">/**  Overloaded operators */</span>
  <span class="pl-k">op</span> <span class="pl-c1">16</span> <span class="pl-en">+=</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;R</span> <span class="pl-v">slf</span> <span class="pl-en">T</span> <span class="pl-v">val</span><span class="pl-k">:</span> <span class="pl-c1">slf</span>.<span class="pl-en">push_back</span>(<span class="pl-v">val</span>)
  
  <span class="pl-k">op</span> <span class="pl-c1">16</span> <span class="pl-en">+=</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;R</span> <span class="pl-v">slf</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span> <span class="pl-v">other</span>
    <span class="pl-k">@</span> <span class="pl-v">i</span> <span class="pl-v">other</span><span class="pl-k">:</span> <span class="pl-c1">slf</span>.<span class="pl-en">push_back</span>(<span class="pl-k">*</span><span class="pl-v">i</span>)

  <span class="pl-k">lop</span> <span class="pl-en">put</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;R</span> <span class="pl-v">slf</span><span class="pl-k">:</span> <span class="pl-c1">slf</span>.<span class="pl-en">print</span>()
  <span class="pl-k">lop</span> <span class="pl-en">out</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;R</span> <span class="pl-v">slf</span><span class="pl-k">:</span> <span class="pl-c1">slf</span>.<span class="pl-en">print</span>(); <span class="pl-k">out</span> <span class="pl-s">''</span>


  <span class="pl-k">rop</span> <span class="pl-en">Out</span> <span class="pl-en">&lt;</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;R</span> <span class="pl-v">i</span><span class="pl-k">:</span> <span class="pl-k">out</span> <span class="pl-v">i</span>
    <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-en">_Out</span>()
  <span class="pl-k">lop</span> <span class="pl-en">Out</span> <span class="pl-en">&lt;</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;R</span> <span class="pl-v">i</span><span class="pl-k">:</span> <span class="pl-k">put</span> <span class="pl-v">i</span><span class="pl-k">,</span> <span class="pl-k">put</span> <span class="pl-s">' '</span>
    <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-en">_Out</span>()
  <span class="pl-k">op</span> <span class="pl-c1">9</span> <span class="pl-en">Out</span> <span class="pl-en">&lt;</span> <span class="pl-en">Out</span> <span class="pl-v">o</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;R</span> <span class="pl-v">i</span><span class="pl-k">:</span> <span class="pl-k">put</span> <span class="pl-v">i</span><span class="pl-k">,</span> <span class="pl-k">put</span> <span class="pl-s">' '</span>
    <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-en">_Out</span>()

  <span class="pl-k">fn</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span> <span class="pl-en">sub</span> <span class="pl-k">int</span> <span class="pl-v">begin</span> <span class="pl-k">int</span> <span class="pl-v">end</span>
    <span class="pl-v">res</span> <span class="pl-k">:=</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;</span>(<span class="pl-c1">0</span>)
    <span class="pl-k">@</span> <span class="pl-v">i</span> <span class="pl-v">begin</span><span class="pl-k">..</span><span class="pl-v">end</span><span class="pl-k">:</span> <span class="pl-v">res</span>.<span class="pl-en">push_back</span>(<span class="pl-c1">slf</span>.<span class="pl-en">at</span>(<span class="pl-v">i</span>))
    <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-v">res</span>

  <span class="pl-k">lop</span> <span class="pl-en">swap</span> <span class="pl-en">T</span><span class="pl-k">P</span> <span class="pl-v">a</span> <span class="pl-en">T</span><span class="pl-k">P</span> <span class="pl-v">b</span><span class="pl-k">:</span> <span class="pl-en">T</span> <span class="pl-v">t</span> <span class="pl-k">=</span> <span class="pl-k">*</span><span class="pl-v">a</span>; <span class="pl-k">*</span><span class="pl-v">a</span> <span class="pl-k">=</span> <span class="pl-k">*</span><span class="pl-v">b</span>; <span class="pl-k">*</span><span class="pl-v">b</span> <span class="pl-k">=</span> <span class="pl-v">t</span>

  <span class="pl-k">lop</span> <span class="pl-en">T</span><span class="pl-k">P</span> <span class="pl-en">partition</span> <span class="pl-en">T</span><span class="pl-k">P</span> <span class="pl-v">low</span> <span class="pl-en">T</span><span class="pl-k">P</span> <span class="pl-v">high</span>
    <span class="pl-v">pivot</span> <span class="pl-k">:=</span> <span class="pl-v">high</span> <span class="pl-k">-</span> <span class="pl-c1">1</span> <span class="pl-v">i</span> <span class="pl-k">:=</span> <span class="pl-v">low</span> <span class="pl-v">j</span> <span class="pl-k">:=</span> <span class="pl-v">low</span>
    <span class="pl-k">@</span> <span class="pl-v">j</span> <span class="pl-k">=</span> <span class="pl-v">low</span> <span class="pl-v">j</span> <span class="pl-k">!=</span> <span class="pl-v">pivot</span> <span class="pl-v">j</span> <span class="pl-k">=</span> <span class="pl-v">j</span> <span class="pl-k">+</span> <span class="pl-c1">1</span>
      <span class="pl-k">?</span> <span class="pl-k">*</span><span class="pl-v">j</span> <span class="pl-k">&lt;</span> <span class="pl-k">*</span><span class="pl-v">pivot</span><span class="pl-k">:</span> <span class="pl-en">swap</span>(<span class="pl-v">i</span> <span class="pl-v">j</span>); <span class="pl-v">i</span> <span class="pl-k">=</span> <span class="pl-v">i</span> <span class="pl-k">+</span> <span class="pl-c1">1</span>
    <span class="pl-en">swap</span>(<span class="pl-v">i</span>  <span class="pl-v">pivot</span>)
    <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-v">i</span>

  <span class="pl-k">lop</span> <span class="pl-en">qsort</span> <span class="pl-en">T</span><span class="pl-k">P</span> <span class="pl-v">lhs</span> <span class="pl-en">T</span><span class="pl-k">P</span> <span class="pl-v">rhs</span>
    <span class="pl-v">a</span> <span class="pl-k">:=</span> <span class="pl-v">rhs</span> <span class="pl-k">as</span> <span class="pl-k">int</span> <span class="pl-k">-</span> <span class="pl-v">lhs</span> <span class="pl-k">as</span> <span class="pl-k">int</span>
    <span class="pl-v">b</span> <span class="pl-k">:=</span> <span class="pl-en">sizeof</span>(<span class="pl-en">T</span>)
    <span class="pl-k">?</span> <span class="pl-v">a</span> <span class="pl-k">&gt;</span> <span class="pl-v">b</span>
      <span class="pl-v">pi</span> <span class="pl-k">:=</span> <span class="pl-en">partition</span>(<span class="pl-v">lhs</span> <span class="pl-v">rhs</span>)
      <span class="pl-en">qsort</span>(<span class="pl-v">lhs</span> <span class="pl-v">pi</span>)
      <span class="pl-v">pi</span> <span class="pl-k">=</span> <span class="pl-v">pi</span> <span class="pl-k">+</span> <span class="pl-c1">1</span>
      <span class="pl-en">qsort</span>(<span class="pl-v">pi</span> <span class="pl-v">rhs</span>)
  
  <span class="pl-k">fn</span> <span class="pl-en">sort</span><span class="pl-k">:</span> <span class="pl-en">qsort</span>(<span class="pl-c1">slf</span>.<span class="pl-en">begin</span>() <span class="pl-k">as</span> <span class="pl-en">T</span><span class="pl-k">P</span> <span class="pl-c1">slf</span>.<span class="pl-en">end</span>() <span class="pl-k">as</span> <span class="pl-en">T</span><span class="pl-k">P</span>)
  <span class="pl-k">lop</span> <span class="pl-en">sort</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-en">T</span><span class="pl-k">&gt;R</span> <span class="pl-v">slf</span><span class="pl-k">:</span> <span class="pl-c1">slf</span>.<span class="pl-en">sort</span>()

<span class="pl-k">fn</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-k">int</span><span class="pl-k">&gt;</span> <span class="pl-en">iota</span> <span class="pl-k">int</span> <span class="pl-v">begin</span> <span class="pl-k">int</span> <span class="pl-v">end</span>
  <span class="pl-v">v</span> <span class="pl-k">:=</span> <span class="pl-en">Vec</span><span class="pl-k">&lt;</span><span class="pl-k">int</span><span class="pl-k">&gt;</span>(<span class="pl-v">end</span> <span class="pl-k">-</span> <span class="pl-v">begin</span>)
  <span class="pl-k">@</span> <span class="pl-v">i</span> <span class="pl-v">begin</span><span class="pl-k">..</span><span class="pl-v">end</span><span class="pl-k">:</span> <span class="pl-v">v</span>.<span class="pl-en">at</span>(<span class="pl-v">i</span> <span class="pl-k">-</span> <span class="pl-v">begin</span>) <span class="pl-k">=</span> <span class="pl-v">i</span>
  <span class="pl-k">&lt;&lt;&lt;</span> <span class="pl-v">v</span>

</pre>