# CS100-Actvities


## Day

## Knowledge
* fopen syntax and modes
* fscanf syntax
* fscanf read and convert
* scanf/fscanf/sscanf whitespace parsing and greediness
* sscanf for delayed conversions
* command line arguments: count and string representation
* atoi/atof



## Skills

_Programming skills:_

Write, compile, and execute syntactically and logically correct code that:

-   Read data from a file into char, char arrays/strings, int, and double types,
-   Performs advanced string parsing (tokenization, type conversions, etc)

_Debugging skills:_

Use debugging strategies (printf/debugger) to:

-   Verify that data is stored in the correct format and represents the data accurately

## Assignment

We will update payroll-stdin.c to read the records from a file name passed in via the command line

1. Rename payroll-stdin.c payroll-stdin-function.c(solution from Monday is in the attached payroll-stdin-functions.c)

2. Update source code to read the records from the file "payroll.txt"

3. Update the file open statement to use the first parameter from the command line as the name of the file
Running the program:

```
%./payroll-d21 payroll.txt
```

_BONUS:_ Update program to read each record in the payroll.txt file and print the paycheck stub for each employee

_BONUS:_ Read in social security withholding rate from the command line (just use a decimal number)

```
%./payroll-d21 payroll.txt .062
```

## Files

[payroll-stdin-functions.c](payroll-stdin-functions.c)

[payroll.txt](payroll.txt)

Examples:<br>

* [read-text-file.c](read-text-file.c)

* [platitudes.txt](platitudes.txt)

* [Example of command line parsing - args.c](args.c)

## Solution

[payroll-read-all.c](payroll-read-all.c)