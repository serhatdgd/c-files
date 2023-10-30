#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char greetings[] = "Hello C!"; // koyuyor otomatik o yüzden 9 karakter sayıyor.
    char greetings2[] = {'H', 'e', 'l', 'l', 'o', ' ', 'C', '!', '\0'};
    int i, size;

    size = sizeof(greetings);
    printf("%lu\n", sizeof(greetings));
    printf("%lu\n", sizeof(greetings2));

    while (*(greetings+i) != '\0')
    {
        printf("%c",greetings[i]);
        i++;
    }
    

    // for ( i = 0; i < size; i++)
    // {
    //     printf("%c",*(greetings+i));
    // }

    return 0;
}