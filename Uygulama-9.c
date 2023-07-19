#include<stdio.h>
#include<stdlib.h>

// Faktöriyel hesaplama

int main()
{
    int i,factorial,number;
    printf("Enter the number for which you want to factorial of number: ");
    scanf("%d",&number);
    factorial=1;
    for ( i = 1; i <=number; i++)
    {
        factorial= i * factorial;
    }
    printf("Factorial the %dth number: %d",number,factorial);

    return 0;
}
