# CS100-Actvities


## Day

## Knowledge

* Syntax of struct
* Syntax of typedef
* Allocating stuct variables
* Element access via Dot operator (.) or reference operator (->)
* Struct pointers as parameters
* Struct Arrays
* Differentiating between primitive and reference types in a struct

## Skills

_Design skills:_

Make appropriate design decisions when:

* Designing structs and custom types to hold related data (9.1)
* Determine whether the struct should reference data stored separately or should save data within the struct

_Programming skills:_

Write, compile, and execute syntactically and logically correct code that:

* Defines a struct as a collection of primitive types or a combination of primitive and reference types,
* Statically allocates and uses a struct to store related data
* Accesses and modifies elements of the struct when the struct is defined as a type or a reference,
* Dynamically allocates the struct using sizeof and type casting to a reference of the struct
* Can link data in struct as a node in a linked list using self-references
* Traverse a list of linked nodes sequentially printing contents if needed
* Add a newly created node to the beginning or end of a linked list of nodes

_Debugging skills:_

Use debugging strategies (printf/debugger) to:

* Verify the correct storage of data
* Verify that structs that contain both primitive and reference types are dynamically allocated (and freed) properly
* Verify that nodes are linked together via self-reference


## Assignment 

  ## Steps
  
  1. Hardcode the filename as "students.txt"
  2. First line of data file is the student count
  3. The rest of the lines contain first name and last name separated by a space.  No first name or last name is longer than 20 characters.
     
```
2
monica anderson
Delaine Herzog
```

 4. Allocate list of Student struct pointers for each student
 5. For each student, 1) malloc space for the struct,  
  2) malloc space for first name, 3) malloc space for the last name, and 4) copy name to struct
 6.  Complete deep copy function
 7.  Complete code to free student list


## Files

[main.c](main.c)
[students.txt](students.txt)


## Solution

[main-solution.c](main-solution.c)