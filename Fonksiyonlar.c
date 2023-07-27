#include <stdio.h>
#include <stdlib.h>

void myMessage()
{
     printf("Now I can write a function");
}

void nameList(char name[], int age)
{
     printf("Hello %s\n%d", name, age);
}

int main()
{
     myMessage();
     nameList("Serhat", 20);
     return 0;
}
