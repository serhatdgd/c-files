#include <stdio.h>
#include <stdlib.h>

// Asal sayı bulan program

int main()
{
   int number,i,j,control;
   printf("Enter a number: ");
   scanf("%d",&number);

    for ( i = 2; i <=number; i++)
    {
        control=1;
        for (j = 2; j < i/2; j++)
        {
            if (i%j==0)
            {
                control=0;
                break;
            }
        }
        if (control != 0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}

