#include <stdio.h>
#include <stdlib.h>
/*
    Bir sınıf en fazla 100 öğrenciden oluşabilir.
    Sınıfta bulunan öğrenci sayınını girdi olarak alıp
    her öğrencinin okul nuramarsı ile notunu iki ayrı array'e
    okutalım. Sonuc olarak en düşük ve en yüksek notu alan öğrenciler
    ekrana yazdırılsın.
*/
int i, j;
int ogrenciSayisi, degisken=0;
int puan[100];

void puanSiralama();

int main(int argc, char *argv[])
{

    printf("Sinif mevcudunu girin: ");
    scanf("%d", &ogrenciSayisi);

    printf("Puanlari giriniz: ");
    for (i = 0; i < ogrenciSayisi; i++)
    {
        scanf("%d", &puan[i]);
    }

    puanSiralama();

    for ( i = 0; i < ogrenciSayisi; i++)
    {
        printf("%d ",puan[i]);
    }
    
    printf("\nEn yusek not: %d\n",puan[0]);
    printf("En dusuk not: %d",puan[ogrenciSayisi-1]);
    return 0;
}

void puanSiralama()
{
    for (i = 0; i < ogrenciSayisi; i++)
    {
        for (j = 0; j < ogrenciSayisi; j++)
        {
            if (puan[j] < puan[i])
            {
                degisken = puan[i];
                puan[i] = puan[j];
                puan[j] = degisken;
            }
        }
    }
}
