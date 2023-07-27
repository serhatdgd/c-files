#include <stdio.h>
#include <stdlib.h>

void theMessage(); // declaration
int sumNumber(int,int); // declaration

int main()
{
    theMessage();
    printf("%d",sumNumber(5,4));
    return 0;
}

void theMessage() // declaration
{
    printf("I love C Language\n"); // definition
}

int sumNumber(int x,int y)
{
    return x+y;
}