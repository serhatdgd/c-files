#include <stdio.h>
#include <stdlib.h>

int main()
{   /*
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
    */
    int myNumber;
    printf("enter a number: ");
    scanf("%d",&myNumber);
    if (myNumber>0)
    {
        printf("The value is positive");
    }
    else if(myNumber<0)
    {
        printf("The value is negative");
    }
    else
        printf("Your number is 0");
/*
     Kısayol şart oluşturma
    (myNumber>0) ?(ise şartı bu) printf("your number is positive") :(else şartı bu) printf("your number is negative");
*/
    return 0;
}