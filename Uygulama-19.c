#include <stdio.h>
#include <stdlib.h>
void birlerCevir(int);
void onlarCevir(int);
int main()
{
    int number = 0;
    int d1, d2, d3, d4;
    while (number != -1)
    {
        printf("\nEnter a 4 digit number(Exit is -1): ");
        scanf("%d", &number);
        d1 = number % 10;           // birler
        d2 = (number % 100) / 10;   // onlar
        d3 = (number % 1000) / 100; // yüzler
        d4 = number / 1000;         // binler
        if (d4 != 1)
            birlerCevir(d4);
        if (d4 != 0)
        {
            if (number != -1)
                printf("Bin ");
        }
        if (d3 != 1)
            birlerCevir(d3);
        if (d3 != 0)
            printf("Yuz ");
        onlarCevir(d2);
        birlerCevir(d1);
        printf("\n");
    }
}
void birlerCevir(int x)
{
    switch (x)
    {
    case 1:
        printf("Bir ");
        break;
    case 2:
        printf("Iki ");
        break;
    case 3:
        printf("Uc ");
        break;
    case 4:
        printf("Dort ");
        break;
    case 5:
        printf("Bes ");
        break;
    case 6:
        printf("Alti ");
        break;
    case 7:
        printf("Yedi ");
        break;
    case 8:
        printf("Sekiz ");
        break;
    case 9:
        printf("Dokuz ");
        break;
    }
}
void onlarCevir(int x)
{
    switch (x)
    {
    case 1:
        printf("On ");
        break;
    case 2:
        printf("Yirmi ");
        break;
    case 3:
        printf("Otuz ");
        break;
    case 4:
        printf("Kirk ");
        break;
    case 5:
        printf("Elli ");
        break;
    case 6:
        printf("Altmis ");
        break;
    case 7:
        printf("Yetmis ");
        break;
    case 8:
        printf("Seksen ");
        break;
    case 9:
        printf("Doksan ");
        break;
    }
}
