#include <stdio.h>
#include <stdlib.h>
// Buğday örneği

int main()
{
    int i;
    double wheat=1,sumWheat=1;
    for ( i = 1; i <= 64; i++)
    {
        printf("%d. kare icin bilgine verilecek bugday sayisi:%.0f\n",i,wheat);
        sumWheat += wheat;
        wheat *= 2;
    }
    printf("Bilgine verilecek toplam bugday sayisi: %20.0f ",sumWheat);
    return 0;
}
