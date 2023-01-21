#include <stdio.h> 
#include <string.h>

int main(){

    int score;
    int score_count=0;
    int score_sum=0;
    
    //three kinds of loops
    
    //3. You don't know and you wait until there are no more itesms
    //  - There are no more items to enter. (we grab input from a finite sized file)

    score_sum=0;
    score_count=0;

    printf("Enter exam score:\n");
    scanf("%d",&score);
    
    while (!feof(stdin)){
        score_count++;
        score_sum+=score;
        printf("Enter exam score:\n");
        scanf("%d",&score);
    }

    printf("Average score %lf\n",score_sum/(double)score_count);

    return 0;
}