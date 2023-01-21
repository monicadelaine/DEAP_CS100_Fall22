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

  **Update payroll to read n employees from the file and save to an array; save calculated fields to array**
  
  ## Steps
  
  1. Update struct to include gross pay, net pay, federal withholding and social security withheld
  2. Add a third parameter which is the number of employees to read from file
```bash
%./main payroll.txt .062 5
```
  3. Malloc employeeList as a pointer to a list of employee pointers
  4. For each employee record,
    5. malloc a struct for it and save all six fields to the struct
    6. Save the pointer to the struct to the employeeList at the ith position (line 1 employee saved to index 0, ...)
    7. Save the calculated social security, federal withholding, gross pay and net pay to the struct
    8. Grab the socialsecurity tax rate from the 2nd command line parameter
    9. Change the calculateWitholding to use fields from struct
    10. Print paycheck as usual
  11. Free struct
  12. Close file

Example of execution statement
```bash
%./main payroll.txt .062 5
``` 
<img src="employee-array-of-structs.png" width="300">


## Files

[main.c](main.c)
[payroll.txt](payroll.txt)


## Solution

[main-solution.c](main-solution.c)