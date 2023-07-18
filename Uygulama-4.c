#include <stdio.h>
#include <stdlib.h>

/* Basit bir çarpım tablosu */

int main()
{
    int i,number;
    i=1;
    printf("Enter a number from 1 to 10: ");
    scanf("%d",&number);

        if(number<0 || number>10)
    {
        printf("Please don't do that\n");
        return 0;
    }
    while(i<=10)
    {
        int multiply;
        multiply=number*i;
        printf("%d  x  %d =  %d \n",number,i,multiply);
        i++;
    }
    return 0;
}