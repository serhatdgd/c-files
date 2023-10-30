#include <stdio.h>
#include <stdlib.h>

int main()
{
    char message[]="String\'s \\  is \"very\" important ";
    char *messagePtr="how are you today";
    int i=0;
    while (*(messagePtr+i) != '\0')
    {
        printf("%c",*(messagePtr+i));
        i++;
    }
    
    printf("%s",message);
    return 0;
}