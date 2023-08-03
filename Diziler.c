#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[])
{

    int notes[] = {7, 19, 24, 3, 37}, i;
    notes[0] = 1; // Dizideki sayıyı değiştirme

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", notes[i]);
    }
    int sum;
    sum=notes[0]+notes[4];
    printf("Toplam: %d",sum);
    return 0;
}