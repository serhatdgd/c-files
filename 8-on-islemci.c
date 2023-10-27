#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void myArray(int*);
int main()
{
    int numbers[6] = {1, 7, 19, 23, 5, 11};
    int i;
    printf("previous state\n");
    printf("---------------\n");
    for (i = 0; i < 6; i++)
    {
        printf("numbers[%d]:%d\n", i, numbers[i]);
    }

    myArray(numbers);

    printf("\nnext state\n");
    printf("---------------\n");
    for (i = 0; i < 6; i++)
    {
        printf("numbers[%d]:%d\n", i, numbers[i]);
    }
    return 0;
}

void myArray(int *numbers)
{
    int j=0;
    for (j = 0; j < 6; j++)
    {
        *(numbers+j)*=3;
    }
    
}