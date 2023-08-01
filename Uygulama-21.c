#include <stdio.h>
#include <stdlib.h>

int CelToFah(int);
int FahToCel(int);

int main()
{
    char choose;
    int number;
    printf("Fahrenheit --> Celcius icin c\n");
    printf("Celcius --> Fahrenheit icin f\n");
    scanf("%c", &choose);
    switch (choose)
    {
    case 'c':
        printf("Fahrenheit degerini girin: ");
        scanf("%d", &number);
        printf("Celcius degeri: %d", FahToCel(number));
        break;
    case 'f':
        printf("Celcius degerini girin: ");
        scanf("%d", &number);
        printf("Fahrenheit degeri: %d", CelToFah(number));
        break;
    default:
        printf("Hata");
        break;
    }
}
int CelToFah(int x)
{
    return (x * 9 / 5 + 32);
}
int FahToCel(int x)
{
    return ((x - 32) * 5 / 9);
}