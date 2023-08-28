#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX(number1, number2) (number1 > number2) ? number1 : number2 //------> Makro
#define MIN(number1, number2) (number1 < number2) ? number1 : number2 //------> Makro
#define AREA_OF_RECTANGLE(x, y) (x * y)
#define MYNUMBER 10
int main()
{
    printf("MAX(2,7):%d\n", MAX(2, 7));
    printf("MAX(2,7):%d\n", MIN(2, 7));
    printf("Area: %d", AREA_OF_RECTANGLE(10, 7));

    printf("\nMYNUMBER: %d", MYNUMBER);
    #undef MYNUMBER                     //bundan sonra mynumber değeri tanınmıyor
    printf("\nMYNUMBER: %d", MYNUMBER);  
    return 0;
}