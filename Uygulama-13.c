#include <stdio.h>
#include <stdlib.h>

// 1- Harf Üçgen Algoritması
/*
int main()
{
    int i,j;
    char input;
    char character='A';
    printf("Enter a uppercase letter: ");
    scanf("%c",&input);
    for (i = 1; i <=(input-'A'+1); i++)
    {   
        for (j =1; j <= i; j++)
        {
            printf("%c",character);
        }
        
        character++;
        printf("\n");
    }
*/
int main()
{
    int i,space,rows,j,number=1;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for ( i = 0; i < rows; i++)
    {
        for (space = 1; space<=rows-i; space++)
        {
            printf("  ");
        }
        for (j = 0; j <= i; j++)
        {
            if (j==0 || i==0)
            {
                number=1;
            }
            else
            number=number*(i-j+1)/j;
            printf("%4d",number);
        }
        printf("\n");   
    }
    
}