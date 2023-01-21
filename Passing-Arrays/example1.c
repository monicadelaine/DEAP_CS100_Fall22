#include <stdio.h>

int updateInteger(int passedInt){ //pass by value
    printf("printing passed int %d\n",passedInt);
    //update and return
    passedInt=-1;
    return passedInt;
}

double updateDouble(double passedDouble){
    printf("printing passed double %lf\n",passedDouble);
    //update and return
    passedDouble=3.14;
    return passedDouble;
}

char updateChar(char passedChar){
        printf("printing passed char %c\n",passedChar);
        //update and return
        passedChar='M';
        return passedChar;
}

int main(int argc, char *args[]){

    int intToUpdateViaFunction=16;
    double doubleToUpdateViaFunction=.16;
    char charToUpdateViaFunction='p';

    int returnedInt=updateInteger(intToUpdateViaFunction);
    double returnedDouble=updateDouble(doubleToUpdateViaFunction);
    char returnedChar=updateChar(charToUpdateViaFunction);

    printf("\nshould return -1...returned int %d\n",returnedInt);
    printf("should return 3.14 ...returned double %lf\n",returnedDouble);
    printf("should return M returned int %c\n",returnedChar);

    printf("\nupdating intToUpdateViaFunction to -1...returned int %d\n",intToUpdateViaFunction);
    printf("update doubleToUpdateViaFunction to 3.14 ...returned double %lf\n",doubleToUpdateViaFunction);
    printf("updating charToUpdateViaFunction to M returned int %c\n",charToUpdateViaFunction);

}
