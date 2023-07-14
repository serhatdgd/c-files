#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;
    printf("Score: ");
    scanf("%d",&score);
    if(score>=60){
        printf("Congratulations you passed the exam \n");
        printf("Your score: %d\n\n",score);
    }
    else{
        printf("Unfortunately you did not pass the exam\n");
        printf("Your score: %d\n\n",score);
    }
    printf("The program continues to run \n\n");
    return 0;
}