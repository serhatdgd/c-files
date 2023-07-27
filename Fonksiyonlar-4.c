#include <stdio.h>
#include <stdlib.h>

// Recursion fonksiyon

int sumNumber(int i);

int main()
{
    int number;
    scanf("%d",&number);
    int result = sumNumber(number);
    printf("%d\n",result);
    return 0;
}
int sumNumber(int i)
{
    if (i>0)
    {
        return i+sumNumber(i-1);
    }
    else
    return 0;
}
