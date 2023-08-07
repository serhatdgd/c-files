#include <stdio.h>
#include <stdlib.h>
/*
    Nokta ile biten bir cümleyi karakter array'ine okutalim.
    Sonra cümlede kaç tane A veya E karakteri var bulalım.
*/
void countCharacters(char x[]);
int main(int argc, char *argv[])
{
    char x[100];
    int i = 0;
    printf("Enter a sentence: ");
    do
    {
        scanf("%c", &x[i]);
        i++;
    } while (x[i - 1] != '.');
    countCharacters(x);
    return 0;
}
void countCharacters(char x[])
{
    int i, aCount = 0, eCount = 0;
    for (i = 0; x[i] != '.'; i++)
    {
        if (x[i] == 'A' || x[i] == 'a')
        {
            aCount++;
        }
        if (x[i] == 'E' || x[i] == 'e')
        {
            eCount++;
        }
    }
    printf("A/a:%d\n", aCount);
    printf("E/e:%d\n", eCount);
}