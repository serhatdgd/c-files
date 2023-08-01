#include <stdio.h>
#include <stdlib.h>
// Faktöriyel Hesaplama
int factorial(int);
int main()
{
    int y;
    printf("Enter a number: ");
    scanf("%d", &y);
    printf("Factorial: %d", factorial(y));
    return 0;
}
int factorial(int x)
{
    // Alternative
    // if (x == 0)
    //     return 1;
    // else
    //     return x * factorial(x - 1);
    int factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    return factorial;
}