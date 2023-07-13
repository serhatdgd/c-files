#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*
    char myNumber=99;
    printf("Karakterimizin sayisal degeri: %d\n",myNumber);
    printf("Karakterimizin ASCII degeri: %c",myNumber);
    */
    /*char myCity[30]="Balikesir";
    printf("My city is %s\n",myCity);
    printf("My city is %c",myCity); //çalışmaz
    */
    char myCity[20];
    printf("Enter a city:");
    scanf("%s",&myCity);
    printf("Your city is : %s",myCity);
    return 0;
}