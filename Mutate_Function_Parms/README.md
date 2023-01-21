# CS100-Actvities


## Day

## Knowledge

* Reference and dereference operator
* Local variables
* Using pointers as function parameters
* Passing pointers as a mechanism to return multiple modified values via the parameter list


## Skills

_Programming skills:_

* Write, compile, and execute syntactically and logically correct code that:
* Obtains variable locations using reference operator,
* Accesses variable values by dereference operator,
* Uses pointers in assignments
* Modifies variable contents using pass by pointer,
* Passes reference types into function using pass by pointer including arrays and strings

_Debugging skills:_

Use debugging strategies (printf/debugger) to:

* Verify that parameters of pointer types are passed correctly, and mutations enabled by passed pointers are performed correctly


## Assignment

Prototype and implement a function that swaps the values of two characters

```
#include <stdio.h>

// function prototype/declaration

int main(void) {
  char char1 = 'A';
  char char2 = 'z';

  printf("initial characters %c and %c\n", char1, char2);

  // create function to swap characters

  printf("swapped characters %c and %c\n", char1, char2);

  return 0;
}

// function definition/implementation
```

## Files
[main.c](main.c)

## Solution
[main-solution.c](main-solution.c)
