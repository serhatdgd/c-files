#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str1[30]="Hello ";
    char str2[]="C language";
    char str3[]="Hello C Language";
    char str4[30];
    char str5[]="Hello C Language";
    char str6[]="Hello C Language";
    strcat(str1,str2);
    printf("%s\n",str1);
    strcpy(str4,str3);
    printf("%s\n",str4);
    if(strcmp(str6,str5)==0)
    {
        printf("bu stringler esit\n");
    }
    else
        printf("Bu stringler esit degil");
    printf("\nLength is %ld\n",strlen(alphabet));
    printf("Size is %ld", sizeof(alphabet)); //burada bellek boyutunu veriyor yani \0'ı da sayıyor.
    
}