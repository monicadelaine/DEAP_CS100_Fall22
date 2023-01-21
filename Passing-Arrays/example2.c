#include <stdio.h>

void passRefString(char *passedString){
    printf("Passed string %s\n",passedString);

}

void passRefIntArray(int *passedIntArray,int size){
    for (int i=0;i<size;i++) printf("%d",passedIntArray[i]);
    //printf("Passed integer array %d\n",passedIntArray[0]);
    printf("\n");

}

int main(int argc, char *args[]){

    int intArray[]={1,2,3,4,5,6};
    char name[]="John Smith";
    int myize=6;

    //print existing string
    printf("Initial string %s\n",name);

    //pass string into function
    passRefString(name);

    for (int i=0;i<6;i++) printf("%d",intArray[i]);
    printf("\n");
    //print int array before passing
    //need statement here
    
    //pass int array to function
    passRefIntArray(intArray,6);

}
