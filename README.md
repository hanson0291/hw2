# CMPSC 122: Homework 2, Dynamic Vectors in C++

Coursework for **CMPSC 122 (Intermediate Programming)** at Penn State, Spring 2018. The assignment was to build a resizable vector container from scratch with raw pointers and `new`/`delete[]`, similar to a simplified `std::vector`.

The full assignment is in [`assignment_2_cmpsc122.pdf`](assignment_2_cmpsc122.pdf).

## Programs

### 1. `integer_vector.cpp`: integer vector (80 pts)

A `BasicVector` class backed by a dynamically allocated `int*` array:

| Member | Description |
|---|---|
| `data`, `vector_size`, `vector_capacity` | Private storage and bookkeeping |
| `resize()` | Doubles the capacity, copies the elements over and frees the old array |
| `at(i)`, `operator[](i)` | Return a reference to an element, with bounds checking |
| `front()`, `back()` | Return references to the first and last elements |
| `push_back(v)` | Append a value, resizing if the array is full |
| `insert(i, v)` | Shift elements to the right and insert a value at index `i` |
| `pop_back()`, `size()`, `capacity()`, `print()` | Utilities |

`main()` runs an interactive command prompt that calls these operations on a `BasicVector`.

### 2. `generic_vector.cpp`: templated vector

The same container written as a class template, `BasicVector<T>`. When it starts, the program asks which element type to store: `int`, `float`, `double`, `string` or `bool`.

## Layout

```
integer_vector.cpp      Program 1
generic_vector.cpp      Program 2
Given Files/            Starter code from the instructor
assignment_2_cmpsc122.pdf
```

## Build and run

```bash
g++ -std=c++11 -Wall integer_vector.cpp -o integer_vector
./integer_vector

g++ -std=c++11 -Wall generic_vector.cpp -o generic_vector
./generic_vector
```

## Status

This repo is an archive of the code as submitted. Parts of it are incomplete. For example, `resize()` and the template version are only partly implemented.

## Course series

[hw2](https://github.com/hanson0291/hw2) · [hw3](https://github.com/hanson0291/hw3) · [HW4](https://github.com/hanson0291/HW4) · [HW5](https://github.com/hanson0291/HW5)
