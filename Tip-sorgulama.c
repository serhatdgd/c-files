#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int number;
    printf("Enter a number (0-255): ");
    scanf("%d", &number);
    printf("\n the character you entered: %c\n", number);
    // if (isalnum(number)) // A-Z , a-z , 0-9 arasında ise 1 döndürür.
    // if (isalpha(number)) // A-Z , a-z
    // if (isdigit(number)) // 0-9
    // if (islower(number)) // a-z
    // if (isupper(number)) // A-Z
    // toupper('a')         // büyük harfe çevirir.
    // tolower('A')         // küçük harfe çevirir.
    if (isspace(number)) // Boşluksa 1 gönderir
    {
        printf("Correct");
    }
    else
        printf("Wrong");
    return 0;
}
