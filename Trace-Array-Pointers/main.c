#include <stdio.h>
#include <stdlib.h>

void SortArray(int *intList, int intCount) {
//H
  int i = 0;
  int j = 0;
  int a = 0;
  for (i = 0; i < intCount; ++i) {
    for (j = i + 1; j < intCount; ++j) {
      if (*(intList + i) > *(intList + j)) {
        a = *(intList + i);
        *(intList + i) = *(intList + j);
        *(intList + j) = a;
      }
    }
  }//I
}

int main(int argc, char *argv[]) {

  int numVals; //A
  int i = 0;  //B
  int *sortingList; //C

  scanf("%d", &numVals);//D

  sortingList = (int *) malloc(numVals * sizeof(int));//E
  int *listPtr = sortingList;//F

  for (i = 0; i < numVals; i++) {
    *(sortingList + i) = rand() % 50 - 25;
    printf("addr %p=%d\n", (sortingList + i), *(sortingList + i));//G
  }

  SortArray(sortingList, numVals);
 
  for (i = 0; i < numVals; i++) {
    printf("%d, ", *(sortingList + i));//K
  }
}