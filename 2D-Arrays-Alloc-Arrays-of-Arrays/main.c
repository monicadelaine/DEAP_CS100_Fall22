#include <stdio.h>
#include <stdlib.h>

/*Use your Day 25 code to help with */

void readMatrix(FILE *fp, int **matrix, int nRows, int nCols) {

  printf("in readMatrix %p %d %d\n", matrix, nRows, nCols);
  for (int i = 0; i < nRows; i++) {
    for (int j = 0; j < nCols; j++) {

      // Todo 3: fscanf number from input
    }
  }
}

// Todo 4: write function to print array as a matrix
void printIntMatrix(int **matrix, int rows, int cols) {
  printf("printing matrix pointers\n");
  // for each row
  //   for each column
  //     print element
  //   print \n
}

int main(void) {

  int numRows,  numCols;
  FILE *input;
  int **matrix;

  printf("Enter total number of rows and columns (up to 10)\n");
  scanf("%d %d", &numRows, &numCols);

  // validate that parameters were entered correctly
  while (numRows > 10 || numCols > 10) {
    printf("please enter the number of rows and columsn as less than 10\n");
    scanf("%d %d", &numRows, &numCols);
  }

  // allocate the 2d array of integers as an array of arrays into a
  // pointer named matrix
  matrix = (int **)malloc(numRows * sizeof(int *));
  for (int j = 0; j < numRows; j++)
    matrix[j] = (int *)malloc(numCols * sizeof(int));

  // Todo 1: Open file

  // Todo 2: Populate matrix with readMatrix
  readMatrix(___, ____, _____, _____);

  // Todo 5: call function to print the array
  printIntMatrix(____, ____, _____);

  // free the array
  for (int i = 0; i < numRows; i++)
    free(matrix[i]);
  free(matrix);
}