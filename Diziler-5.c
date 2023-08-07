#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numbers[]={1,2,3,4,5,6,7,8,9};
    printf("%d",sizeof(numbers)/sizeof(numbers[0]));
    // Dizide kaç eleman olduğunu bulma
    return 0;
}