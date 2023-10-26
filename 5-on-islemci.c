#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float* squareRoot(float* ptr);
int main()
{
    float number;
    float* ptr;

    printf("Enter a number:");
    scanf("%f",&number);
    ptr=squareRoot(&number);
    printf("Square root of number:%.2f\n\n",*ptr);
    return 0;
}

float* squareRoot(float* ptr)
{
    *ptr=sqrt(*ptr);
    return ptr;
} 