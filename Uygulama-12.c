#include <stdio.h>
#include <stdlib.h>

// Üçgen piramit deseni oluşturma

int main()
{
    int i,j,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    for ( i = 1; i <=number; i++)
    {
        for (int k = 1; k <=number-i ;k++)
        {
            printf(" ");
        }        
        for (j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;


}