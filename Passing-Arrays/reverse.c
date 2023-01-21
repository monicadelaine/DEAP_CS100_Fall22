#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//TODO 1: write function to print reversed string
//function name printReversedString
//function parameter is a string


int main(int argc, char *args[]){

    char name[]="John Smith";
    //print existing string
    printf("Passing %s\n",name);
    printf("Printing reverse: ");
    for (int i=strlen(name)-1;i>=0;i--)
        printf("%c",name[i]);
    printf("\n");

    //TODO 2: pass string into function
    //printReversedString(name);

 
}