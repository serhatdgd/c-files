#include <stdio.h>
#include <stdlib.h>
void Print();
int superVariable=7; // burası global
int main()
{
    int superVariable=2;  // burası local
    Print();
    return 0;
}
void Print()
{
    printf("%d\n",superVariable);
}