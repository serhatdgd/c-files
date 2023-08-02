#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    char mykey;
    printf("Bir tusa basiniz: ");
    mykey=getchar();
    printf("\n%c tusuna bastiniz.\n",mykey);
    printf("karakterin ASCII degeri %d dir\n",mykey);
    return 0;
}
// getch()  --------> Klayveden girilen ilk tuşu alır ekrana yazdırmaz.
// getchar()  ------> Karakter girildikten sonra entere basana kadar bekler.
// gets()   --------> Bir cümle veya bir kelime girebiliriz.
// putchar() -------> Ekrana tek bir karakter yazar.
