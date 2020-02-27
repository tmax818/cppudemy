# Variables and Constants

## 43. Overview

- not just a clever name
- fundamental building blocks

## 44. What is a variable

- memory, cup, bus
- ram is a contiguous block of memory
- name is associated with a memory location
- binding is linking a memory address to a nl name.
- variable is an abstration for a memeory location
- variables have a type

## 45. Decaring and initailzing a Variable

- tell compiler a var's type and name
- oop/ you can create your own types!!!
- must declare a variable before you use it.
- c++ is case sensitive
- best practice:
  - follow you company's style
  - snake case or camel 
  - be consistent

```cpp
int age; // uninitialized
// the three ways:
int age = 21; // C-like init, assignment operator
int age (21); // constructor init
int age {21}; // C++11 list init syntax/ us this one!!
```


- [var](var.cpp)
- [main](main.cpp)


## 46. Global Variables

- [global](global.cpp)
- not good practice

## 47. Built-in Primitive Types

- fundamental types implemented by the c++ language
- size and precision is machine dependent
- formula: 2 ^ number of bits
- *italicized* words are optional:


### char
|Type name|size/precision|
|---------|--------------|
|char|exactly one byte. At least 8 bits|
|char16_t| at least 16 bits|
|char32_t| at least 32 bits|
|wchar_t| can represent the largest available charcater set.|

### int
|Type name|size/precision|
|---------|--------------|
|*signed* **short** *int*|at least 16 bits|
|*signed* **int**|at least 16 bits|
|*signed* **long** *int*|at least 32 bits|
|*signed* **long long** *int*|at least 64 bits|
|*unsigned* **short** *int*|at least 16 bits|
|*unsigned* *int*|at least 16 bits|
|*unsigned* **long** *int*|at least 32 bits|
|*unsigned* **long long** *int*|at least 64 bits|

### float

- represents non-integer numbers
- scientific notation 6.02 * 10<sup>23</sup>
  - the 6.02 is called the *mantissa* 
  - the 10<sup>23</sup> is called the *exponent*

|Type name|size/precision|
|---------|--------------|
|**float**| /7 decimal digits|
|**double**| /15 decimal digits|
|**long double**| /19 decimal digits|

### boolean
- zero is false
- non-zero is true

|Type name|size/precision|
|---------|--------------|
|**bool**|usually 8 bits `true` or `false` (C++ keywords)|

