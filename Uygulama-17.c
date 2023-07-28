#include <stdio.h>
#include <stdlib.h>
// Üs Alma fonksiyonu
float exponentiation(float x,int y);

int main()
{
    float x;
    int y;
    printf("Enter the number: ");
    scanf("%f",&x);
    printf("Enter the exponent: ");
    scanf("%d",&y);
    printf("%f",exponentiation(x,y));
    return 0;
}

float exponentiation(float x,int y)
{
    float result=1;
    int i;
    if (y<0)
    {
        for ( i = 0; i <-y; i++)
        {
            result *= 1/x;
        }
        
    }
    else
    {
        for ( i = 0; i < y; i++)
        {
            result *= x;
        }
    }
    return result;
}