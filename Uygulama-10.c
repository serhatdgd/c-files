#include <stdio.h>
#include <stdlib.h>

// Fibonacci Dizisi

int main()
{
    int first,second,third;
    int number,i;
    first=1;
    second=1;
    third=1;
    printf("Enter a number: ");
    scanf("%d",&number);
    printf("1 1 ");
    for (i = 1; i <= number; i++)
    {
        first=second;
        second=third;
        third=first+second;
        if (i<=number-2)      
        printf("%d ",third);
    }
    return 0;
}