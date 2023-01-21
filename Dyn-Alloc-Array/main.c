#include <stdio.h>
#include <stdlib.h>

void SortArray(double *intList, int intCount) {

  int i = 0;
  int j = 0;
  double a = 0;
  for (i = 0; i < intCount; ++i) {
    for (j = i + 1; j < intCount; ++j) {
      if (*(intList + i) > *(intList + j)) {
        a = *(intList + i);
        *(intList + i) = *(intList + j);
        *(intList + j) = a;
      }
    }
  }
}

int main(int argc, char *argv[]) {

  int numVals = 0;
  int i = 0;
  double *sortingList;

  // Enter 10
  // random numbers 8 11 2 -10 18 10 11 17 24 -4

  scanf("%d", &numVals);

  // Add statement to dynamically allocate an integer array of the right size


  double *listPtr = sortingList;
  printf("listptr=%p sortingListptr=%p\n", &listPtr, &sortingList);
  printf("listptr=%p sortingListptr=%p\n", listPtr, sortingList);
  for (i = 0; i < numVals; i++) {
    *(listPtr) = (rand() % 50 - 25) * .1;
    printf("addr %p=%lf\n", (listPtr), *(listPtr));
    listPtr++;
  }
  printf("Done populating array\n");
  SortArray(sortingList, numVals);

  printf("listptr=%p sortingListptr=%p\n", listPtr, sortingList);

  for (i = 0; i < numVals; i++) {
    printf("%lf, ", *(listPtr));
    listPtr++;
  }
}