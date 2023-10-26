#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MYNUMBER 6

int main()
{
    // #if MYNUMBER > 10                            hangisi doğruysa o satır yazılacak diğeri sanki yazılmamış gibi olacak
    // printf("MYNUMBER is larger than 10");
    // #else
    // printf("MYNUMBER is smaller than 10");
    // #endif

#ifdef MYNUMBER
    printf("MYNUMBER tanimli ve degeri: %d\n", MYNUMBER);
#else
    printf("MYNUMBER tanimli degil\n");
#endif

#ifndef MYAGE
#define MYAGE 21
#endif
    printf("MYAGE:%d\n\n", MYAGE);
    int x=7;
    int* ptr=&x;     //x=7  *ptr=7
    printf("x:%d\n",x);
    printf("x adresi:%x\n",&x);
    printf("x adresi(ptr):%x\n",ptr);
    printf("x değeri:%x\n",*ptr);

    ptr++;
    printf("x adresi(ptr):%x\n",ptr);
    
    return 0;
}
