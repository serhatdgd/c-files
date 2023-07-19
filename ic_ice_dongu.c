#include <stdio.h>
#include <stdlib.h>

// İç içe döngü

int main()
{
    /*
    int i,j;
    for ( i = 1; i <= 4; i++)
    {
        for (j = 0; j <= 3; j++)
        {
            printf("Hello C\n");
        }
        printf("--------------------------------\n");
    }
    */
    int i,j,sharp=0;
    printf("Enter the number of sharps: ");
    scanf("%d",&sharp);
    for ( i =1; i <= sharp; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("---------------------\n\n");
    for ( i =1; i <= sharp; i++)
    {
        for (j = sharp; j >=i ; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}