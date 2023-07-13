#include <stdio.h>
#include <stdlib.h>
/*
    Kapalı bir kaptaki gazın basıncını hesaplayan program
    basınç = (mol sayısı* R sabiti * sıcaklık) / hacim
*/
int main()
{
    float preasure,constantR;
    float numberOfMoles,volume,heat;
    constantR=0.82;
    printf("Kabin hacmini giriniz[V]: ");
    scanf("%f",&volume);
    printf("Kabdaki mol sayisini giriniz[n]: ");
    scanf("%f",&numberOfMoles);
    printf("Ortam sicakligini K olarak giriniz[T]: ");
    scanf("%f",&heat);
    preasure=(constantR*numberOfMoles*heat)/volume;
    printf("Basinc: %0.2f",preasure);
    return 0;
}