# CS100-Actvities


## Day

## Knowledge
* Function signature and syntax
* Function definition
* Parameter definition as formal parameters
* Calling custom functions
* Passing reference types: strings and arrays
* Pass by pointer vs pass by value
* Limited scope of data passed as parameters
* Return of primitive types
* Block scope variable visibility
* Debug function calls and definitions



## Skills
_Design skills:_

Make appropriate design decisions when:

* Decomposing logic into functions to reduce duplicate code and improve robustness and maintainability through appropriate isolation(6.1.2.\*, 6.3.\*)
* identifying function parameters and return types that captures invariance and accommodates expected change

_Programming skills:_

Write, compile, and execute syntactically and logically correct code that:

* Defines a function as a return type, a function name and a set of parameters, each with its own type,
* Puts redundant code in a function,
* Passes required data for function processing via the function parameters,
* Returns data from the function to the calling statement

_Debugging skills:_

Use debugging strategies (printf/debugger) to:

* Verify that parameters are passed into functions as expected
* Verify return values are calculated correctly



## Assignment
Program 1: Update reverse.c: 1) write a function that prints a string in reverse and 2) call that function to print the reversed string

Program 2: Update random-array.c: 1) Create a function fillRandomArray that fills an array with random numbers, 2) create a function printArray that prints an integer array, 3) call fillRandomArray to fill an array and 4) call printArray to print the array filled with random numbers
** Be sure to use the appropriate parameters

## Files
[Worksheet](handout.docx)<br>
[reverse.c](reverse.c)<br>
[random-array.c](random-array.c)<br>


[Example: Passing by value (default for int, char and double) does not change parameter](example1.c)<br>	
[Example: Pass by reference (default for arrays and strings) does change the value](example2.c)<br>

[Example: Different function signatures for pass by value (Pass<Type>NoUpdate) and pass by reference (Pass<type>Update](example3.c)<br>	


## Solution

[reverse-random-solution.c](reverse-random-solution.c])