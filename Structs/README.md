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

**Update payroll to read one employee into struct and calculate/print paycheck**
  
  ## Steps
  
  1. Update struct to include the six fields from the input file
  2. Update the main.c to read the records from the file "payroll.txt" (a. open with command line parameter 1 and update the fscanf to read from file
```bash
%./main payroll.txt .062
```
  3. For each record, malloc a struct for it and save all six fields to the struct 
  4. update calculateGrossPay to use fields from struct
  5. Grab the socialsecurity tax rate from the 2nd command line parameter
  6. Update calculateWitholding to use fields from struct
  7. Free struct
  8. Close file

Example of execution statement
```bash
%./main payroll.txt .062
``` 

**Next class: Read all employees into an array of structs**



## Files

[main.c](main.c)
[payroll.txt](payroll.txt)

## Solution

[main-solution.c](main-solution.c)