# CS100-Actvities

## Day

## Knowledge

* Reference and dereference operator
* Local variables
* Using pointers as function parameters
* Malloc and free function for variables
* Malloc/free for arrays and strings
* Typecasting with malloc
* sizeof macro
* Passing pointers as a mechanism to return multiple modified values via the parameter list


## Skills

_Programming skills:_

Write, compile, and execute syntactically and logically correct code that:

* Obtains variable locations using reference operator,
* Accesses variable values by dereference operator,
* Uses pointers in assignments
* Modifies variable contents using pass by pointer,
* Passes reference types into function using pass by pointer including arrays and strings,
* Passes multiple dimension arrays in the formal parameters using a pointer to avoid providing 2nd dimension size at compile time,
* Dynamically allocates space for a multiple dimension array using malloc, type casting and the sizeof macro,
* Accesses and modifies elements in a dynamically allocated data structure using dereferencing

_Debugging skills:_

Use debugging strategies (printf/debugger) to:

* Verify a pointer operation as iterates through an array or C string correctly by tracing its execution
* Verify that parameters of pointer types are passed correctly, and mutations enabled by passed pointers are performed correctly


## Assignment

[main.c](main.c) reads a file of strings "[strings.txt](strings.txt)" and print the first word of the 10th sentence.

Note: 

1. The function findWordInArrayOfStrings does not require udpating.

1. Assume you have NUMBER\_OF\_STRINGS strings to read.  Use the constant NUMBER\_OF\_STRINGS in place of 10

Update [main.c](main.c) to complete the following statements:

- Todo: Allocate space for NUMBER_OF_STRINGS string pointers;

- Todo: Allocate exactly the needed space for each current string as it is read

- Todo: save current string to stringlist

- Todo: grab the first word of the last sentence



## Files

[main.c](main.c)<br>
[strings.txt](strings.txt)<br>
[strings2.txt](strings2.txt)<br>

## Solution

[main-solution.c](main-solution.c)