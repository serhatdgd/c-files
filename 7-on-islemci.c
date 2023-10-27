#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char myLetter[5]={'x','y','z','a','b'};
    int myNumbers[5]={7,1,19,23,5};
    int i;
    printf("myLetter Array\n");
    printf("---------------\n");
    for ( i = 0; i < 5; i++)
    {
        printf("myLetter[%d]: %c\n",i,*(myLetter+i));
    }
    printf("---------------\n");
    for ( i = 0; i < 5; i++)
    {
        printf("myNumbers[%d]: %d\n",i,*(myNumbers+i));
    }
    printf("myLetter Adress\n");
    printf("---------------\n");
    for ( i = 0; i < 5; i++)
    {
        printf("myLetter[%d]: %x\n",i,(myLetter+i));
    }
    printf("---------------\n");
    for ( i = 0; i < 5; i++)
    {
        printf("myNumbers[%d]: %x\n",i,(myNumbers+i));
    }

    return 0;
}