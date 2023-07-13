#include<stdio.h>
#include<stdlib.h>
/*
    1- girilen sayının onlar ve birler basamağını bulan program
    2- girilen dört sayının aritmetik ortalamasını bulan program 
*/
int main ()
{ 
    // 1
    int sayi,onlarBasamagi,birlerBasamagi;
    printf("Bir sayi giriniz: ");
    scanf("%d",&sayi);
    birlerBasamagi = sayi % 10;
    onlarBasamagi = (sayi % 100) / 10;
    printf("Onlar basamagi: %d \nBirler basamagi: %d",onlarBasamagi,birlerBasamagi);    
    printf("\n \n------------------------------- \n \n");
    //2
    float sayi1,sayi2,sayi3,sayi4;
    float aritmetikOrtalama;
    printf("4 sayi giriniz: ");
    scanf("%f",&sayi1);
    scanf("%f",&sayi2);
    scanf("%f",&sayi3);
    scanf("%f",&sayi4);
    aritmetikOrtalama=(sayi1+sayi2+sayi3+sayi4)/4;
    printf("Ortalama: %f",aritmetikOrtalama);   
    return 0;
}