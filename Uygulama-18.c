#include <stdio.h>
#include <stdlib.h>
#include "myMath.h"
// Matematiksel hesaplar
int main()
{
    menu();
    int secim = 0;
    int x, y;
    printf("\nBir Numara Secin(1-5): ");
    scanf("%d", &secim);
    printf("\n");
    switch (secim)
    {
    case 1:
        printf("Iki sayi giriniz: ");
        scanf("%d%d", &x, &y);
        printf("Sayilardan kucuk olan: %d", minimum(x, y));
        break;
    case 2:
        printf("Iki sayi giriniz: ");
        scanf("%d%d", &x, &y);
        printf("Sayilardan buyuk olan: %d", maksimum(x, y));
        break;
    case 3:
        printf("Bir sayi giriniz: ");
        scanf("%d", &x);
        printf("Sayinin karesi: %d", square(x));
        break;
    case 4:
        printf("Bir sayi giriniz: ");
        scanf("%d", &x);
        printf("Sayinin kupu: %d", cube(x));
        break;
    case 5:
        printf("Bir sayi giriniz: ");
        scanf("%d", &x);
        printf("Sayinin mutlak degeri: %d", absolute(x));
        break;
    default:
        printf("Hata");
        break;
    }
    getch();
    return 0;
}
void menu()
{
    printf("\n");
    printf("*************************\n");
    printf("          MENU\n");
    printf("*************************\n");
    printf("1-Minimum\n");
    printf("2-Maksimum\n");
    printf("3-Kare al\n");
    printf("4-Kup al\n");
    printf("5-Mutlak Deger\n");
}
int minimum(int x, int y)
{
    if (x > y)
        return y;
    else
        return x;
}
int maksimum(int x, int y)
{
    if (x < y)
        return y;
    else
        return x;
}
int square(int x)
{
    return x * x;
}
int cube(int x)
{
    return x * x * x;
}
int absolute(int x)
{
    if (x < 0)
        return x * (-1);
    else
        return x;
}