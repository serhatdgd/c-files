#include <stdio.h>
#include <stdlib.h>
/*
    Dışarıdan array'e girilecek eleman sayisi
    girilsin ve bu sonra array sayırlarını girsin.
    Bunun sonucunda tek sayılarla çift sayıları ayrı
    ayrı ekrana yazdırsın.
*/

int main()
{
    int i, unit;
    int numbers[100];

    printf("Enter a positive number:");
    scanf("%d", &unit);

    printf("\nEnter array numbers:");
    for (i = 0; i < unit; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("Odd numbers: ");
    for (i = 0; i < unit; i++)
    {
        if (numbers[i] % 2 == 0)
        continue;
        else
        printf("%d ",numbers[i]);
    }
    printf("\nEven numbers: ");
    for (i = 0; i < unit; i++)
    {
        if (numbers[i] % 2 == 0)
        printf("%d ",numbers[i]);
        else
        continue;
    }

    return 0;
}