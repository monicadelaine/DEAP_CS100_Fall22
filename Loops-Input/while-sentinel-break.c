#include <stdio.h> 
#include <string.h>

int main(){

    int score;
    int score_count=0;
    int score_sum=0;
 
    //three kinds of loops

    //2. You don't know how many items you will process from the input
    //   - The user will enter a sentinel value when there are no more items
    
    while (1){
        printf("Enter exam score (-1 to to finish):\n");
        scanf("%d",&score);
        //printf("score=%d, total=%d",score,score_sum);
        if (score == -1) break;
        score_count++;
        score_sum=score_sum+score;
    }

    printf("Average score %lf\n",score_sum/(double)score_count);

    return 0;
}