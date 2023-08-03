#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[30];
    printf("enter your name: ");
    scanf("%s", &name); // tek kelime alır
    // gets(name); -------> cümle alabilir.
    printf("Your name is %s\n", name);
    printf("\n%c", toupper(name[5]));
}