#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Sıralamalar

void sortIt();
void writeTheArray();
int numbers[7], i;

int main()
{
    // int numbers[7], i;
    // printf("Enter array numbers: ");
    // for (i = 0; i < 7; i++)
    // {
    //     scanf("%d", &numbers[i]);
    // }
    // printf("Original order:");
    // for (i = 0; i < 7; i++)
    // {
    //     printf("%d ", numbers[i]);
    // }
    // printf("\nReverse order:");
    // for (i = 0; i < 7; i++)
    // {
    //     printf("%d ", numbers[6 - i]);
    // }
    printf("Enter array numbers:");
    for (i = 0; i < 7; i++)
    {
        scanf("%d", &numbers[i]);
    }
    printf("\n Before sorting\n");
    writeTheArray();
    printf("\nThe array is sorting...\n");
    sortIt();
    printf("\nAfter sorting\n");
    writeTheArray();
    return 0;
}
void sortIt()
{
    int j, reserve;
    for (i = 0; i < 7; i++)
    {
        for (j = i + 1; j < 7; j++)
        {
            if (numbers[j] < numbers[i])
            {
                reserve = numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = reserve;
            }
        }
    }
}
void writeTheArray()
{
    for ( i = 0; i < 7; i++)
    {
        printf("%d ",numbers[i]);
    }
    printf("\n");
}