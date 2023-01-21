#include <stdio.h>

int passIntegerNoUpdate(int passedInt){
    printf("printing passed int %d",passedInt);
    //update and return
    passedInt=-1;
    return passedInt;
}

void passIntegerUpdate(int *passedIntPtr)

double passDoubleNoUpdate(double passedDouble){
    printf("printing passed double %lf",passedDouble);
    //update and return
    passedDouble=3.14;
    return passedDouble;
}

void passDoubleUpdate(double *passedDoublePtr)

char passCharNoUpdate(char passedChar){
        printf("printing passed char %c",passedChar);
        //update and return
        passedChar='M';
        return passedChar;
}

void passCharUpdate(char *passedCharPtr)

void passRefIntArray(int *passedArrayPtr)

void passRefString(char *passedStringPtr)

int main(int argc, char args[]){

    int returnedInt=passIntegerNoUpdate(16);
    int returnedDouble=passIntegerNoUpdate(0.16);
    int returnedChar=passIntegerNoUpdate('p');

    printf("returned int %d",returnedInt);
    printf("returned double %lf",returnedDouble);
    printf("returned int %c",returnedChar);

}
