#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char myLetters[7]={'a','b','c','d','e','f','g'};
    printf("İlk elemanin adresi:%x\n",&myLetters[0]);
    printf("ilk elemanin adresi: %x\n\n",myLetters);

    printf("İkinci elemanin adresi:%x\n",&myLetters[1]);
    printf("İkinci elemanin adresi: %x\n\n",myLetters+1);

    printf("Ucuncu elemanin adresi:%x\n",&myLetters[2]);
    printf("Ucuncu elemanin adresi: %x\n\n",myLetters+2);

    printf("İlk elemanin değeri:%c\n",myLetters[0]);
    printf("ilk elemanin değeri: %c\n\n",*myLetters);
    return 0;
}
