#include <stdio.h> 
#include <string.h>

//write program to enter number of names to read; tally the total numbers of letters and print

int main(){

    int letter_count=0;
    int name_count;
    char name[50];
    
    //three kinds of loops

    //1. WHen the loop starts, you know how many times the loop will occur
    //   - you read in teh number first or you know because the items has a fixed number (months, etc)

    printf("Enter number of names:\n");
    scanf("%d",&name_count);

    for (int i=0; i<name_count;i++){
        printf("Enter name (up to 49 characters):\n");
        scanf("%s",name);
        letter_count+=strlen(name);
        printf("name %d is %s with sum=%d\n",i,name,letter_count);
    }

    printf("Letter count is %d\n",letter_count);
    
    return 0;
}