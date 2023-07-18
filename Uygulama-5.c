#include <stdio.h>
#include <stdlib.h>

// Asal sayı bulan program

int main()
{
    int number,i;
    i=2;

    printf("Enter a positive number: ");
    scanf("%d",&number);
    if (number<0)
    {
        printf("Please enter a positive number.");
        return 0;
    }
    while (i<=number/2)
    {
        if (number%i==0)
        {
            printf("%d divided by %d so it can't be a prime number",number,i); 
            return 0;
        }
        i++;
    }
    /*   WHİLE YERİNE FOR DA KULLANILABİLİR
     for (i = 2; i <= number/2; i++)
    {
        if (number%i==0)
        {
            printf("%d divided by %d so it can't be a prime number",number,i); 
            return 0;
        }
    }
    */
    printf("%d is a prime number.",number);
    return 0;
}

