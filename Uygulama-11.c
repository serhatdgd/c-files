#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1- Üçgen sayı piramit deseni oluşturma 
    /*
    int i,j,number;
    printf("Enter a number: ");
    scanf("%d",&number);
    for ( i = 1; i <=number; i++) // dış döngü satırları atlamak için
    {
        for (j = i; j <= number; j++) // iç döngü satırları yazmak için
     {
        printf("%d ",i);
     }
     
     printf("\n");
    }
    */
   // 2-İçi boş kare oluşturma 
   
    int i,j,number;
    printf("Enter a number value: ");
    scanf("%d",&number);
    for ( i = 1; i <=number; i++)
    {
        for (j= 1; j <= number; j++)
        {
            if (i==number || i==1 || j==number || j==1)
            {
                printf("* ");
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}