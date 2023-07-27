#include <stdio.h>
#include <stdlib.h>

void allNumbers(int myNumbers[6])
{
    for (int i = 0; i <6; i++)
    {
        printf("%d\n",myNumbers[i]);
    }    
}

int showMe(int x)
{
    return 5+x;
}

int main()
{
    int myNumbers[6]={10,20,30,40,50,60};
    allNumbers(myNumbers);
    printf("%d",showMe(2));
    return 0;
}