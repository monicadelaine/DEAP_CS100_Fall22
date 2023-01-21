#include <stdio.h>
#include <stdlib.h>

/*Use your Day 25 code to help with */

void readMatrix(FILE *fp, int *matrix, int nRows, int nCols) {

  printf("in readMatrix %p %d %d\n", matrix, nRows, nCols);
  for (int i = 0; i < nRows; i++) {
    for (int j = 0; j < nCols; j++) {
      fscanf(fp, "%d", (matrix + (i * nCols) + j));
      // printf(" (%d) %d", (i * nCols) + j, *(matrix + (i * nCols) + j));
    }
  }
}

// Todo 4: write function to print array as a matrix
void printIntMatrix(int *matrix, int rows, int cols) {
  printf("printing matrix pointers\n");
  // for each row
  //   for each column
  //     print element
  //   print \n
}

int main(void) {
  int numRows,numCols;
  FILE *input;

  printf("Enter total number of rows and columns (up to 10)\n");
  scanf("%d %d", &numRows, &numCols);

  while (numRows > 10 || numCols > 10) {
    printf("please enter the number of rows and columsn as less than 10\n");
    scanf("%d %d", &numRows, &numCols);
  }

  // Todo 1: allocate the 2d array of integers as single dimension into a
  // pointer named matrix
  int ___ = (____)malloc(___ * ___ * sizeof(int));

  // Todo 2: Open file
  ______ = fopen("numbers.txt", "___");

  // Todo 3: Populate matrix with readMatrix
  readMatrix(____, ____, ____, ____);

  // Todo 5: call function to print the array
  printIntMatrix(___, ___, ___);

  // Todo 6: free the array
  free(_____);
}
