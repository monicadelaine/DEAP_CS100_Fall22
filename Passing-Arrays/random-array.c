#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//TODO 1: write to fill array with random numbers
//function name: fillRandomArray
//parameters: integer array and array size


//TODO 2: Write a function to print an array of integers
//function name: printArray
//parameters: integer array and array size


//Write function to print values in random array

int main(int argc, char *args[]){

    int intArraySize=10;
    int intArray[intArraySize];

    //fill array with random numbers
    for (int i = 0; i < intArraySize; i++) {
        intArray[i] = rand()%100;
    }

    //print array with random numbers
    printf("\nPrinting array ");
    for (int i = 0; i < intArraySize; i++) {
        printf("%d[%d] ",intArray[i],i);
    }
    printf("\n");

    //TODO 3: call fillRandomArray with parameters

    //TODO 4: call printArray with parameters 

 
}
