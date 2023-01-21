# CS100-Actvities


## Day

## Knowledge
* Loop logic
* True false evaluation (Boolean vs non-boolean)
* Syntax of while
* Syntax of for loop/++/-- operators; break/continue
* Loop semantics of initial value, value update and test expression
* True false evaluation (Boolean vs non-boolean)
* Choosing for vs while loop
* For/while loops over C string 
* Variable scope in for block (C99 internal declaration)
* End of input function feof(stdin)
* Redirection to/from stdin using > and <
* Abstraction of keyboard as a file-stdin
* Debug single or nested looping logic 

## Skills
_Design skills:_

Make appropriate design decisions when:

* Choosing between while loops and for loops, and
* Choosing how to terminate user input (sentinel or end of file)
* Choosing how to end a loop whether using an expression or using a break statement
* Apply continue in a clear and consistent manner

_Programming skills:_

Write compile and execute syntactically and logically correct C program that:

* Uses while or for loop to execute a block of statements zero, one or many times based on an expression
* Loops based on number received from user
* Uses user input to loop until a special character is received
* Uses user input to loop until there is no more input to process
* Read user input redirected from a file and redirect program output to a file

_Debugging skills:_
Use debugging strategies (printf/debugger) to:

* Verify that expressions that drive loops function as expected


## Assignment
Write a program read strings until EOF.  Choose the code from a previous assignment that process the words in a sentence as a starting point.

1. Use strcpy() to store the longest and shortest strings<br>
	
1. Print out the longest and shortest strings without spaces
	
NOTE: Test using:

```
./a.out <data1.dat
./a.out <data2.dat
```


## Files

[Worksheet](stringsandloops.docx)<br>
[data1.dat](data1.dat)<br>
[data2.dat](data2.dat)

## Solution
[string-min-max-solution.c](string-min-max-solution.c)