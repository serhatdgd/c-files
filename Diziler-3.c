#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, dice, howMany[7]={0,0,0,0,0,0,0};
    srand(time(NULL));
    for (i = 1; i <= 10; i++)
    {
        dice = rand() % 6 + 1; // 1-6 arası rasgele sayı
        howMany[dice]++;
    }
    printf("Zar Numarasi\tKac Defa Geldi\n");
    for (i = 1; i < 7; i++)
    {
        printf("%d\t\t%d\n", i, howMany[i]);
    }

    return 0;
}