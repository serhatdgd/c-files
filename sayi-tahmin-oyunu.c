#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, number, guess;
    srand(time(NULL));
    i = 1;
    printf("--------Cikmak icin 0--------\n");
    while (i != 0)
    {
        number=rand()%10+1;
        printf("Sayiyi tahmin ediniz(1-10): ");
        scanf("%d", &guess);
        if (guess == number )
        {
            printf("Tebrikler!!");
            break;
        }
        else if (guess==0)
        break;
        else
        {
            printf("Tekrar dene...\n");
        }
    }
}