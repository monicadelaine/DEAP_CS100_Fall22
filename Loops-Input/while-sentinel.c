#include <stdio.h> 
#include <string.h>

int main(){

    int score;
    int score_count=0;
    int score_sum=0;
    
    printf("Enter exam score (-1 to to finish):\n");
    scanf("%d",&score);
    
    while (score != -1){
        score_count++;
        score_sum=score_sum+score;
        //printf("score=%d, total=%d",score,score_sum);
        printf("Enter exam score (-1 to to finish):\n");
        scanf("%d",&score);
    }

    printf("Average score %lf\n",score_sum/(double)score_count);

    return 0;
}