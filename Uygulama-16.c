#include <stdio.h>
#include <stdlib.h>
// perfect number
int main()
{
    int i,number,sum;
    sum=0;
    printf("Enter a positive number ");
    scanf("%d",&number);
    for ( i = 1; i < number; i++)
    {
        if(number % i == 0)
        sum =sum + i;
    }   
    if (sum == number)
    {
        printf("WOW! This number is perfect (%d)",number);
    }
    else
    printf("This number is terrible.");
    return 0;
}