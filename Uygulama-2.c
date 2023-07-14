#include <stdio.h>
#include <stdlib.h>
/* 
    Kullanıcıdan girilen 3 sayının en büyük ve en küçüğünü bulan program
*/
int main()
{
    int number1,number2,number3;
    printf("Enter 3 number: ");
    scanf("%d %d %d",&number1,&number2,&number2);
    if(number1>number2 && number1>number2)
    {
        printf("Number 1 is the biggest.");
        if (number2>number3)
        {
            printf("Number 3 is the lowest");
        }
        else
        {   printf("Number 2 is the lowest"); }
    }
    else if(number2>number1 && number2>number3)
    {
        printf("Number 2 is the biggest.");
        if (number1>number3)
        {
            printf("Number 3 is the lowest");
        }
        else
        {   printf("Number 1 is the lowest"); }
    }
    else
    {
        printf("Number 3 is the biggest.");
        if (number2>number1)
        {
            printf("Number 1 is the lowest");
        }
        else
        {   printf("Number 2 is the lowest"); }
    }
    return 0;
}