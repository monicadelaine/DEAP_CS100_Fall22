#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sort_array(int *num, int n) {}

void print_array(int *arr, int size) {}

int main(void) {

  int array_size = 5;
  int int_array[array_size];
  time_t t;

  /* Intializes random number generator */
  srand((unsigned)time(&t));

  printf("array pointer %p\n", int_array);

  for (int i = 0; i < array_size; i++)
    int_array[i] = rand() % 50 - 25;

  print_array(int_array, array_size);

  // create function to sort array
  sort_array(int_array, array_size);

  print_array(int_array, array_size);

  return 0;
}